#include<stdio.h>

int main()
{
   int x, hr, min, sec;
   puts("Enter the number of seconds you want to convert :");
   scanf("%d", &x);
   hr = x / 3600;
   x -=  hr * 3600;
   min = x / 60;
   sec = x - (min * 60);
   printf("Hours : %d\nMinutes : %d\nSeconds : %d", hr, min, sec);

}

