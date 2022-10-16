#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
typedef struct{
int dia;
int mes;
int ano;
}Data;

int main(){
    Data data;
    int dias;
  
    scanf("%d \n %d \n %d",&data.dia,&data.mes,&data.ano);
    scanf("%d",&dias);

    if( (data.dia+dias)>31 ) {
       
       if(data.mes<=7 && data.mes%2==1){

        data.dia=((data.dia+dias)%30);
        if(data.dia==0)data.dia++;
      if( ((data.dia+dias)/30)+data.mes < 13 ){
            data.mes=(data.mes+ ((data.dia+dias)/30)-1);
        }else{
            data.mes=(data.mes+ ((data.dia+dias)/30))%12;
            data.ano=(data.mes+ ((data.dia+dias)/30))/12;
        }

      }if( data.mes<=7 && data.mes%2==0) {
        data.dia=(data.dia+dias);
      }

    }else{
    data.dia=(data.dia+dias);
  

    }
    
   
     printf("%d/%d/%d",data.dia,data.mes,data.ano);
return 0;
}