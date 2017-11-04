#include <iostream>
using namespace std;

int main() {
	char str[111];
	while(scanf(" %[^\n]", str)==1){
		printf("%s\n",str);	
	}
	return 0;
}