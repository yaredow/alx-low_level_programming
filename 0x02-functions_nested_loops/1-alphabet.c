#include <main.h>

/**
  * main- prints alphabet in lower case followed by new line
  *
  * Return: always 0
  *
  */

void ft_putchar(char c) { write(STDOUT_FILENO, &c, 1); }

void ft_print_alphabet(void) {
  char letter;

  letter = 'a';
  while (letter <= 'z') {
    ft_putchar(letter);
    letter++;
  }
}

int main(void) {
  ft_print_alphabet();
  return 0;
}

