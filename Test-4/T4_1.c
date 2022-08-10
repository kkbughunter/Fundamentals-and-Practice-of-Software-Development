#include<stdio.h>
#include<string.h>
#include<ctype.h>


int Repeated_word(char *str){
    
    
    int count=0;
    char ch,*array[20];
    int i,j=0;
   
    int length=strlen(str);
    
    for(int i=0;i<length;i++){
        ch=str[i];
        str[i]=toupper(ch);
        
    }
    char *token=strtok(str," ");
    while(token != NULL){
        array[j++]=token;
        count=count+1;
        token=strtok(NULL," ");
    }
    
    for(i=0;i<count;i++){
        printf("%s",array[i]);
    }
    
    for(i=0;i<count;i++){
        j=i+1;
        if(strcmp(array[i],array[j])==0){
            printf("\n\nThe repeating word is\n");
            printf("%s\n",array[i]);
            break;
        }
    }
    
   return 0;
}
   

int main(){
  
   char string[100]="I am studying studying in ssn";
   
     
   Repeated_word(string);



return 0;
}
