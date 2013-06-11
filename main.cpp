//
//  main.cpp
//  Advent-Err
//
//  Created by Ed Shaw on 10/06/2013.
//  Copyright (c) 2013 Ed Shaw. All rights reserved.
//

#include <iostream>
#include "GameEngine.h"

bool running = true;


void quit(){
    running = false;
}


int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!" << std::endl;
    

    GameEngine game = GameEngine(std::bind(quit));

    while (running){
        std::string line;
        std::cout << " > ";
        std::getline(std::cin, line);
        auto out = game.play(line);
        std::cout << out << std::endl;
    }

    return 0;
}