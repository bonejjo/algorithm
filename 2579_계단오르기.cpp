#include <iostream>
using namespace std;
 
int array[310];
int dp[310];
int max(int a,int b){
	return a>b?a:b;
}
int main() {
	int num;
	scanf("%d",&num);
	for(int i=0;i<num;++i){
		scanf("%d",&array[i]);
	}
	dp[0]=array[0];
	dp[1]=max(array[0]+array[1],array[1]);
	dp[2]=max(array[0]+array[2],array[1]+array[2]);
	for(int i=3;i<num;++i){
		dp[i]=max(dp[i-2]+array[i],dp[i-3]+array[i]+array[i-1]);
	}
	cout<<dp[num-1]<<endl;
	return 0;
}