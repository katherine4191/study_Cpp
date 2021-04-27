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
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        vec_nums.push_back(num);
    }
    printf("vector.front(): %d \n", vec_nums.front());
    printf("vector.back(): %d \n", vec_nums.back());
    printf("vector's elements count: %d \n", vec_nums.size());

    // printf("vector.pop_back(): %d \n", numbers.pop_back());
    vector<int> :: iterator v_iter;
    for (v_iter = vec_nums.begin(); v_iter != vec_nums.end(); v_iter++) {
        printf("%d ", (*v_iter));
        if((*v_iter) == 3){
            vec_nums.erase(v_iter);
        }
    }

    // vec_nums.insert(2,3);
    // v.insert(2, 3, 4);
    // v.insert(2, 3);

    return 0;
}