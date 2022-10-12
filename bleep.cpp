#include<iostream>
#include<string>

void bleep(std::string &text, std::string word) {

  int i = 0;
  int j = 0;
  int word_length = word.length();
  std::string new_word;
  char test;


  while (i < text.length()) {
    test = text[80];
    //if letter in text == first letter in bleep word
    if (text[i] == word[0]) {
      //get substring of next characters to determine if it is word.
      new_word = text.substr(i, word_length);
      //if substring equals bleep word iterate through and replace word with asterisks
      if (new_word == word) {
        j = i;
        while( j < i + word_length) {
          text[j] = '*';
          j++;
        }
      }
      new_word = "";
    }
    i++;
  }
  return;
}


int main() {

  std::string word = "broccoli";
  std::string text = "i like to eat broccoli if it is cooked right, if not broccoli can taste horrible";
  


  bleep(text, word);
  std::cout << text << std::endl;
  return 0;
}