#include "char_type.h"
char_type_t find_char_type(const char input_char){
		if(input_char=='A'||input_char=='E'||input_char=='I'||input_char=='O'||input_char=='U'){
			return UPPER_CASE_VOWEL;
		}
		else if(input_char=='a'||input_char=='e'||input_char=='i'||input_char=='o'||input_char=='u'){
			return LOWER_CASE_VOWEL;
		}
		else if(input_char=='B'||input_char=='C'||input_char=='F'||input_char=='D'||input_char=='H'||input_char=='J'||input_char=='K'||input_char=='L'||input_char=='M'||input_char=='N'||input_char=='P'||input_char=='Q'||input_char=='R'||input_char=='S'||input_char=='T'||input_char=='V'||input_char=='W'||input_char=='X'||input_char=='Y'||input_char=='Z'){
			return UPPER_CASE_CONSONANT;
		}
		else if(input_char=='b'||input_char=='c'||input_char=='d'||input_char=='f'||input_char=='h'||input_char=='j'||input_char=='k'||input_char=='l'||input_char=='m'||input_char=='n'||input_char=='p'||input_char=='q'||input_char=='r'||input_char=='s'||input_char=='t'||input_char=='v'||input_char=='w'||input_char=='x'||input_char=='y'||input_char=='z'){
			return LOWER_CASE_CONSONANT;
		}
		else if(input_char=='0'||input_char=='1'||input_char=='2'||input_char=='3'||input_char=='4'||input_char=='5'||input_char=='6'||input_char=='7'||input_char=='8'||input_char=='9'){
			return NUMBER;
		}
	    else{
	    	return SYMBOL;
		}
}

