/* Author : lostsh
 * This file contains the functions relating to the management of the dictionary
 */

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "dictio.h"



void pickWord(char *secretWord){
    //printf("secretWord = %s\n", secretWord);
    FILE* dictionary = NULL;
    dictionary = fopen("../dico.txt", "r");
    int wordNumer = 0;
    if(dictionary != NULL){
        char currentCar = 0;
        while (currentCar != EOF){
            currentCar = fgetc(dictionary);
            if(currentCar == '\n')wordNumer++;
        }
        wordNumer++; //last word don't have line break
        rewind(dictionary);
        int wordIndex = randInt(wordNumer);
        for(int i=0;i<wordIndex;i++){
            fgets(secretWord, T_MAX_WORD, dictionary);
        }
        fclose(dictionary);
    }
   //printf("secretWord = %s\n", secretWord);
}

int randInt(const int upperBound){
    srand(time(NULL));//init rand module
    return (rand()%upperBound);
}
