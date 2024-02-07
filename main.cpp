#include <iostream>
#include <string>
using namespace std;
int main(){
  string data; cin >> data;
  cout << data.substr(0, data.size());
  cout << "\nAbove is your data.";
  return 0;
}
