#!/usr/bin/python3
import calendar

year = int(input("Enter the year: "))
cal = calendar.TextCalendar()
print(cal.formatyear(year, 2, 1, 8, 2))
