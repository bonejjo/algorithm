#include <iostream>
using namespace std;
int map[1010];
int cnt=0;
int visit[1010];
int start=1;

void dfs(int x){
	if(map[x]==start){
		cnt++;
		visit[x]=1;
		return;
	}
	if(visit[x]==1){
		return;
	}
	dfs(map[x]);
	visit[x]=1;
}
int main() {
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=1;i<=n;++i){
			scanf("%d",&map[i]);
		}
		for(;start<=n;++start){
			dfs(start);
		}	
		cout<<cnt<<endl;
		start=1;
		cnt=0;
		for(int i=1;i<=n;++i){
			map[i]=0;
			visit[i]=0;
		}
	}
	return 0;
}