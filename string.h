#ifndef STRING_H_INLCUDED
 
#define STRING_H_INCLUDED

    int frequencyChar(char *str, char searchCharacter);
    int removeNonAlpha(char *str);
    int stringlength(char *str);
    int concatenate(char *str1, char *str2);
    int stingcopy(char *source, char*destination);
    void findSubstring(char *source, int from, int n, char *target);
#endif