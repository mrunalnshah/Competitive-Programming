#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin >>a>>b;

        if(b<=3){
			cout<<-1<<"\n";
		} else if(a==b ){
            if(a%2==0){
				cout<<2<<" "<<a-2<<"\n";
            }
			else {
                int i=2;
                int p=-1;
                for( i=2;i*i<=a;i++){
                    if(a%i==0){
                        p=i;
                        break;
                    }
                }
                if(p==-1 || a-p ==0){
					cout<<-1<<"\n";
                }else {
					cout<<p<<" "<<a-p<<"\n";
				}
			}
        }

        else {
			cout<<2<<" "<<b-(b&1)-2<<"\n";
		}
    }
    return 0;
}