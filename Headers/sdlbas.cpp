#include <iostream>
#include "SDL.h"
using namespace std;

int main(){

  if(SDL_Init(SDL_INIT_VIDEO) < 0) {
    cout << "SDL init failed." << endl;
    return 1;
  }



  return 0;
}



