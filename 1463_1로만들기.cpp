#include <iostream>
using namespace std;

int array[1000001];

int main() {
	int n;
	scanf("%d",&n);
	array[1]=0;
	array[2]=1;
	array[3]=1;
	int temp;
	for(int i=4;i<=n;++i){
		array[i]=array[i-1]+1;
		if(i%2==0){
			temp=array[i/2]+1;
			if(temp<array[i]){
				array[i]=temp;
			}
		}	
		if(i%3==0){
			temp=array[i/3]+1;
			if(temp<array[i]){
				array[i]=temp;
			}
		}
	}
	printf("%d\n",array[n]);
	return 0;
}