#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int wordSearch(char *sentence, char *word){
  char *myPtr;
  myPtr = strstr(sentence, word);
  if(myPtr != NULL){
    return 1;
  }
  return 0;
}

int main(){
  const int MAX_SIZE = 50;
  char userString[MAX_SIZE];
  char userWord[MAX_SIZE];

  printf("Enter a sentence\n");
  fgets(userString, 50, stdin);

  printf("Enter a word: \n");
  fgets(userWord, 50, stdin);

  if(wordSearch(userString, userWord) == 1){
    printf("The word \"%s\" was found\n", userWord);
  }
  else{
    printf("The word \"%s\" was not found\n", userWord);
  }
  return 0;
}
