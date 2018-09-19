Problem Description  
In the calendar we are using now, the leap year is defined as a year that is divisible by 4, but can be divisible by 100.
The year that cannot be divisible by 400 is an exception. They are not leap years. For example: 1700, 1800, 1900 and 2100 is not a leap year, but 1600, 2000 and 2400 is a leap year. Given the number of days that have elapsed since January 1, 2000, your task is to give the year, which month, and which day of the week.
  
    
Input data  
The input contains several lines, each containing a positive integer representing the number of days that have elapsed since January 1, 2000.
The last line entered is −1 and does not have to be processed. It can be assumed that the year of the result does not exceed 9999.
Output requirements
For each test sample, a line is output that contains the corresponding date and day of the week. The format is "YYYY-MM-DD"
"DayOfWeek", where "DayOfWeek" must be one of the following: "Sunday", "Monday",
"Tuesday", "Wednesday", "Thursday", "Friday" and "Saturday".
  
  
Input sample  
1730  
1740  
1750  
1751  
-1  
  
Output sample  
2004-09-26 Sunday  
2004-10-06 Wednesday  
2004-10-16 Saturday  
2004-10-17 Sunday  
Problem solving  
  
The background knowledge used in this topic is the definition of leap year and the number of dates per month in the 12 months of the calendar.
According to the requirements of the topic, all the values ​​involved can be represented by integers. This problem can be broken down into two separate questions: one is the day of the request and the other is the day of the request. The first problem is relatively simple, you know, 2000 January 1 after the day of the week, as long as the use of a given date modulo 7, we can know the required day of the week. The second question is relatively cumbersome. We use year, month, date to indicate the year, month, and day of the requested date, respectively. When entering an integer n, if n is greater than or equal to the number of days in a year, subtract n from the number of days in a year until n is less than the number of days in a year (in this case, the number of days remaining is m), how many years have been subtracted Year is equal to how much; if m is greater than or equal to the number of days in a month, subtract m from the number of days in a month until m is less than the number of days in a month (in this case, the remaining days are assumed to be k), how many months are subtracted Month is equal to; this is the number of days since the beginning of the month, and k+1 is the requested date. When subtracting the number of days in a year, it is necessary to judge whether the year is a leap year, and when it is minus one month, it is necessary to judge a few days of the month.
  
Common problems in implementation  
Problem 1: The logic is too complicated, causing the program to go wrong.  
Question 2: The code that judges the leap year is not abstracted into a function, making the main program code not clear enough.  
Question 3: The most common mistake is to calculate how many leap years have passed since 2000 to the current year. Many classmates  
The wrong is to count one or less. In addition, the calculation cannot be used in the leap year, otherwise it will time out.  
