#include <iostream>
#include "io.h"

std::string io::input() {
  std::string input;
  std::cin >> input;

  return input;
}

/**
 * Prints out text from the param
 * 
 * @param string The text that should be printed out
 */
void io::output(std::string text) {
  std::cout << text << std::endl;
}

/**
 * Asks the user an question by printing
 * out the question and awaits the response
 * 
 * @param string The question we should ask the user
 * @return The input (answer) from the user
 */
std::string io::ask(std::string text) {
  std::cout << text << ": ";
  return input();
}
