int lengthOfLastWord(char* s) {
    int size = strlen(s) - 1;
    int count = 0;
    
    while(size >= 0 && s[size] == ' ')
    {
        size--;
    }
    while(size >= 0 && s[size] != ' ')
    {
        count++;
        size--;
    }
    return count;
   
}
