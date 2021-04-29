#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int vec_basic(void) {
    int n = 0, num = 0;
    vector<int> vec_nums;
    vec_nums.reserve(5);

    /* vector�� ���� */
    vec_nums.insert(vec_nums.begin(), 2, 20);
    vec_nums.insert(vec_nums.begin() + 2, 30);
    vec_nums.push_back(40);
    vec_nums.push_back(50); // 20 20 30 40 50
    
    /* vector�� ���� */
    vec_nums.pop_back(); // 20 20 30 40
    vec_nums.erase(vec_nums.begin());  // 20 30 40
    vec_nums.erase(vec_nums.begin(), vec_nums.begin() + 2);  // 40

    /* ������ ��� */
    vector<int> vec_numbers = {10, 20, 30, 40, 50};
    for (int i = 0; i < vec_numbers.size(); i++)
        printf("%d ", vec_numbers[i]); // 10 20 30 40 50
    printf("\n");

    vector<int>:: iterator vec_iter;
    for(vec_iter = vec_numbers.begin(); vec_iter != vec_numbers.end(); vec_iter++)
        printf("%d ", (*vec_iter));  // 10 20 30 40 50
    printf("\n");
    
    // �Ųٷ� ���
    for ( auto iter = vec_numbers.rbegin(); iter != vec_numbers.rend(); iter++)
        printf("%d ", (*iter)); // 50 40 30 20 10
    printf("\n");

    return 0;
}

