#include <iostream>
using namespace std;

int arr[2187][2187];
int output[3];
void func(int x,int y,int size){
	int cur=arr[x][y];
	bool flag=true;
	for(int i=x;i<x+size&&flag;++i){
		for(int j=y;j<y+size&&flag;++j){
			if(cur!=arr[i][j]){
				flag=false;
			}
		}
	}
	if(flag){
		output[cur+1]++;
	}
	else{
		func(x,y,size/3);
		func(x,y+size/3,size/3);
		func(x,y+(size/3)*2,size/3);
		func(x+size/3,y,size/3);
		func(x+size/3,y+size/3,size/3);
		func(x+size/3,y+(size/3)*2,size/3);
		func(x+(size/3)*2,y,size/3);
		func(x+(size/3)*2,y+size/3,size/3);
		func(x+(size/3)*2,y+(size/3)*2,size/3);
	}
}
int main() {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			scanf("%d",&arr[i][j]);
		}
	}
	func(0,0,n);
	for(int i=0;i<3;++i){
		cout<<output[i]<<endl;
	}
	return 0;
}