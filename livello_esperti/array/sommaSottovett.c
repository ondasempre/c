    #include <stdio.h>
    #include <stdlib.h>
     
    float maxsum(float A[], int n);
     
    int main(void) {
            float A[] = { 2, -2.5, 10, -5, 20.3, -1 };
            printf("Somma massima: %.2f.\n",maxsum(A,6));
            #ifdef _WIN32
            system("PAUSE");
            #endif
            return EXIT_SUCCESS;
    }
     
    float maxsum(float A[], int n) {
            int index, startIndex=0, endIndex=1;
            float max_sum = 0, tmp_sum = 0;
            while(startIndex != n-1) {
                    for(index=startIndex;index<=endIndex;index++) {
                            tmp_sum += A[index];
                    }
                    if (tmp_sum > max_sum) max_sum = tmp_sum;
                    if (endIndex == n-1) {
                            startIndex++;
                            endIndex = startIndex+1;
                    } else {
                            endIndex++;
                    }
                    tmp_sum = 0;
            }
            return max_sum;
    }

