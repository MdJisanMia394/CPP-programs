#include<iostream>
using namespace std;

int main() {
    int arr[100];
    for(int i=-10;i<=0;i++){
        cin>>arr[i];
    }
    for(int i=-10;i<=0;i++){
        cout<<arr[i];
    }
//  char x; cin >> x;
//  int ascii = (int)x; // convert to ascii value
//  if (isalpha(x)) {
//    // same as if ((x >= 'A' and x <= 'Z') or (x >= 'a' and x <= 'z'))
//    // same as if ((ascii >= 65 and ascii <= 90) or (ascii >= 97 and ascii <= 122))
//    cout << "ALPHA\n";
//    if (isupper(x)) {
//      // same as if ((x >= 'A' and x <= 'Z'))
//      // same as if ((ascii >= 65 and ascii <= 90))
//      cout << "IS CAPITAL\n";
//    }
//    else {
//      // similar function: islower(x) -> to check if x is a small letter
//      cout << "IS SMALL\n";
//    }
//  }
//  else {
//    // similar function: isdigit(x) -> to check if x is a digit
//    cout << "IS DIGIT\n";
//  }
  return 0;
}
