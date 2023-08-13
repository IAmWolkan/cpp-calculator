#include <iostream>
#include "mathFunctions.h"
#include "display/io.h"

using namespace std;

int main(int argc, char const *argv[]) {
  while (true) {
    int v1 = stoi(io::ask("Enter first value"));
    int v2 = stoi(io::ask("Enter second value"));

    float result = math::addition(v1,v2);
    cout << v1 << " + " << v2 << " = " << result << endl;
  }
  
  return 0;
}
