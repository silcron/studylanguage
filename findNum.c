#include <stdio.h>

int main() {
    int n;
    int num;
    int max = -999999; // 아주 작은 값으로 초기화

    printf("몇 개의 숫자를 입력할 건가요? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d번째 숫자 입력: ", i + 1);
        scanf("%d", &num);

        if (num > max) {
            max = num;  // 더 큰 값으로 바꿔줌
        }
    }

    printf("가장 큰 값은 %d 입니다.\n", max);

    return 0;
}
