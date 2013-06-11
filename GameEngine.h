//
//  GameEngine.h
//  Advent-Err
//
//  Created by Ed Shaw on 10/06/2013.
//  Copyright (c) 2013 Ed Shaw. All rights reserved.
//

#ifndef __Advent_Err__GameEngine__
#define __Advent_Err__GameEngine__

#include <iostream>

class GameEngine{

public:
    GameEngine();
    GameEngine(std::function<void()> quitter);
    ~GameEngine();
    
    std::string play(const std::string input);

private:
    std::function<void()> quitter;
};

#endif /* defined(__Advent_Err__GameEngine__) */
