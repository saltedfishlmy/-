#include <iostream>
#include <vector>
int arr[8][8];

int c[8];
int sum;
void search(int row,int add){
    if(row == 8){
        sum = add;
    }
    else{
        for(int i = 0; i < 8; i++){
            c[row] = i;
            int ok = 1;
            for(int j = 0; j < row; j++){
                if(c[j]==c[row]|| row - c[row] == j - c[j] || row + c[row] == j + c[j]){
                    ok = 0;
                    break;
                }
            }
            if(ok == 1){
                search(row+1,add+arr[row][i]);
            }
        }
    }
}

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        
        
        for(int i = 0; i < 8;i++){
            for(int j = 0; j < 8; j++){
                
                scanf("%d",&arr[i][j]);
            }
        }
        
        
        search(0,0);
        printf("%5d\n",sum);
    }

    
    
    
    return 0;
}