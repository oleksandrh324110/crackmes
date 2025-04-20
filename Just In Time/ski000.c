#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef long long __int64;
typedef unsigned long long __uint64;
typedef short __int16;
typedef unsigned long long _QWORD;
typedef unsigned char __uint8;
typedef char _BYTE;
typedef unsigned int _DWORD;

__int64 qword_4070;

char *sub_138A(char *a1) {
  size_t v1;    // rbx
  char *result; // rax
  // Increase array size to hold s, v4, v5, and null terminator
  char s[17]; // 8 bytes (s) + 8 bytes (v4) + 1 byte (v5) + 1 null terminator
  int i;      // [rsp+2Ch] [rbp-14h]

  // Initialize s with all intended bytes
  *(_QWORD *)s = 0xCCEA4AEED4F2E694LL;       // 8 bytes
  *(_QWORD *)(s + 8) = 0x4A7ED2EEE8F8F0F0LL; // 8 bytes (v4)
  s[16] = 0;                                 // v5 = 0 (null terminator)

  for (i = 0; i < 16; ++i) { // Process 16 bytes (exclude null terminator)
    v1 = i;
    putchar(((__uint8)s[i] >> 1) - 5);
  }
  result = fgets(a1, 24, stdin);
  if (!result)
    exit(1);
  return result;
}

bool sub_11BA(_BYTE *a1) {
  int v2 = *(_DWORD *)qword_4070 % 10 % 3;
  return a1[3] != 107 || 4 * (char)a1[11] != 196 || 4 * (char)a1[5] != 228 ||
         a1[12] != 70 || (char)a1[7] << v2 != 246 || (char)a1[1] << v2 != 200 ||
         (char)a1[13] << v2 != 104 || 4 * (char)a1[8] != 184 || *a1 != 37 ||
         (char)a1[2] << v2 != 212 || a1[9] != 102 || a1[6] != 94 ||
         (char)a1[10] << v2 != 128 || (char)a1[4] << v2 != 80;
}

bool sub_1189(const char *a1) { return strlen(a1) != 15; }

int main(int a1, char **a2) {
  size_t v3; // rbx
  size_t v4; // rbx
  // Increase array sizes to hold all bytes + null terminator
  char s[25]; // 8 (s) + 8 (v7) + 8 (v8) + 8 (v9) + 2 (v10) = 24 bytes + 1 null
  char v11[17]; // 8 (v11) + 8 (v12) + 4 (v13) = 16 bytes + 1 null
  char v15[24]; // Input buffer
  int i, j;     // Loop variables
  time_t timer; // [rsp+68h] [rbp-38h]

  time(&timer);
  qword_4070 = (__int64)localtime(&timer);
  sub_138A(v15);
  if (sub_11BA(v15) || sub_1189(v15)) {
    // Failure case: process v11, v12, v13
    *(_QWORD *)v11 = 0xD0D4EEEEE8D0E69CLL;       // 8 bytes
    *(_QWORD *)(v11 + 8) = 0xE8F8F0F0CCEA4AF2LL; // 8 bytes
    v11[16] = 0;                                 // Null terminator
    for (i = 0; i < 16; ++i) {                   // Process 16 bytes
      v4 = i;
      putchar(((__uint8)v11[i] >> 1) - 5);
    }
  } else {
    // Success case: process s, v7, v8, v9, v10
    *(_QWORD *)s = 0x4AF2D0D4EEEEE890LL;        // 8 bytes
    *(_QWORD *)(s + 8) = 0xD2EEE8F8F0F0CCEALL;  // 8 bytes
    *(_QWORD *)(s + 16) = 0xEED8E6E8904A4A66LL; // 8 bytes
    s[24] = 0;                                  // Null terminator
    for (j = 0; j < 24; ++j) {                  // Process 24 bytes
      v3 = j;
      putchar(((__uint8)s[j] >> 1) - 5);
    }
  }
  return 0;
}
