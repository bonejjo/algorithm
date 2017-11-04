#include <iostream>
using namespace std;
string str;
int main() {
	int T;
	cin>>T;
	while(T--){
		cin>>str;
		int cnt=0;
		for(int i=0;i<str.length();++i){
			if(str[i]=='(') cnt++;
			else if(str[i]==')'&&cnt>0) cnt--;
			else if(str[i]==')'&&cnt<=0) {
				cnt--;
				break;
			}
		}
		if(cnt==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}