/* m010.c - Day of the week.

   This program takes two integers read as command line arguments
   representing, respectively, the day and the month of a date in
   year 2020, and produces as output the corresponding day of the week.
   Output should be: Sunday, Monday, Thursday, Wednesday, Thursday,
   Friday, Saturday.

   E.g.

      command line    : m010 2 6
      expected output : Thursdays

   Directions:

      Please, edit function day_of_week();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m010 <day> <month>\n"

enum {sun, mon, tue, wed, thu, fri, sat};

/* Return the day of the week in the numeric form:
   Sunday=0, Monday=1... Saturday=6.*/

int day_of_week (int day, int month)
{
    int weekday;
  printf(" Please Enter the Day Number 1 to 7 (Consider 1= Monday, and 7 = Sunday) :  ");
  scanf("%d", &weekday);

  if (weekday == 1)
  {
  	printf("\n Today is Monday");
  }
  else if ( weekday == 2 )
  {
  	printf("\n Today is Tuesday");
  }
  else if ( weekday == 3 )
  {
  	printf("\n Today is Wednesday");
  }
  else if ( weekday == 4 )
  {
  	printf("\n Today is Thursday");
  }
  else if ( weekday == 5 )
  {
  	printf("\n Today is Friday");
  }
  else if ( weekday == 6 )
  {
  	printf("\n Today is Saturday");
  }
  else if ( weekday == 7 )
  {
  	printf("\n Today is Sunday");
  }
  else
    printf("\n Please enter Valid Number between 1 to 7");

 int i = 0;
  int sum = 0;
  int Month[12]; //Months from Jan through Dec// //Quantity of Days in each month//


  Month [0]=31;
  Month [1]=29;
  Month [2]=31;
  Month [3]=30;
  Month [4]=31;
  Month [5]=30;
  Month [6]=31;
  Month [7]=31;
  Month [8]=30;
  Month [9]=31;
  Month [10]=30;
  Month [11]=31;

  return sun;

}

/* Do not edit function main. */

int main (int argc, char **argv)
{
  int day, month, dweek;
  int g;

  if (argc < 3)
    {
      printf (USAGE);
      exit(1);
    }

  day = atoi(argv[1]);
  month = atoi(argv[2]);

  dweek = day_of_week (day, month);

  switch (dweek)
    {
    case sun:
      printf ("Sunday\n");
      break;
    case mon:
      printf ("Monday\n");
      break;
    case tue:
      printf ("Tuesday\n");
      break;
    case wed:
      printf ("Wednesday\n");
      break;
    case thu:
      printf ("Thursday\n");
      break;
    case fri:
      printf ("Friday\n");
      break;
    case sat:
      printf ("Saturday\n");
      break;
    default:
      printf ("Something wrong\n");
      break;
    }

  return 0;
}
