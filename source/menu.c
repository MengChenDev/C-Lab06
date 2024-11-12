#include "../header/menu.h"
#include <stdio.h>
#include <stdlib.h>
#include "hanoi.c"
#include "math.c"

// Menu 菜单
void Menu()
{
  int choice;
  // 清屏
  system("cls");

  // 显示菜单
  showMenu();

  // 接收用户输入
  choice = getChoice();

  // 路由
  system("cls");
  route(choice);

  printf("按下任意键继续...\n");
  getchar();
  getchar();

  return;
}

// 显示菜单
void showMenu()
{
  printf("--------主菜单--------\n");
  printf("1. 汉诺塔问题\n");
  printf("2. 计算阶乘\n");
  printf("3. 求两个正整数的最大公约数\n");
  printf("4. 自然数求和\n");
  printf("5. 计算乘方\n");
  printf("6. 退出程序\n");
  printf("----------------------\n");
  printf("请输入要操作的序号 >>");
}

// 接收用户输入
int getChoice()
{
  int choice;
  while (scanf("%d", &choice) != 1)
  {
    // 清空输入缓冲区
    while (getchar() != '\n')
      ;
    printf("输入有误，请重新输入 >>");
  }
  return choice;
}

// 路由
void route(int choice)
{
  switch (choice)
  {
  case 1:
    TowerHanoiIssue();
    break;
  case 2:
    CalculateFactorial();
    break;
  case 3:
    GreatestCommonDivisor();
    break;
  case 4:
    SumNaturalNumbers();
    break;
  case 5:
    CalculatePower();
    break;
  case 6:
    // 退出程序
    exit(0);
  default:
    break;
  }
  return;
}