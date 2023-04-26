#include <stdio.h>
#include <stdlib.h>

#define MAX_ITEMS 100
#define MAX_WEIGHT 1000

struct item {
    int value;
    int weight;
};

struct node {
    int level;
    int profit;
    int weight;
};

int n;
int max_weight;
int best_value;
int solution[MAX_ITEMS];
struct item items[MAX_ITEMS];

void knapsack() {
    struct node stack[MAX_ITEMS * 2];
    int top = 0;
    struct node current = {0, 0, 0};
    stack[top++] = current;
    while (top > 0) {
        current = stack[--top];
        if (current.level == n) {
            if (current.profit > best_value) {
                best_value = current.profit;
                for (int i = 0; i < n; i++) {
                    solution[i] = items[i].weight;
                }
            }
            continue;
        }
        if (current.weight + items[current.level].weight <= max_weight) {
            struct node child = {current.level + 1,
                                 current.profit + items[current.level].value,
                                 current.weight + items[current.level].weight};
            stack[top++] = child;
        }
        struct node child = {current.level + 1,
                             current.profit,
                             current.weight};
        stack[top++] = child;
    }
}

int main() {
    printf("enter n and maximum weight");
    scanf("%d%d", &n, &max_weight);
    for (int i = 0; i < n; i++) {
    printf("Item %d: ", i + 1);
    printf(" enter value = "); 
        scanf("%d", &items[i].value);
         printf(" enter weight = "); 
        scanf("%d", &items[i].weight);
        
        
    }
    knapsack();
    printf("Best value = %d\n", best_value);
    printf("Best solution:");
    for (int i = 0; i < n; i++) {
        printf(" %d", solution[i]);
    }
    printf("\n");
    return 0;
}
