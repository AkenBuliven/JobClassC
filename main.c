#include <stdio.h>
#include <string.h>
#include <math.h>
#include <locale.h>



int main() 
{
	setlocale(LC_ALL, "Rus");		
  int age;
  scanf("%d", &age);


  if (age <= 6) 
  {
      printf("Дошкольник");
  }
  if (age >= 7 && age < 19)
  {
      printf("Школьник");
  }
  if (age >= 19 && age <60)
  {
	  printf("Рабочий");
  }
  else
  {
	  printf("Пенсионер");
  }
    return 0;
}

