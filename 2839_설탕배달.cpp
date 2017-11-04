#include <iostream>
using namespace std;

int main() {
	int N;
	scanf("%d",&N);
	int cnt=0;
	cnt=N/5;
	N=N%5;
	while(cnt>=0){
		if(N%3==0){
			cnt+=N/3;
			break;
		}
		N+=5;
		cnt--;
	}
	if(cnt<0) cnt=-1;
	cout<<cnt<<endl;
	return 0;
}