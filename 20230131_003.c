#include <stdio.h>
#include <string.h>

int main() {
  char data[10];
  int dia, mes, ano;

  printf("digite a data no formato DD/MM/YYYY: ");
  scanf("%s", data);
  if (strlen(data) == 10 && data[2] == '/' && data[5] == '/' &&
      ((data[0]>='0')&&(data[0]<='9'))&& 
      ((data[1]>='0')&&(data[1]<='9'))&& 
      ((data[3]>='0')&&(data[3]<='9'))&&
      ((data[4]>='0')&&(data[4]<='9'))&& 
	  ((data[6]>='0')&&(data[6]<='9'))&& 
	  ((data[7]>='0')&&(data[7]<='9'))&& 
	  ((data[8]>='0')&&(data[8]<='9'))&& 
	  ((data[9]>='0')&&(data[9]<='9'))) 
    {
    	dia = (data[0] - '0') * 10 + (data[1] - '0');
	    mes = (data[3] - '0') * 10 + (data[4] - '0');
	    ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + (data[8] - '0') * 10 + (data[9] - '0');
		printf("Dia: %d\nMes: %d\nAno: %d\n", dia, mes, ano);
    } else {
        printf("\nData invalida! ");
    }
  return 0;
}
