/// Zamiana liczby dziesietnej na liczbe
/// w dowolnym systemie liczbowym
/// autor: Zofia Szczypiñska
/// Data: 2020-01-07

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int dec, base;
    string other = "";

    cin >> dec >> base;
    int res;

    while(dec>0)
    {
    res=dec % base;
    switch(res)
    {
        case 0: other += "0"; break;
        case 1: other += "1"; break;
        case 2: other += "2"; break;
        case 3: other += "3"; break;
        case 4: other += "4"; break;
        case 5: other += "5"; break;
        case 6: other += "6"; break;
        case 7: other += "7"; break;
        case 8: other += "8"; break;
        case 9: other += "9"; break;
        case 10: other += "A"; break;
        case 11: other += "B"; break;
        case 12: other += "C"; break;
        case 13: other += "D"; break;
        case 14: other += "E"; break;
        case 15: other += "F"; break;
    }
    dec /= base;
    }
 /// algorithm
  reverse(other.begin(), other.end());
  cout << other;
  return 0;
}











































