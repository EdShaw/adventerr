//
//  GameEngine.cpp
//  Advent-Err
//
//  Created by Ed Shaw on 10/06/2013.
//  Copyright (c) 2013 Ed Shaw. All rights reserved.
//

#include "GameEngine.h"

GameEngine::GameEngine(){
    GameEngine::quitter = [](){};
}

GameEngine::GameEngine(std::function<void()> quitter){
    GameEngine::quitter = quitter;
}

GameEngine::~GameEngine(){

}

std::string GameEngine::play(const std::string input){

    auto output = "Error!";

    if (input.compare("test") == 0){    
        output = "Hello World!";
    } else if (input.compare("quit game") == 0){
        quitter();
        output = "Goodbye!";
    } else {
        output = "I have, like, no idea what you just said.";
    }

    return output;
}