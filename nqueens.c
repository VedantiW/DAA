#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MAX 10
clock_t start, end;

int board[MAX][MAX];
int n;

bool is_attacked(int row, int col) {
    int i, j;
    for (i = 0; i < n; i++) {
        if (board[row][i] || board[i][col])
            return true;
    }
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j])
            return true;
    }
    for (i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j])
            return true;
    }
    return false;
}

void print_board() {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}

bool solve(int col) {
