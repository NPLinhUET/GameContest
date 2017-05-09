#include <iostream>
#include <SDL.h>
#include <SDL_ttf.h>
#include <sstream>
#include "unit.h"

using namespace std;




//------------------------------------------------------------------------------------------//





Status::Status() : playing(true) {};
void Status::pause() {playing = false;}
void Status::resume() {playing = true;}
