int romanToInt(char* s) 
{
    int size = strlen(s);
    int number = 0;
    
    int tab[129] = {0};
    tab['I'] = 1;
    tab['V'] = 5;
    tab['X'] = 10;
    tab['L'] = 50;
    tab['C'] = 100;
    tab['D'] = 500;
    tab['M'] = 1000;

    int pre=0;
    
    for(int i = size - 1; i >= 0; i--)
    {
        int new = tab[s[i]];
        if(pre > new) number -= new;
        else number += new;
        pre = new;
    }

    return number;
}
