#include <iostream>

using namespace std;

int main(){
   
   int row{};
   cout << "Enter the number of row: ";
   cin >> row;

   for(int i{0}; i<row; i++){
      for(int j{i};j<(2*row-1); j++){
         cout << "*";
      }
      cout << endl;
   }

   
   
   cout << endl;
   return 0;
}
