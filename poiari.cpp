#include <iostream>
using namespace std;

int main(){

  const int NSTRINGS = 5;
  string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};

  string *pTexts = texts;

  pTexts += 3;

  cout << *pTexts << endl;

  pTexts -= 2;

  string *pEnd = &texts[NSTRINGS-1];

  while(pTexts != pEnd) {
    cout << *pTexts << endl;
    pTexts++;
  }

  pTexts = &texts[0];

  int elements = pEnd - pTexts;

  cout << elements << endl;

  pTexts = &texts[0];

  pTexts += NSTRINGS/2;

  cout << *pTexts << endl;

  return 0;
}



