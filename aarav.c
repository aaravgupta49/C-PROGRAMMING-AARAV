#include<stdio.h>
int main() {
  int RollNo;
  printf("Enter Roll Number : ");
  scanf("%d", &RollNo);
  
 
  char batch;
  printf("Enter batch : ");
  scanf(" %c", &batch); 
  
  float per;
  printf("Enter percentage : ");
  scanf("%f", &per);
  
  printf("Student details\n");
  printf("Roll Number = %d\n", RollNo);
  printf("Batch of student = %c\n" , batch);
  printf("percentage = %f\n" , per);
  
  return 0;}
