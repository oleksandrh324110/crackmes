#include <stdio.h>

int main(void) {
  char word[17] = "mgdilolmsoamasiug";

  for (size_t i = 0; i < 17; ++i)
    word[word[i] % 17] = word[i];

  printf("%s\n", word);
}
