#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX 10000

int solution(int topping[], size_t topping_len) {
    int answer = 0;
    int left_topping[MAX + 1] = { 0 };  // 왼쪽 부분 초콜릿 종류 개수
    int right_topping[MAX + 1] = { 0 }; // 오른쪽 부분 초콜릿 종류 개수
    int num_left = 0;   // 왼쪽 부분 초콜릿 종류 수
    int num_right = 0;  // 오른쪽 부분 초콜릿 종류 수

    // 오른쪽 부분에 있는 초콜릿 종류를 초기화
    for (int i = 0; i < topping_len; i++) {
        int top = topping[i];
        if (right_topping[top] == 0) {
            num_right++; 
        }
        right_topping[top]++;
    }

    // 왼쪽 부분과 오른쪽 부분을 나누면서 균형을 이루는 지점 찾기
    for (int i = 0; i < topping_len - 1; i++) { 

        int top = topping[i];
        left_topping[top]++;
        if (left_topping[top] == 1) {
            num_left++;
        }

        right_topping[top]--;
        if (right_topping[top] == 0) { 
            num_right--;
        }

        if (num_left == num_right) {
            answer++;
        }
    }

    return answer;
}
