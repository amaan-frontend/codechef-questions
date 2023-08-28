#include <stdio.h>

int main() {
  int n, q;
  scanf("%d %d", &n, &q);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < q; i++) {
    int x;
    scanf("%d", &x);
    int product = 1;
    for (int j = 0; j < n; j++) {
      if (x != a[j]) {
        product *= x - a[j];
      }
    }
    if (product > 0) {
      printf("POSITIVE\n");
    } else if (product < 0) {
      printf("NEGATIVE\n");
    } else {
      printf("0\n");
    }
  }
  return 0;
}

