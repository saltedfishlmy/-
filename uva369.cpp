#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

int main(){
int m,n,i;
double c;
while(scanf("%d%d",&n,&m)!=EOF){
	c = 1.0;
	for(i = n; i > n-m; --i){
		c *=(double)i;
	}
	for(i = 2; i <=m; i++){
		c/=(double)i;

	}
	printf("%ld things taken %ld at a time is %ld exactly.",n,m,c);
}

return 0;
}