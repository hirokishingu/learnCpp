#include <iostream>
using namespace std;

int main(){

  string texts[] = {"one", "two", "three"};

  string *pTexts = texts;

  for (int i=0; i<sizeof(texts)/sizeof(string); i++){
    cout << pTexts[i] << " " << flush;
  }

  for (int i=0; i<sizeof(texts)/sizeof(string); i++, pTexts++){
    cout << *pTexts << " " << flush;
  }

  cout << endl;

  string *pElement = texts;
  string *pEnd = &texts[2];

  while(true){
    cout << *pElement << " " << flush;

    pElement++;
    if(pElement == pEnd){
      break;
    }
  }

  return 0;
}




