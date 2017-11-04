#include <iostream>
using namespace std;
string name;
int cnt;
int alpha[30];
int main() {
	int N;
	cin>>N;
	for(int i=1;i<=N;++i){
		cin>>name;
		alpha[name.at(0)-96]++;
	}
	for(int i=1;i<=27;++i){
		if(alpha[i]>=5){
			cnt++;
			printf("%c",i+96);
		}
	}
	if(cnt==0){
		cout<<"PREDAJA";
	}
	return 0;
}