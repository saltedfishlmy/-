#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>

char itoc(int val){
    char c;
    c = val + '0';
    return c;
}
int ctoi(char c){
    int val = 0;
    if(c <= '9'&& c >='0'){
         val = c - '0';
    }else{
         val = c - 'A' + 10;
    }
    return val;
}


int main(){
    int base1,base2;
    char number[1000]  = {0};
    while(scanf("%d %d %s",&base1,&base2,number)!=EOF){
        int flag = 0;
        for(int i = 0; i <= strlen(number); i++){
            if(ctoi(number[i]) >= base1 ){
                flag = 1;
            }
        }
        
        long val = strtol(number,NULL,base1);
        long valtemp = val;
        
        
        char strdr[2000] = {0};
        int idr =0, p = 0;
        
        while(val!=0)
        {
            idr=val%base2;
            if(idr>=10)
                strdr[p++]=idr-10+65;
            else
                strdr[p++]=idr+48;
            val/=base2;
        }
        for(int i=0;i<p/2;i++)
        {
            char t=strdr[i];
            strdr[i]=strdr[p-i-1];
            strdr[p-i-1]=t;
        }
        strdr[p]='\0';
        
        
    
    if(flag == 1){
        printf("%s is an illegal base %d number\n",number,base1);
        
    }else{
        if(valtemp == 0){printf("%s base %d = 0 base %d\n",number,base1,base2);
        }else{
            printf("%s base %d = %s base %d\n",number,base1,strdr,base2);
        }
        
    }
        
        for(int i = 0 ; i < 100; i++){
            number[i] = 0;
        }
    }
    return 0;
}



