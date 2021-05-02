#include <stdio.h>
#include <list>
using namespace std;

int list_basic(void) {
	list<int> list_nums;

	for (int i = 1; i < 10; i++)
		list_nums.push_back(i); //  1 2 3 4 5 6 7 8 9
	list_nums.push_front(0); // 0 1 2 3 4 5 6 7 8 9
	list_nums.push_back(10); // 0 1 2 3 4 5 6 7 8 9 10

	list_nums.pop_back(); // 0 1 2 3 4 5 6 7 8 9
	list_nums.pop_front(); // 1 2 3 4 5 6 7 8 9

	for (auto iter = list_nums.begin();  iter != list_nums.end(); iter++)
		printf("%d ", (*iter));
	printf("\n");

	for (auto iter = list_nums.rbegin(); iter != list_nums.rend(); iter++)
		printf("%d ", (*iter));
	printf("\n");

	printf("list_nums.front(): %d,\tlist_nums.back():%d\n", list_nums.front(), list_nums.back());
	printf("list_nums.begin(): %p,\tlist_nums.end():%p\n", list_nums.begin(), list_nums.end());

	return 0;
}