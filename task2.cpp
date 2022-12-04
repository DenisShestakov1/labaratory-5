#include <iostream>
#define N 3
int main() {
     
    int Counter = 1;
    int j = 1;
    int i = 0;
    int array[N][N];

    for (i; i < N; i++) {
        array[0][i] = Counter;
        Counter++;
    }
    for (j; j < N; j++) {
        array[j][i - 1] = Counter;
        Counter++;
    }
    for (int y = N - 2; y >= 0; y--) {
        array[j - 1][y] = Counter;
        Counter++;
    }
    for (int x = 0; x <= N - 2; x++) {
        array[1][x] = Counter;
        Counter++;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << array[i][j] ;

        }
        std::cout << '\n';
    }

}
