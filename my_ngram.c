 #include <stdlib.h>
 #include <stdio.h>
 #define size 128
 
 int main(int ac, char **av) {
 
     int new_par[size] = {0};
 
     for(int i=1; i<ac; i++){
         int a = 0;
 
         while (av[i][a] != '\0') {
             if (av[i][a] != '"') {
                 new_par[(int)av[i][a]] += 1;
             }
             a += 1;
         }
     }
 
 
     for(int b=0; b<size; b++){
         if (new_par[b] > 0) {
             printf("%c:%d\n", b, new_par[b]);
         }
     }
 
     return 0;
 }
 
 
 /*#include <stdio.h>
 #include <stdlib.h>
 int my_strlen(char* param_1){
     int i=0;
     while(param_1[i]!='\0'){
         i++;
     }
     return i;
 }
 int main(int argc, char** argv)
 {
     int len=0;
     for(int i=1; i<argc; i++){
         len=len+my_strlen(argv[i]);
     }
     //char* new_par=malloc(len-2);
     int b=0;
     for(int i=1; i<argc; i++){
         for(int a=0; a<len; a++){
             if(argv[i][a]!='"'){
                 new_par[b]=argv[i][a];
                 b++;
             }
         }
     }
     for(int i=0; i<len; i++){
         int count=1;
         if(new_par[i]!='\0'){
             for(int a=i+1; a<len; a++){
                 if(new_par[i]==new_par[a]){
                     count++;
                     new_par[a]='\0';
                 }
             }
             printf("%c:%d \n",new_par[i],count);
         }
     }
     free(new_par);
     return 0;
 }*/
