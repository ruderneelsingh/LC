class Solution {
public:
string dayOfTheWeek(int day, int month, int year) {
        vector<string> days = {"Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday"};
        vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        int totalDays = 0;
        
        for (int i = 1971; i < year; ++i) {
            totalDays += isLeapYear(i) ? 366 : 365;
        }
        
        if (isLeapYear(year)) {
            daysInMonth[1] = 29;
        }
        for (int i = 0; i < month - 1; ++i) {
            totalDays += daysInMonth[i];
        }
        

        totalDays += day - 1;
        
        return days[totalDays % 7];
    }
    
private:
    bool isLeapYear(int year) {
        return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    }
};