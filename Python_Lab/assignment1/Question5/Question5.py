# Q5. Create a Python module called datetime_utils.py that includes the following functions:
# •get_current_time(): Returns the current time in "HH:MM:SS" format.
# •get_current_date(): Returns the current date in "YYYY-MM-DD" format.
# •days_between_dates(date1, date2): Takes two dates in the format "YYYY-MM-DD" and
# returns the number of days between the two dates.

import time

class datetime_utils:
    def get_current_time(self):
        self.current_time=time.localtime()
        formattedTime=time.strftime("%H:%M:%S",self.current_time)
        return formattedTime
    def get_current_date(self):
        self.current_time=time.localtime()
        formattedDate=time.strftime("%Y-%m-%d",self.current_time)
        return formattedDate
    def days_between_dates(self,date1,date2):
        date1=time.strptime(date1,"%Y-%m-%d")
        date2=time.strptime(date2,"%Y-%m-%d")
        days1=time.mktime(date1)        
        days2=time.mktime(date2)
        difference=abs((days2-days1)/(24*3600))
        return int(difference)
    