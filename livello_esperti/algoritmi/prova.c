#include <stdio.h>



void insertion_sort(int x[], int n) {
    int i, j, app;
    for (i=1; i<n; i++) {
        app = x[i];
        j = i-1;
        while (j>=0 && x[j]>app) {
            x[j+1] = x[j];
            j--;
        }
        x[j+1] = app;
    }
    return;
}

int main(void) {
    int x[5]={1,3,24,45,69};
    insertion_sort(x, 5);
    int i;
    for(i=0; i<5; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
    return 0;
}