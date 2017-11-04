#include <iostream>
using namespace std;

int main() {
	int T;
	int R;
	string s;
	cin>>T;
	while(T--){
		cin>>R;
		getchar();
		cin>>s;
		string t;
		for(int i=0;i<s.length();++i){
			for(int j=0;j<R;++j){
				t+=s[i];
			}
		}
		cout<<t<<endl;
	}
	return 0;
}