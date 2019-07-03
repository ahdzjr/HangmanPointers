#include "FunctionManager.h"

using namespace std;

//•	Different Variable types x
//•	While loops x
//•	For loops x
//•	Do while loops x
//•	Pointers x
//•	Classes x
//•	Conditionals x

	

int main()
{

	gameValues* game = new gameValues();

char* words[15];

char* * p;

	p = words;
	*p = "programming";
	p++;
	*p = "downvote";
	p++;
	*p = "penguins";
	p++;
	*p = "giggle";
	p++;
	*p = "bandito";
	p++;
	*p = "oooolala";
	p++;
	*p = "pokemon";
	p++;
	*p = "bubbly";
	p++;
	*p = "cage";
	p++;
	*p = "trombone";
	p++;
	*p = "naked";
	p++;
	*p = "dolphin";
	p++;
	*p = "conspicuous";
	p++;
	*p = "whale";
	p++;
	*p = "caroline";


// Randomly select one of the array elements.
// Picks random number 0-15.
srand(time(NULL));
int number = rand() % 15;

// Picks word from array corresponding with random number.
char* word = words[number];

// Tells how many characters in the word.
int len = strlen(words[number]);

// char temp = words[0][2];

// Variables
char letter;
char* character;
//char yn;
bool endgame = false;
int incorrect = 0;
int Checkw;
// Turns character into a variable that is a placeholder.
character = underscore(len);
do {
	char yn;
// Has user enter in a letter to start game.
cout << "Please enter a letter to begin: " << endl;

// When letter doesn't match word, adds +1 to incorrect. When incorrect = 6. Game over.
while (incorrect != 6) { //Game
	// Displays word in asterisks and ends the line. Stores user entered letter into variable letter.
	for (int i = 0; i < len; i++)
	{
		cout << character[i];
	}
	cout << endl;
	cin >> letter;

	// Updates displayed word with correct user entered letters.
	character = updateWord(letter, character, word, len);


	// Checks if letter is in the word. If not, adds an incorrect and displays "Incorrect letter."
	if (checkLetter(letter, word, len) == 0) {
		incorrect++;
		cout << "Incorrect letter." << endl;
		checkWin(letter,word,len,character);
	}
	
}

Checkw = checkWin(letter, word, len, character);
if(Checkw == 1)
{
	game->gamesCompleted++;
	game->gamesWon++;
}
else
{
	game->gamesCompleted++;
	game->gamesLoss++;
}
cout << "To end game, please enter 'n'" << endl;
cin >> yn;
if(yn == 'n')
{
	endgame = true;
}
else
{
	endgame = false;
}
} while (endgame = false);
	return 0;
}

// Display underscore of letters of the random word.
char* underscore(int len) { // Function that changes word into asterisks(placeholders) so it is hiding the letters of the word.
	char* character2 = (char*)malloc(len * sizeof(char));
	for (int i = 0; i < len; i++)
		memcpy(character2 + i, "*", 1);

	return character2;
}

// Check if said letter is in word.
int checkLetter(char letter, char* word, int len) { // Function that checks letter. False(0) until proven true(1). If letter matches, it is true.
	int l = 0;
	for (int i = 0; i < len; i++)
		if (word[i] == letter)
			l = 1;

		return l;
}

char* updateWord(char letter, char* character, char* word, int len) { // Function that updates word placeholder(asterisks) with the actual letter if it was entered.
	for (int i = 0; i < len; i++)
		if(word[i] == letter)
			character[i] = letter;

		return character;
}

int checkWin(char letter, char* word, int len, char* character) { // Function that checks if the player won. False(0) until proven true(1). If all letters match, it is true.
	int w = 0;
		if(character == word)
		{
			w = 1;
		}


		return w;
}