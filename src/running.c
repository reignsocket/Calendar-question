
#include <stdio.h>
int type(int );
char week[7][10]={"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday","Friday"};
int year[2]={365,366};//Year[0] represents the number of days in non-leap years, and year[1] represents the number of days in leap years.
//Month[0] indicates the number of days per month in non-leap years, and month[1] indicates the number of days per month in the leap year.
int month[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
void main()
{
	int days, dayofweek;//Days indicates the number of days entered, and dayofweek indicates the day of the week.
	int i = 0, j = 0;
	while (scanf("%d", &days) && days != -1) {
		dayofweek = days % 7;
		for(i = 2000; days >= year[type(i)]; i++)
			days -= year[type(i)];
		for(j = 0; days >= month[ type(i) ][ j ]; j++)
			days -= month[ type(i) ][ j ];
		printf("%d-%02d-%02d %s\n", i, j + 1, days + 1, week[dayofweek]);
	}

}
int type(int m){ //Determine whether the m year is a leap year, if yes, return 1, otherwise return 0
	if(m % 4 != 0 || (m % 100 == 0 && m % 400 != 0))
		return 0; //Not a leap year
	else
		return 1; //leap year

}
