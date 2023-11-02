#include <iostream>
#include <string>
using namespace std;

int main() {
  int date[3], leapyears, totaldays; //{date,month,year}
  int ex_day[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
  string day[7] = {"thursday", "friday",  "saturday", "sunday",
                   "monday",   "tuesday", "wednesday"};

  cout << "Enter a date :";
  cin >> date[0] >> date[1] >> date[2];

  leapyears = (date[2] / 4) + 1;

  if ((date[1] <= 2) && (date[2] % 4 == 0)) {
    leapyears -= 1;
  }
  totaldays = ((date[2] * 365) + leapyears + ex_day[date[1] - 1] + date[0]) % 7;

  cout << day[totaldays] << endl;
  return 0;
}
