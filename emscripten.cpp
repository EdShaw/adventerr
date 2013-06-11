//
//  emscripten.cpp
//  Advent-Err
//
//  Created by Ed Shaw on 11/06/2013.
//  Copyright (c) 2013 Ed Shaw. All rights reserved.
//
//  Defines emscripten bindings for access to GameEngine class.
//  https://github.com/kripken/emscripten/wiki/embind
//

#include <emscripten/bind.h>

#include "GameEngine.h"

using namespace emscripten;

EMSCRIPTEN_BINDINGS(module){
    class_<GameEngine>("GameEngine")
        .constructor<>()
        .function("play", &GameEngine::play)
    ;
}
