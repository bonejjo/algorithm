#include <iostream>
using namespace std;
 
//0이 소수 1이 소수아님
int a[246913],n;
#define SIZE 246913
 
int main() {
	a[1]=1;
	for(int i=2;i<SIZE;++i){
		if(a[i]) continue;
		for(int j=i+i;j<SIZE;j+=i){
			a[j]=1;
		}
	}	
	while(1){
		scanf("%d",&n);
		if(!n) break;
		int cnt=0;
		for(int i=n+1;i<=2*n;++i){
			if(!a[i]) cnt++;
		}
		printf("%d\n",cnt);
	}
	return 0;
}