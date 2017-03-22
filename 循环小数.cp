#include <iostream>
using namespace std;

int main(){
    
    int a,b;
    while(cin>>a>>b){
        cout<<a<<'/'<<b<<"="<<a/b<<".";
        a %= b;
        a*= 10;
        int yushu[3100],shang[3100];
        
        for(int i = 0; i < 3000; i ++){
            yushu[i] = a%b;
            shang[i] = a/b;
            a = a%b;
            a = a*10;
        }
        for(int i = 0; i < 3000; i++){
            for(int j =i+1;j < 3000;j++ ){
                if(yushu[i]==yushu[j]&&shang[i]==shang[j]){
                    for(int k = 0; k < i;k++){
                        cout<<shang[k];
                    }
                    cout<<'(';
                    if(j-i<=50){
                        for(int k = i; k < j;k++){
                            cout<<shang[k];
                        }
                        
                        cout<<')'<<endl;
                        cout<<" "<<j-i;
                        goto end1;
                        
                        
                    }
                    else{
                        for(int k = i; k < i+50;k++){
                            cout<<shang[k];
                        }
                        cout<<"...)"<<endl;
                        cout<<" "<<j-i;
                        goto end1;
                        
                        
                        
                        
                    }
                    
                }
            }
        }
        
        
    end1:cout<<" = number of digits in repeating cycle"<<endl<<endl;
    }
    return 0;
}