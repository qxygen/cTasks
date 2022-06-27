#include <stdio.h>
#include <stdlib.h>

double func1() {
  int a, b, c, d, e;
  printf("Введите 5 чисел:");
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  return ((double)(a + b + c + d + e)) / 5.0;
}

void func2(void) {
  int a;
  printf("Введите число: ");
  scanf("%d", &a);
  if (a % 2 == 0)
    printf("Четное");
  else
    printf("Нечетное");
}

void func3(void) {
  int sum = 0;
  int i = 1;
  while (i < 11) {
    sum += i;
    i++;
  }
  printf("Сумма от 1 до 10: %d", sum);
}


void func5(void) {
  int num;
  printf("Введите число для проверки на палиндром: ")
  scanf("%d", &num);
  if (num % 10 == num / 10000 & num % 100 / 10 == num / 1000 % 10)
    printf("Палиндром");
  else
    printf("Не палиндром");
}

void func6(void) {
  int count = 0, q, r = 0, num;
  scanf("%d", &num);
  q = num;
  while (q != 0) {
    r = q % 10;
    q = q / 10;
    if (r == 7) {
      count++;
    };
  };
  printf("%d", count);
}

void func7(void) {
  double r, p = 3.14159, d, s, l;
  scanf("%lf", &r);
  d = r * 2;
  l = d * p;
  s = p * r * r;
  printf("d = %lf, l = %lf, s = %lf", d, l, s);
}

void func8(void) {
  int i, num, res = 1;
  scanf("%d", &num);
  i = num;

  while (i > 1) {
    res *= i;
    i--;
  };
  printf("%d", res);
}

int fact(int n) {
  int i, res = 1;
  i = n;
  while (i > 1) {
    res *= i--;
  }
  return res;
}

void func9(void) {
  double x, x1 = 1, sum = 1;
  int i = 1;
  scanf("%lf", &x);
  while (i <= 10) {
    x1 *= x;
    sum += x1 / fact(i++);
  }
  printf("%lf", sum);
}

void func10(void) {
  int age;
  printf("Введите ваш возраст: ");
  scanf("%d", &age);
  printf("%d лет, %d дней", age, age * 365);
}

void func11(void) {
  int toes = 10;
  printf("toes:%d,2*toes:%d,toes*toes:%d", toes, toes * 2, toes * toes);
}

void func12(void) {
  double cm;
  printf("Рост в сантиметрах:  ");
  scanf("%lf", &cm);
  printf("Рост в дюймах: %lf", cm / 2.54);
}

int main() {
  func12();
  return 0;
}
