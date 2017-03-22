#include <iostream>
#include <vector>
int a1,a2;
int count;
int c[8];
int sum;
void print_sequence(){
    if(c[a1-1] == a2-1){
printf("%2d      ",++count);
    for(int i = 0; i < 8; i++){
        
            printf("%d ",c[i]+1);
        
        
    }
    printf("\n");
}
}
void search(int row){
    if(row == 8){
        print_sequence();
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
                search(row+1);
            }
        }
    }
}
int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        
        
        scanf("%d %d",&a1,&a2);
        
        printf("SOLN       COLUMN\n\n #      1 2 3 4 5 6 7 8\n");
        
        search(0);
        
        
    }
    return 0;
}