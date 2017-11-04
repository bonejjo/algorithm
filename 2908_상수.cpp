#include <iostream>
using namespace std;
char a[3],a2[3];
int b[3],b2[3];
int main() {
	for(int i=0;i<3;++i){
		scanf("%c",&a[i]);	//문자열로 한글자씩 입력받기
	}
	getchar();	//띄어쓰기때문(입출력버퍼 비우기)
	for(int i=0;i<3;++i){
		scanf("%c",&a2[i]);
	}
	for(int i=0;i<3;++i){
		b[i]=a[i]-'0';	//문자를 정수형으로 바꿔주기 위함
		b2[i]=a2[i]-'0';
	}
	
	int temp=b[0];
	b[0]=b[2];
	b[2]=temp;
	
	int t=b2[0];
	b2[0]=b2[2];
	b2[2]=t;

	int x=b[0]*100+b[1]*10+b[2];
	int y=b2[0]*100+b2[1]*10+b2[2];
	if(x>y){
		cout<<x<<endl;	
	}else{
		cout<<y<<endl;
	}
	return 0;
}