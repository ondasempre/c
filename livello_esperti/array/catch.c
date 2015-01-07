#include <stdio.h>

int catch(float A[], float V[], int n);

int main() {

	float A[] = { 6.9, -1, 7.1, -1, 0};
	float V[] = {-1.5, 7, -0.5, 7.7, 6};
	
	printf("Elementi di A catturati in V: %d.\n",catch(A,V,5));
	
	return 0;
}


int catch(float A[], float V[], int n) {

	int a, b, c, cnt=0;
	for(a=0; a<n; a++) {
		for(b=0;b<n-1; b++) 
			for(c=b+1; c<n; c++) {
			if((V[b] < A[a] && V[c] > A[a]) && (V[c]-V[b]<=1)) 
				cnt++;
			}
	}
	return cnt;

}

