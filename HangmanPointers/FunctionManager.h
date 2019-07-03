#ifndef FUNCTIONMAP_H
#define FUNCTIONMAP_H
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <cstring>

using namespace std;

class gameValues
{
public:
	int gamesCompleted;
	int gamesWon;
	int gamesLoss;
	

};

char* underscore(int len);
int checkWin(char letter, char* word, int len, char* character);
int checkLetter(char letter, char* word, int len);
char* updateWord(char letter, char* character, char* word, int len);

#endif