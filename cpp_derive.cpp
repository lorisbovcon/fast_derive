#include <iostream>
#define MAX_EQUATION_LENGTH 128
#define MAX_EQUATION_SEGMENTS 16
using namespace std;

int main(int argc, char *argv[]){
  
  char inputed_equation[MAX_EQUATION_LENGTH] = { ' ' };
  cout << "Enter the equation of max length " << MAX_EQUATION_LENGTH << ": ";
  cin >> inputed_equation;

  char segmented_equation[MAX_EQUATION_SEGMENTS][MAX_EQUATION_LENGTH];
  int segmented_i;
  for (segmented_i = 0; (segmented_i < MAX_EQUATION_SEGMENTS) && (int(inputed_equation[segmented_i]) != 0); ++segmented_i) {
  
  }


  return 0;
}
