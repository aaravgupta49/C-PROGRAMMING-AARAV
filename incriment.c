include<stdio.h>
int main() {
  int x;
  x = 5;
  printf("original value of x = %d\n" , x++);
  printf("After one incriment x = %d\n", x++);
  printf("After two incriment x = %d\n" , x++);
  prinf("After three incriment x = %d\n" , x);
  
  printf("value of (++x - --x) is = %d\n" , ++x - --x);
  
  printf("final value of x = %d\n" , x);
 }
