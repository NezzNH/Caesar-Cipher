#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main () {

int i;
int n=20;
char currentChar;
int shiftKey = 1;
char actualCharacter;
printf("Please input the sentence or term you'd like to cipher: ");
char letters[n];
n = 0;
while (currentChar != 13) {

currentChar = getch();
if (currentChar != 8) {
    n = n+1;
    letters[n] = currentChar;
    printf("%c", letters[n]);
}
}

printf("\n");
printf("Input the cipher key: ");
scanf("%d", &shiftKey);

printf("\n");
for (i=1; i<=n; i++) {

currentChar = letters[i];
if (currentChar != 32) {
    
    actualCharacter = currentChar + shiftKey;
    letters[i] = actualCharacter;

    printf("%c", letters[i]);

}
else printf(" ");

}

printf("\n");

}