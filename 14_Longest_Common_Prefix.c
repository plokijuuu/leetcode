int lengthh(char* str1, char* str2)
{
    int len;
    int temp = 0;
    if(strlen(str1) >= strlen(str2)) len = strlen(str2);
    else len = strlen(str1);
    while(str1[temp] == str2[temp] && temp < len) temp++;
    
    return temp;
}
char* longestCommonPrefix(char** strs, int strsSize) {
    char *temp = (char*)malloc((strlen(strs[0]) + 1) * sizeof(char));
    strcpy(temp, strs[0]);
    int len;
    for(int i = 1; i < strsSize; i++)
    {
        len = lengthh(temp, strs[i]);
        temp[len] = '\0';
    }
    char* result = (char*)malloc((strlen(temp) + 1) * sizeof(char));
    strcpy(result, temp);
    return result;
}

