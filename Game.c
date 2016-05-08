//name: Richard Guan, Grant Wei, Raihan Zhafranata
//date: 5/5/2016
//this program will play the game

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Game.h"

typedef struct _game * Game {
    int currentTurn; //saves the current turn of the game
    int currentPlayer; //saves the current player
    int regionID; //ID of each hexagon tiles
    int axis; //map of the game board
} Game;

typedef struct _regionID {
    int disciplineCode; //type of students produced
    int diceValue; // dice value to produce students
    int ARC; //edges for ARCs
    int vertex; //corners of tile from 0 - 5
} regionID;

typedef struct _axis {
    int x; //x co-ordinates
    int y; //y co-ordinates
} axis;
