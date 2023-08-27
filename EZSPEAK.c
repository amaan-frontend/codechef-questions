#include <stdio.h>

int main() {
  int t, n;
  char s[101];

  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    scanf("%d %s", &n, s);

    int count = 0;
    int vowel = 0;
    for (int j = 0; j < n; j++) {
      if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u') {
        vowel = 1;
        count = 0;
      } else {
        count++;
        if (count == 4) {
          printf("NO\n");
          break;
        }
      }
    }

    if (count < 4 || !vowel) {
      printf("YES\n");
    }
  }

  return 0;
}
