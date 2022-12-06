#include <iostream>
#define N 3
int main() {
     
    int case = 1;
    int j = 1;
    int i = 0;
    int array[N][N];

    for (i; i < N; i++) {
        array[0][i] = case;
        case++;
    }
    for (j; j < N; j++) {
        array[j][i - 1] = case;
        case++;
    }
    for (int i = N - 2; i >= 0; i--) {
        array[j - 1][i] = case;
        case++;
    }
    for (int i = 0; i <= N - 2; i++) {
        array[1][i] = case;
        case++;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << array[i][j] ;

        }
        std::cout << '\n';
    }

