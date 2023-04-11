#include <stdio.h>

/*
 * main - Write a program that prints the number of arguments passed into it.
 * @argc: The number of argument.
 * @argv: An array of pointers
 *
 * Return: always 0.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
  printf("%d\n", argc - 1);

  return (0);
}
