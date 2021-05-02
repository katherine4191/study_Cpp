#include <stdio.h>
#include <list>
using namespace std;

int main(void) {
	list<int> list_nums;
	list<int>:: iterator iter = list_nums.begin();

	for (int i = 0; i <= 10; i++)
		list_nums.insert(iter, i);

	for (auto list_iter = list_nums.begin(); list_iter != list_nums.end(); list_iter++){
		if((*list_iter)%2 == 0) // 삭제한 원소의 다음 원소를 가리키는 iterator 반환
			list_iter = list_nums.erase(list_iter);
	}

	for (auto list_iter = list_nums.begin(); list_iter != list_nums.end(); list_iter++)
		printf("%d ", (*list_iter)); // 50 40 30 20 10
	printf("\n");

	list_nums.reverse();	printf("reverse \n");
	for (auto list_iter = list_nums.begin(); list_iter != list_nums.end(); list_iter++)
		printf("%d ", (*list_iter)); // 50 40 30 20 10
	printf("\n");
	
	list_nums.sort();		printf("sort \n");
	for (auto list_iter = list_nums.begin(); list_iter != list_nums.end(); list_iter++)
		printf("%d ", (*list_iter)); // 50 40 30 20 10
	printf("\n")

	//  remove, remove_if(predicate)
}