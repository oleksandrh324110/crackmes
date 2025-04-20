#include <stdio.h>
#include <string.h>

int sub_1159(const char *a1) {
  unsigned int v2; // [rsp+18h] [rbp-18h]
  int i;           // [rsp+1Ch] [rbp-14h]

  v2 = 0;
  for (i = 0; i < strlen(a1); ++i)
    v2 += a1[i];
  return v2;
}

int main(int a1, const char **a2) {
  int v4; // ebx
  int v5; // [rsp+1Ch] [rbp-14h]

  v4 = (3 * *a2[1]) ^ sub_1159(a2[1]);
  v5 = v4 << 10;
  printf("%d\n", v5);
  /*if (v5 == atoi(a2[2]))*/
  /*  puts("Good job!");*/
  /*else*/
  /*  puts("Wrong key!");*/
  return 0;
}
