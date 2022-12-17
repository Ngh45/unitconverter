#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void cli()
{
  // I will use lolcat/cow for graphics. I am in linux.
  printf("              1. Calculate Mass        \n");
  printf("              2. Calculate length      \n");
  printf("              3. Calculate Area        \n");
  printf("              4. Calculate Time        \n");
  printf("              5. Calculate Temperature \n");
  printf("              6. Calculate Currency    \n");
  printf("              7. Calculate Volume      \n");
}

void graphics()
{
  printf("        ****************************\n");
  printf("        |WellCome to Unit Converter|\n");
  printf("        ****************************\n");
}

int admin()
{
  char name[] = "admin";
  char password[] = "admin";
  char testN[23];
  char pass[23];
  printf("Enter User:");
  scanf("%[^\n]%*c", testN);
  printf("Enter Password:");
  scanf("%[^\n]%*c", pass);
  if (strcmp(name, testN) && strcmp(password, pass))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

float volume(float var)
{
  printf("1. Litter to MiliLitter/cc\n");
  printf("2. MiliLitter/cc to Litter\n");
  int choice;
  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    var = var * 1000;
    break;
  case 2:
    var = var / 1000;
    break;
  default:
    printf("Wrong Input");
    break;
  }
  return var;
}

float temperature(float var) // this is debugged.
{
  printf("1. Celcius to Farenhite\n");
  printf("2. Kelvin to Farenhite\n");
  printf("3. Kelvin to Celcius\n");
  printf("4. Farenhite to Celcius\n");
  printf("5. Farenhite to Kelvin\n");
  printf("6. Celcius to Kelvin\n");
  int choice;
  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    var = var * 9 / 5 + 32;
    break;
  case 2:
    var = (var - 273) * 9 / 5 + 32;
    break;
  case 3:
    var = var - 273;
    break;
  case 4:
    var = (var - 32) * 5 / 9;
    break;
  case 5:
    var = (var - 32) * 5 / 9 + 273;
    break;
  case 6:
    var = var + 273;
    break;
  default:
    printf("Wrong Input");
    break;
  }
  return var;
}

float currency(float var)
{
  printf(" 1. Dollar to Taka\n");
  printf(" 2. Taka to Dollar\n");
  // making choice
  int choice;
  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    var = var * 104.22;
    break;
  case 2:
    var = var / 104.22;
    break;
  default:
    printf("Wrong Choice");
    break;
  }
  return var;
}
float time(float var)
{

  printf(" 1. Second to Hour\n");
  printf(" 2. Minute to Hour\n");
  printf(" 3. Day to Hour\n");
  printf(" 4. Year to Hour\n");
  printf(" 5. Month to Hour\n");
  printf(" 6. Week to Hour\n");
  printf(" 7. Hour to Second\n");
  printf(" 8. Minute to Second\n");
  printf(" 9. day to Second\n");
  printf("10. Hour to Minute\n");
  printf("11. Day to Minute\n");
  // making choice
  int choice;
  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    var = var / 3600;
    break;
  case 2:
    var = var / 60;
    break;
  case 3:
    var = var * 24;
    break;
  case 4:
    var = var * 365 * 24;
    break;
  case 5:
    var = var * 30 * 24;
    break;
  case 6:
    var = var * 7 * 24;
    break;
  case 7:
    var = var * 3600;
    break;
  case 8:
    var = var * 60;
    break;
  case 9:
    var = var * 86400;
    break;
  case 10:
    var = var * 60;
    break;
  case 11:
    var = var * 24 * 60;
    break;
  default:
    printf("Wrong Choice");
    break;
  }
  return var;
}

float mass(float var)
{
  printf("1. Gram to Pound\n");
  printf("2. Kilogram to Pound\n");
  printf("3. Gram to Kilogram\n");
  printf("4. Pound to Kilogram\n");
  printf("5. Pound to Gram\n");
  printf("6. Kilogram to Gram\n");
  // making choice
  int choice;
  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    var = var / 453.592;
    break;
  case 2:
    var = var / 0.453592;
    break;
  case 3:
    var = var / 1000;
    break;
  case 4:
    var = var * 0.453592;
    break;
  case 5:
    var = var * 453.592;
    break;
  case 6:
    var = var * 1000;
    break;
  default:
    printf("Wrong Choice");
    break;
  }
  return var;
}

float area() // I have a bug here
{
  printf("1. Calculate area of rectangle\n");
  printf("2. Calculate area of square\n");
  printf("3. Calculate area of circle\n");
  printf("4. Calculate area of triangle\n");
  // making choice
  int choice;
  scanf("%d", &choice);
  // variable
  int a, b, r;
  int area;
  switch (choice)
  {
  case 1:
    printf("Enter height and width\n");
    scanf("%d%d", &a, &b);
    area = a * b;
    break;
  case 2:
    printf("Enter length of the square\n");
    scanf("%d", &a);
    area = a * a;
    break;
  case 3:
    printf("Enter radius of the square\n");
    scanf("%d", &r);
    area = 3.14 * r * r;
    break;
  case 4:
    printf("Enter height of the width\n");
    scanf("%d%d", &a, &b);
    area = .5 * a * b;
    break;
  default:
    printf("Wrong Choice");
    break;
  }
  return area;
}

float length(float var)
{
  printf(" 1. Mile to Kilometer\n");
  printf(" 2. Meter to Kilometer\n");
  printf(" 3. Mile to Meter\n");
  printf(" 4. Kilometer to Meter\n");
  printf(" 5. Centimeter to Meter\n");
  printf(" 6. Inch to Meter\n");
  printf(" 7. Foot to Meter\n");
  printf(" 8. Foot to Centimeter\n");
  printf(" 9. Inch to Centimeter\n");
  printf("10. Centimeter to Inch\n");
  printf("11. Foot to Inch\n");
  printf("12. Inch to Foot\n");
  // making choice
  int choice;
  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    var = var * 1.60934;
    break;
  case 2:
    var = var / 1000;
    break;
  case 3:
    var = var * 1609.34;
    break;
  case 4:
    var = var * 1000;
    break;
  case 5:
    var = var / 100;
    break;
  case 6:
    var = var * 0.0254;
    break;
  default:
    printf("Wrong Choice");
    break;
  }
  return var;
}

int main()
{
  if (admin())
  {
    printf("Wrong User of Password");
  }
  graphics();
  // taking input
  cli();
  float var;
  int choice;
  scanf("%d", &choice);
  // using function
  switch (choice)
  {
  case 1:
    printf("Enter Value:");
    scanf("%f", &var);
    printf("Ans %f", mass(var));
    break;
  case 2:
    printf("Enter Value:");
    scanf("%f", &var);
    printf("Ans %f", length(var));
    break;
  case 3:
    printf("Ans=%f", area());
    break;
  case 4:
    printf("Enter Value:");
    scanf("%f", &var);
    printf("Ans %f", time(var));
    break;
  case 5:
    printf("Enter Value:");
    scanf("%f", &var);
    printf("Ans %f", temperature(var));
    break;
  case 6:
    printf("Enter Value:");
    scanf("%f", &var);
    printf("Ans %f", currency(var));
    break;
  case 7:
    printf("Enter Value:");
    scanf("%f", &var);
    printf("Ans %f", volume(var));
    break;
  default:
    printf("Wrong choice");
    break;
  }
  return 0;
}