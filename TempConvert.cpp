/*
* TempConvert - convert fahrenheit to celsius
*
* Name: Karen Peterson
* Date: May 18, 2020
*/
#include <iostream>
#include <string>
using namespace std;
/*
* main - convert temperatures
*
* Return: status
*/
int main()
{
  const string STOP = "quit";
  string season;
  double fahrenheit;
  double celsius;
  // housekeeping()
  // priming read
  cout << "Season: ";
  cin >> season;
  cout << endl;
  while (season != STOP)
  {
    // detailLoop()
    // read other stuff
    cout << "Temperature: ";
    cin >> fahrenheit;
    cout << endl;
    // do calculations
    celsius = (fahrenheit - 32) * 5.0 / 9.0;
    // output answer
    cout << "Celsius: " << celsius << endl;
    // nested selection structure
    if (fahrenheit > 100)
    {
      cout << "That's hot!" << endl;
      if (season == "winter")
      {
        cout << "Are you sure it is winter?" << endl;
      }
    }
    // dual-alternative selection structure
    if (season == "winter")
    {
      cout << "Watch for snow" << endl;
    }
    else
    {
      cout << "Watch for rain" << endl;
    }
    // repeat priming read
    cout << "Season: ";
    cin >> season;
    cout << endl;
  }
  // endOfJob()
  cout << "Thanks for checking the temperature" << endl;
  return 0;
}
