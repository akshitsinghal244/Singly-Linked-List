#include "func.h"

#define MAX_SIZE 100
static int cur_max;
static int list [MAX_SIZE];

void CreateList () {
    printf("Enter number of elements: ");
    scanf("%d", &cur_max);
    printf("Enter elements: ");
    for (int i = 0; i < cur_max; i++) {
        scanf("%d", &list [i]);
    }
}

void Display () {
    for (int i = 0; i < cur_max; i++) {
        printf("%d ", list [i]);
    }
    printf("\n");
}

void Delete () {
    int i;
    printf("Enter element to be deleted: ");
    scanf("%d", &i);
    for (int k = 0; k < cur_max; k++) {
        if (list [k] == i) {
            list [k] = list [k + 1];
            list [k + 1] = list [k];
            cur_max--;

        }
    }
    printf("Element deleted\n");
}

void Search () {
    int n;
    printf("Enter element to be searched: ");
    scanf("%d", &n);
    for (int i = 0; i < cur_max; i++) {
        if (list [i] == n) {
            printf("Element is present\n");
        }
        else {
            printf("Element is not present\n");
        }
    }

}

void Modify () {
    int n,m;
    printf("Enter element to be modified: ");
    scanf("%d", &n);
    for (int i = 0; i < cur_max; i++) {
        if (list [i] == n) {
            printf("Enter element to be modified to: ");
            scanf("%d", &m);
            list [i] = m;
            printf("Element modified\n");
        }
        else {
            printf("Element not present\n");
        }
    }
}

bool Insert () {
    int data,pos;
    printf("Enter element to be inserted: ");
    scanf("%d", &data);
    printf("Enter the position of element to be inserted: ");
    scanf("%d", &pos);
    if (pos == MAX_SIZE|| pos<0) {
        printf("Invalid Position\n");
        return false;
    }
    if (pos > cur_max + 1) {
        pos = cur_max + 1;
    }
    for (int i = cur_max -1; i >= pos -1; i--) {
        list [i + 1] = list [i];
        list [i] = data;
        cur_max++;
        return true;
    }
}

bool IsListEmpty () {
    return cur_max == 0;
}


