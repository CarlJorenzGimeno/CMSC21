#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

//Switch argument to pointer
void scan_word(int *occurrences[26]){
    char c;
    while ((c=getchar()) != '\n'){
        if (isalpha(c)){
            //Change to pointer to change the value of the array
            *occurrences[toupper(c) - 'A']++;
        }
    }
}

//Switch arguments to pointers
bool is_anagram(int *occurrences1[26], int *occurrences2[26]){
    int same=1;
    for (int i=0; i < 26; i++){
        //No change
        if (occurrences1[i] != occurrences2[i]) {
            same=0;
            break;
        }
    }
    return same;
}

int main(void){
    int i,
        same;
    //Change to pointers
    int *occurrences1[26] = {0};
    int *occurrences2[26] = {0};
    
    printf("Enter first word: ");
    //Set argument as address of the arrays
    scan_word(&occurrences1);
    printf("Enter second word: ");
    scan_word(&occurrences2);
    
    
    same = is_anagram(&occurrences1, &occurrences2);
    if (same){printf("The words are anagrams.\n");}
    else{printf("The words are not anagrams.\n");}
    return 0;
}
