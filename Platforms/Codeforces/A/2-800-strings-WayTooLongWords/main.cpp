//============================================================================
// Path         : 2    -   Codeforce   -   800 - Way Too Long Words  -  strings   -   71/A
// TIME         : Sunday  28 / May / 2023   
// problem link : https://codeforces.com/problemset/problem/71/A
// Name         : Way Too Long Words
// Author       : Abdullah Al-Habal
//============================================================================

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
  int loop = 0 ;
  cin >> loop ; 
  while (loop--) {
    
    string word ;
    cin >>  word ; 
    
    int len = word.length() ; 

    if ( len > 10 )
        cout << word[0] << (len-2) << word[len-1] << endl ;
    else 
        cout << word << endl ;
  }
 
    return 0;
}


//   int n ;cin >> n ;
//     for (int i =0 ; i < n ; i++)
//     {
//       string str ; cin >> str ;
//       int len = str.length();
//       if ( len > 10 )
//       {
//        cout << str[0] << (len-2) << str[len-1] << endl;
//       }else{
//       cout << str << endl;
//       }
 
 
//     }