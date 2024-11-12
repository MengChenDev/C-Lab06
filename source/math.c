#pragma once

int Factorial(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else
  {
    return n * Factorial(n - 1);
  }
}

int CalculateFactorial(void)
{
  int n = 0, sum = 0;
  printf("请输入要计算阶乘的数：\n");
  scanf(" %d", &n);
  sum = Factorial(n);
  printf("计算结果为：%d\n", sum);
  return 0;
}

int Common(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  return Common(b, a % b);
}

int GreatestCommonDivisor(void)
{
  int num1 = 0, num2 = 0;
  int result = 0;

  printf("请输入两个整数: ");
  scanf("%d %d", &num1, &num2);

  result = Common(num1, num2);
  printf("%d 和 %d 的最大公约数是 %d\n", num1, num2, result);

  return 0;
}

int Sum(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else
  {
    return n + Sum(n - 1);
  }
}

int SumNaturalNumbers(void)
{
  int n = 0;
  int sum = 0;

  printf("请输入要计算求和的自然数：");
  scanf(" %d", &n);

  sum = Sum(n);

  printf("自然数和为：%d\n", sum);

  return 0;
}

int Power(int n, int m)
{
	if (m == 1)
	{
		return n;
	}
	else
	{
		return n * Power(n, m - 1);
	}
}

int CalculatePower(void)
{
	int num_1 = 0, num_2 = 0;
	int sum = 0;

	printf("请输入要计算乘方的数：");
	scanf(" %d", &num_1);
	printf("请输入要计算数的乘方：");
	scanf(" %d", &num_2);

	sum = Power(num_1, num_2);

	printf("%d的%d次方为： %d\n", num_1, num_2, sum);

	return 0;
}