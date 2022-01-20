#include<stdio.h>
#include<iostream>
#include <string>
#include <vector>

std::string determineWord(void) {
	std::string choices[10] = { "point", "sauce", "robot", "moore", "genius", "arabic",
								"south", "north", "west", "east" };
	std::string randomWord = choices[rand() % 10];
	return randomWord;
}

void evalAccuracy(std::string guessedWord, std::string word) {
	for (int i = 0; i < guessedWord.length() - 1; i++) {
		char letter = guessedWord[i];
			// Check if they got any RIGHT
			if (guessedWord[i] == word[i]) {
				std::cout << "You got: " << guessedWord[i]
					<< " in the correct position." << std::endl;
			}
			else if (word.find(letter) != std::string::npos) {
				std::cout << letter << " is in the word but you got it in the wrong position"
					<< std::endl;
			}
	}
}

int main(void) {
	time_t t;
	srand((unsigned)time(&t));
	// First determine which is the word of the day
	std::string word = determineWord();
	std::string guess;
	std::cout << "The word is " << word.length() << " characters long. ";

	// Debug
	std::cout << "The random word is " << word << std::endl;
	// END debug

	while (guess != word) {
		std::cout << "Enter your guess: ";
		std::cin >> guess;
		std::cout << "\n You guessed " << guess;
		std::cout << std::endl;
		// Evaluate accuracy
		if (guess.length() == word.length())
			evalAccuracy(guess, word);
		else if (guess.length() != word.length())
			printf("You must enter a word that is %lu letters long \n", word.length());
    else if (guess == word)
      printf("Congrats! You got it right!")
	}
}
