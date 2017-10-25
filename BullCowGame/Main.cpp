#include <iostream> //iostream trata entrada e saida de dados
#include <string> //string trata manipulacao de strings

using namespace std;


void PrintIntro();
void PlayGame();
string GetGuess();
string PrintGuess(string guess);

int main() {

	PrintIntro(); 
	PlayGame();
	return 0;
}

void PlayGame()
{
	constexpr int TRIES = 5;
	for (int i = 0; i < TRIES; i++)
	{
		string Guess = "";
		Guess = GetGuess();
		PrintGuess(Guess);
	}
}

void PrintIntro() {
	constexpr int WORLD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows, a fun word game. \n";
	cout << "Can you guess the " << WORLD_LENGTH << " letter isogram I`m thinking of? \n";
	return;
}

string GetGuess() {
	string Guess = "";
	cout << "Enter a guess: ";
	getline(cin, Guess);
	return Guess;
}

string PrintGuess(string Guess) {
	cout << "Your guess was: " << Guess << endl;
	cout << endl;
	return Guess;
}
