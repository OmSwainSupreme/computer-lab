import Question5
call=Question5.datetime_utils()

print(f"Current time: {call.get_current_time()}")

print(f"Current date: {call.get_current_date()}")

Date1=input("Enter first date in YYYY-MM-DD format: ")
Date2=input("Enter second date in YYYY-MM-DD format: ")
print(f"Days between {Date1} and {Date2}: {call.days_between_dates(Date1,Date2)} days")