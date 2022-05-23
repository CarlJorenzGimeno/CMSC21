#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

//Copy the entire block of code and set it to add 1 to every occurrence.
void scan_word(int occurrences[26]){
    char c;
    while ((c=getchar()) != '\n'){
        if (isalpha(c)){
            occurrences[toupper(c) - 'A']++;
        }
    }
}

//Copy the entire block of code
bool is_anagram(int occurrences1[26], int occurrences2[26]){
    int same=1;
    for (int i=0; i < 26; i++){
        //Change it to compare two arrays.
        if (occurrences1[i] != occurrences2[i]) {
            same=0;
            break;
        }
    }
    return same;
}

int main(void){
    int i,
        same,
        //Swap array letters with two separate arrays
        occurrences1[26] = {0},
        occurrences2[26] = {0};
    
    printf("Enter first word: ");
    scan_word(occurrences1);
    printf("Enter second word: ");
    scan_word(occurrences2);
    
    same = is_anagram(occurrences1, occurrences2);
    if (same){printf("The words are anagrams.\n");}
    else{printf("The words are not anagrams.\n");}
    return 0;
}
