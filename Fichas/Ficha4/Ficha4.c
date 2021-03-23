#include <stdio.h>
#include <string.h>

//1.1
int contaVogais (char *s){

    int i, count = 0;
    
    //Analisa caracter a caracter até ao fim da string
    for(i = 0; i < strlen(s); i++){
        switch(s[i]){
            case 'a':
                count++;
                break;
            case 'e':
                count++;
                break;
            case 'i':
                count++;
                break;
            case 'o':
                count++;
                break;
            case 'u':
                count++;
                break;
            case 'A':
                count++;
                break;
            case 'E':
                count++;
                break;
            case 'I':
                count++;
                break;
            case 'O':
                count++;
                break;
            case 'U':
                count++;
                break;
            default:
                break;
        }
    }
    return count;
}
//1.2.a

int retiraVogaisRep (char *s){
    char f[40];
    
    int count = 0, j = 0 , h = 0;
    
    for(int i = 0; s[i] != '\0' ; i++){
      
        if(s[i] == s[i+1] && (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')){
            count++;
        }else{
          
            f[j]=s[i];
            j++;
        }
    }

    for(h; f[h] != '\0' ; h++){

        s[h] = f[h];
        
    }

    s[h] = '\0';

    return count;
}

//1.2.b
int retiraVogaisRep2 (char *s){

    int i,j,len,len1;

     
    // Tamanho da string inicial
    for(len=0; s[len]!='\0'; len++);
 
    // nº de caracteres removidos
    len1=0;
 
    for(i=0; i<(len-len1);)
    {
        if(s[i]==s[i+1] && (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'))
        {
            //Recua todos os caracteres
            for(j=i;j<(len-len1);j++)
                s[j] = s[j+1];
            len1++;
        }
        else
        {
            i++;
        }
    }
 
    return 0;
}

//1.3.a
int duplicaVogais (char *s){

    char f[1000];
    int i , j = 0 , count, k;

    for(i = 0; s[i] != '\0'; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||
           s[i]=='o' || s[i]=='u' || s[i]=='A' ||
           s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){

            f[j] = s[i];

            f[j+1] = s[i];

            j += 2;

            count++; 
        }else{
            f[j] = s[i];

            j++;
        }
    }

    for(k = 0; f[k] != '\0' ; k++){
        s[k] = f[k];
    }

    return count;

}

//1.3.b

int duplicaVogais2 (char *s){
    int i , j , len , count = 0;

    for(len = 0; s[len] != '\0' ; len++);

    // o count vai servir para saber quantas duplicamos

    for(i = 0 ; i < (len + count) ; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||
           s[i]=='o' || s[i]=='u' || s[i]=='A' ||
           s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
               count++;
               for(j = i; s[j] != '\0' ; j++){

                   s[j+1] = s[j];
                   
               }
        }
    }
    return count;
}


void main() {
  
}
