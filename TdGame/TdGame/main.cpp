#define SDL_MAIN_HANDLED
#include<iostream>

#include "game_manager.h"

int main(int argc,char** argv) {
	
	return GameManager::instance()->run(argc, argv);
	
}