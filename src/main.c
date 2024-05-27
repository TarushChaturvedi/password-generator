#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char numbers[] = "1234567890";
const char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
const char ALPHABETS[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const char symbols[] = "~!@#$%^&*()-_=+|:;'<>.?\\/";

void genPassword(int len) {

  int randomizer = 0;
  
  srand((uint)time(NULL)); // Set differrent seed each time

  char* password = malloc(sizeof(char) * len + 1);

  randomizer = rand() % 4;

  for (int i = 0; i < len; i++) {
    if (randomizer == 1) {
      password[i] = numbers[rand() % strlen(numbers)];
      randomizer = rand() % 4;
      printf("%c", password[i]);
    } else if (randomizer == 2) {
      password[i] = alphabets[rand() % strlen(alphabets)];
      randomizer = rand() % 4;
      printf("%c", password[i]);
    } else if (randomizer == 3) {
      password[i] = ALPHABETS[rand() % strlen(ALPHABETS)];
      randomizer = rand() % 4;
      printf("%c", password[i]);
    } else {
      password[i] = symbols[rand() % strlen(symbols)];
      randomizer = rand() % 4;
      printf("%c", password[i]);
    }
  }

  free(password); // Free up memory

  printf("\n");
}

int main(int argc, const char* argv[]) {

  if (argc != 2) {
    fprintf(stderr, "Invalid usage!\nCorrect usage: %s <password length>\n", argv[0]);
    return -1;
  }

  int len = atoi(argv[1]);
  genPassword(len);

  return 0;
}
