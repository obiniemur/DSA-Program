#include <iostream>

using namespace std;

int main() {
  // Declare and initialize the variables
  int n;
  cin>>n;
  int i, j;

  // Outer loop to iterate through the rows
  for (i = 1; i <= n; i++) {
    // Inner loop to iterate through the columns
    for (j = 1; j <= n; j++) {
      // Check if the current position is on the diagonal
      if(i==j && i == n/2+1){
        cout<<"X";
      }else if (i == j) {
        // Print an X
        cout << "\\";
      }else if( i + j == n + 1){
        cout << "/";

      } else {
        // Print a space
        cout << " ";
      }
    }

    // Move to the next line
    cout << endl;
  }

  return 0;
}