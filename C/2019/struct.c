// struct.c
#include <stdio.h>

// 構造体を宣言
struct point {
  int x;
  int y;
};

int main(void) {
  //
  struct point p;
  p.x = 100;
  p.y = 150;
  printf("x:%d, y:%d\n", p.x, p.y);

  return 0;
}
