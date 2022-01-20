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
	for (char& c : guessedWord) {

	}
}

int main(void) {
	// First determine which is the word of the day
	std::string word = determineWord();
	std::string guess;
	std::cout << "The word is " << word.length() << " characters long. ";

	while (guess != word) {
		std::cout << "Enter your guess: ";
		std::cin >> guess;
		std::cout << "\n You guessed " << guess;
		std::cout << std::endl;
		// Evaluate accuracy
	}
	


}