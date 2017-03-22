#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
std::vector<int>L;
int num[1010];
int prime[1010];
int is_p[1010];
int isprime(int n)
{
    int i;
    if(n == 1){return 1;}else{
        for (i=2;i<=sqrt(n);i++)
            if(n%i==0)return 0;
        return 1;
    }
}
int countprime(int n){
    int count = 0;
    for(int i = 1; i <= n; i ++){
        if(isprime(i)) count++;
    }
    return count;
}
int main(){
    int i;
    for(i=1;i<=1000;i++)is_p[i]=isprime(i);
    num[0]=0;
    for(i=1;i<=1000;i++)num[i]=num[i-1]+is_p[i];
    L.clear();
    for(i=1;i<1000;i++)if(is_p[i])L.push_back(i);
    int n,c;
    while(scanf("%d%d",&n,&c)!=EOF){
        //  printf("%d\n",num[n]);
        printf("%d %d:",n,c);
        if(num[n]<=2*c){
            for(i=0;i<num[n];i++)printf(" %d",L[i]);
        }
        else {
            if(num[n]&1){
                int m=(num[n]-1)/2;
                for(i=m+1-c;i<=m+c-1;i++)printf(" %d",L[i]);
            }
            else {
                int m=num[n]/2;
                for(i=m-c;i<=m+c-1;i++)printf(" %d",L[i]);
            }
        }
        printf("\n\n");
    }
    return 0;
}