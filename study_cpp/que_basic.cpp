#include <queue>
#include <stdio.h>
using namespace std;

int main(void) {
	queue<int> que({ 10,20,30 });
	que.push(40);
	que.push(50);

	/* queue ¼øÈ¸ */
	while(!que.empty()){
		int num = que.front();
		que.pop();
		printf("%d ", num);
	}
	printf("\n");
	// 10 20 30 40 50
}