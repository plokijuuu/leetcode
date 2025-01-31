bool isValid(char* s) {
    int size = strlen(s);
    char prio[size + 1];
    int licz = 0;

    for(int i = 0; i < size; i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            prio[licz] = s[i];
            licz++;
        }
        else
        {
            if(licz == 0) return false;
            else if(s[i] == ')' && prio[licz-1] == '(') licz--;
            else if(s[i] == '}' && prio[licz-1] == '{') licz--;
            else if(s[i] == ']' && prio[licz-1] == '[') licz--;
            else return false;
        }
    }
    if(licz == 0) return true;
    else return false;
}
