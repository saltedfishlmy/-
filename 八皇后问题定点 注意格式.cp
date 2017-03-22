#include <iostream>
#include <vector>
int a1,a2;
int count;
int c[8];
int sum;
void print_sequence(){
    if(c[a1-1] == a2-1){
        printf("%2d      ",++count);
         printf("%d",c[0]+1);
        for(int i = 1; i < 8; i++){
            
            printf(" %d",c[i]+1);
            
            
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
    scanf("%d",&a);
    while(a--){
        
        scanf("%d %d",&a2,&a1);
        
        printf("SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n");
        
        search(0);
        if(a)printf("\n");
        count = 0;
        
    }
    
    return 0;
}
/*这道题要注意的是PE问题，尽量照清楚格式，有可能每组数据中间换行但是最后不换行，有可能是每个数中间有空格但是最后是没有空格的
 if anything we don't want to harm you but we need to survive!!
