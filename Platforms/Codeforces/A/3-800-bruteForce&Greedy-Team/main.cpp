//============================================================================
// Path         : 3    -   Codeforce   -   800 -   WaterMelon -   Greedy & BruteFroce  -   231/A
// TIME         : Sunday  4 / June / 2023   
// problem link : https://codeforces.com/problemset/problem/231/A
// Name         : Team
// Author       : Abdullah Al-Habal
//============================================================================

#include <iostream>

using namespace std;

int main()
{
   int n = 0 , p , v , t , c = 0 ; 
   cin >> n ; 
   while (n-- > 0)
   {
    cin >> p >> v >> t ;
    
    if( ( p + v + t ) >= 2 ) c++; 

   }
   cout << c ;
    return 0;
}
