int extract_nums(char * string)
{
int chars=0; //variável onde ficam armazenados os dígitos extraídos
int i;

for(i=0; string[i]!='\0'; i++) //percorrer todos os caracteres
{
	if(isdigit(string[i])) //verificar se o carácter é numérico
	{
		chars += (int)(string[i])-'0'; //forma "artesanal" de converter o carácter para inteiro
		chars *= 10;
	}
}
chars /= 10;

return chars;
}