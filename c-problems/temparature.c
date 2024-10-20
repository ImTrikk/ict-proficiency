#include <stdio.h>

int main()
{

 int temp;

 printf("Enter your temparature: \n");
 scanf("%d", &temp);

 if (temp < 37)
 {
  printf("Temparature is normal\n");
 }
 else if (temp >= 37 && temp <= 38)
 {
  printf("You have fever please drink paracetamol \n");
 }
 else if (temp >= 39 && temp <= 40)
 {
  printf("Consult to a doctor!");
 }
 else if (temp >= 41 && temp <= 42)
 {
  printf("You are fkd");
 }
 else if (temp >= 43)
 {
  printf("Amen");
 }
}