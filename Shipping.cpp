/*
* Shipping - calculate number of boxes and price per shipment
*
* Name: Karen Peterson
* Date: May 18, 2020
*/
#include <iostream>
using namespace std;
/*
* main - calculate boxes and price based on number of cans to ship
*
* Return: status
*/
int main()
{
  const int STOP = -1;
  const double PRICE_PER_BOX = 7.50;
  int numCans;
  int cansPerBox;
  int numBoxes;
  int numLeftover;
  double pricePerShipment;
  // housekeeping()
  // priming read
  cout << "Enter number of cans: ";
  cin >> numCans;
  cout << endl;
  // detailLoop()
  // read other stuff
  cout << "Enter cans per box: ";
  cin >> cansPerBox;
  cout << endl;
  // do calculations
  numBoxes = numCans / cansPerBox;
  numLeftover = numCans % cansPerBox;
  pricePerShipment = numBoxes * PRICE_PER_BOX;
  // output answer
  cout << "Ship: " << numBoxes << " boxes for $" << pricePerShipment <<
  endl;
  cout << "Not shipped: " << numLeftover << " cans" << endl;
  // endOfJob()
  cout << "End of job" << endl;
  return 0;
}
