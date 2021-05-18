#include <deque>
#include <stdio.h>

using namespace std;

int main(void) {
	deque<int> dq;

	for (int i = 1; i < 5; i++){
		dq.push_back(i);
	}
	for (int i = 5; i < 10; i++) {
		dq.push_front(i);
	}

	// 공부하자!
	//ghghgl
	// hihi

	return 0;
}

// https://blockdmask.tistory.com/73