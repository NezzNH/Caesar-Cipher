#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main () {

int i;
int n=20;
char currentChar;
int shiftKey = 1;
char actualCharacter;
int tempKey;
int modifier;
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

if (shiftKey > 0){
    modifier = 1;
}

else if (shiftKey < 0) {
    modifier = -1;
}

else modifier = 0;
printf("\n");
for (i=1; i<n; i++) {

currentChar = letters[i];
if (currentChar != 32) {
    actualCharacter = currentChar;
    for (tempKey = shiftKey; tempKey != 0; tempKey--) {
        
        if (actualCharacter > 122) {
            actualCharacter = 98;
        }
        else if (actualCharacter > 90 && actualCharacter < 96) {
            actualCharacter = 66;
        }

        else {
            actualCharacter = actualCharacter + modifier;
        }
    }
    letters[i] = actualCharacter;

    printf("%c", letters[i]);

}
else printf(" ");

}

printf("\n");

printf("Press any key to exit:");
getch();
}