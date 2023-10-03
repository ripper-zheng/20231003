#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
int my_max(int a, int b) {
       if (a > b)return a;
       else
       {
              return b;
       }
}
int my_min(int a, int b) {
       if (a < b)return a;
       else return b;
}
int main() {
       int n, a, b;
       scanf("%d %d %d", &n, &a, &b);
       int s = 0;
       for (int i = 0; i < n; i++)
       {
              int x1, y1, x2, y2;
              scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
              int x = my_min(a, x2) - my_max(0, x1);
              int y = my_min(b, y2) - my_max(0, y1);
              if (x > 0 && y > 0)s += x * y;
       }
       printf("%d", s);
       return 0;
}
