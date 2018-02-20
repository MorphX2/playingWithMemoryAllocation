#include<stdio.h>
#include<stdlib.h>

int main() {
  int *ptr, y, num[100];
  for (y = 0; y < 10; y++) {
    ptr = (int*) malloc(num[y] * sizeof(int));
    printf("Pointer size: %ld \n", sizeof(ptr)/sizeof(int));
    printf("Entering: %d ", y);
    scanf("%d",&num[y]);
  }

  if(ptr == NULL) {
    printf("Error! memory not allocated.");
    exit(0);
  } else {
    printf("Size of num is: %ld", sizeof(num)/sizeof(int));
  }
}
