#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	scanf("%d",&N);
	int a[3];
	int hanCnt=0;
	for(int i=1;i<=N;++i){
		if(i>0 && i<100) hanCnt=i;
		else if(i==1000) break;
		else{
			int k=0;int t=i;
			while(t>0){
				a[k]=t%10;
				t/=10;
				k++;	
			}
			if(a[0]-a[1]==a[1]-a[2]) hanCnt++;
		}
	}
	printf("%d\n",hanCnt);
	return 0;
}