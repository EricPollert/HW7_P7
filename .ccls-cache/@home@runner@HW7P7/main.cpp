#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int resistance [5] = {16, 27, 39, 56, 81};
  double current [5];
  double power[5];

  for (int i = 0; i < 5; i++)
  {
    cin >> current[i];

    power[i] = resistance[i] * pow(current[i],2);
    
  }

  for(int i = 0; i < 5; i++)
    {
    cout << power[i] << endl;
      
    }
}