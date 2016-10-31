//Vigenere
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
/*enter key and text
*/
int main(int argc, string argv[]) {//check input
	if (argc != 2) {
		printf("Try agayn,pls");
	return 1;
	}
		string key = argv[1];
	unsigned long keyCount = strlen(key);
	for (int a = 0; a < keyCount; a++) {
	if (!isalpha(key[a])) {
		printf("Try agayn,pls");
	return 1;}
	}
		string text = GetString();
	if (text == NULL) {
		printf("Try agayn,pls");
	return 1;
	}
	//coding text
	for (int i = 0, n = 0; i < strlen(text); i++) {
	if (isalpha(text[i])) {
	// Capital letter
	if (isupper(text[i]))
			printf("%c", ((((text[i] - 'A') + ((toupper(key[n++%keyCount])) - 'A') % 26) % 26) + 'A'));
	//Small letter
	if (islower(text[i]))
		printf("%c", ((((text[i] - 'a') + ((tolower(key[n++%keyCount])) - 'a') % 26) % 26) + 'a'));}
	else
		printf("%c", text[i]);
	}
		printf("\n");
	return 0;
}
