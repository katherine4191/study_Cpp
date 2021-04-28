#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

/* input
5
1 2 3 4 5
*/

int main(void) {
    int n = 0, num = 0;
    vector<int> vec_nums;
    vec_nums.reserve(5);

    /* vector의 삽입 */
    vec_nums.insert(vec_nums.begin(), 2, 20);
    vec_nums.insert(vec_nums.begin() + 2, 30);
    vec_nums.push_back(40);
    vec_nums.push_back(50); // 20 20 30 40 50
    
    /* vector의 삭제 */
    vec_nums.pop_back(); // 20 20 30 40
    vec_nums.erase(vec_nums.begin());  // 20 30 40
    vec_nums.erase(vec_nums.begin(), vec_nums.begin() + 2);  // 40

    /* 벡터의 출력 */
    vector<int> vec_numbers = {10, 20, 30, 40, 50};
    for (int i = 0; i < vec_numbers.size(); i++)
        printf("%d ", vec_numbers[i]);
    printf("\n");

    vector<int>:: iterator vec_iter;
    for(vec_iter = vec_numbers.begin(); vec_iter != vec_numbers.end(); vec_iter++)
        printf("%d ", (*vec_iter));
    printf("\n");
    
    // 거꾸로 출력
    for ( auto iter = vec_numbers.rbegin(); iter != vec_numbers.rend(); iter++)
        printf("%d ", (*iter));
    printf("\n");

    return 0;
}

