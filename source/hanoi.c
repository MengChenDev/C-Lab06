// hanoi.c
#include "../header/hanoi.h"
#include <stdio.h>

int Hanoi(int n, char a, char b, char c)
{
  if (n == 1)
  {
    printf("第%d次移动：从%c到%c \n", n, a, b);
  }
  else
  {
    Hanoi(n - 1, a, c, b);
    printf("第%d次移动：从%c到%c \n", n, a, b);
    Hanoi(n - 1, c, b, a);
  }
  return 0;
}

int TowerHanoiIssue()
{
  int n = 0;

  printf("请输入汉诺塔的层数：");
  scanf(" %d", &n);

  printf("移动%d层汉诺塔的步骤为：\n", n);
  Hanoi(n, 'A', 'B', 'C');

  return 0;
}