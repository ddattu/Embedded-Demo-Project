#include<stdio.h>
#include<string.h>
#include<ctype.h>

    int frequencyChar(char *str, char searchCharacter);
    int removeNonAlpha(char *str);
    int stringlength(char *str);
    int concatenate(char *str1, char *str2);
    int stingcopy(char *source, char*destination);
    void findSubstring(char *source, int from, int n, char *target);

int frequencyChar(char *str, char searchCharacter){
    char string[1000];
    strcpy(string,str);
    int i= 0,count=0;
    while(string[i]!='\0'){
        if(string[i]==searchCharacter){
        count++;
        }
        i++;
    }
    return count;
}

int stingcopy(char *source, char*destination){
    int i=0;
    while(source[i]!='\0'){
        destination[i] = source[i];
        i++;
    }
    destination[i]='\0';
    return 0;
}

int stringlength(char *str){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

int concatenate(char *str1, char *str2){
    int len=strlen(str1), i=0;
    while (str2[i]!='\0')
    {
        str1[len]=str2[i];
        i++;
        len++;
    }
    return 0;
}

void findSubstring(char *source, int from, int n, char *target){
    int j=0;
    for (int i=from;i<(from+n);i++){
        target[j]=source[i];
        j++;
    }
    target[j]='\0';
}

int removeNonAlpha(char *str){
    int i=0,j=0;
    char changedstr[1000];
    while(str[i]!='\0'){
        if(isalpha(str[i])){
            changedstr[j]=str[i];
            j++;
        }
        i++;
    }
    strcpy(str,changedstr);
    return 0;
}
