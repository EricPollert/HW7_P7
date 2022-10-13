#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

  int resistance [5] = {16, 27, 39, 56, 81};
  double current [5];
  double power[5];

  for (int i = 0; i < 5; i++)
  {
    cin >> current[i];

    power[i] = resistance[i] * pow(current[i], 2);
    
  }
    // header
    cout << "Current" << "|" << setw(15) << "Resistance" << "|" << setw(15) << "Power" << "|" << endl;
    cout << "-------|---------------|---------------|" << endl;
    
  
  for(int i = 0; i < 5; i++)
    {
    cout << setw(7) << current[i] << "|" << setw(15) << resistance[i] << "|" << setw(15) << power[i] << "|" << endl;
      
    }
  
}