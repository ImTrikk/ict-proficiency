#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
#include <conio.h>
#define getch _getch
#else
#endif

#define MAX_PASSWORD_LENGTH 50

int main()
{
 char password[MAX_PASSWORD_LENGTH + 1];
 char ch;
 int i = 0;

 printf("Enter password: ");

 // Read password character by character
 while (1)
 {
  ch = getch();

  // If Enter is pressed, finish reading
  if (ch == '\r' || ch == '\n')
  {
   password[i] = '\0';
   break;
  }
  // If Backspace is pressed, remove last character
  else if (ch == '\b' && i > 0)
  {
   i--;
   printf("\b \b");
  }
  // For any other character, add to password and print *
  else if (i < MAX_PASSWORD_LENGTH && ch != '\b')
  {
   password[i++] = ch;
   printf("*");
  }
 }

 printf("\nPassword entered: %s\n", password);

 // Here you can add code to validate or hash the password

 return 0;
}