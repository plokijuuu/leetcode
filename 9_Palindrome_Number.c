bool isPalindrome(int x) {
    
    if( x < 0) return false;

    int y = x;
    int pali[10004];
    long long i=10;
    int j=0;

    while(y > 0)
    {
        pali[j] = y%i;
        y = y - (y%i);
        y = y / 10;
        j++;
    }

    i = 1;
    long long wynik = 0;

    for(int k = j-1; k >= 0; k--)
    {
        wynik += pali[k] * i;
        i *=10;
    }
    if(wynik == x) return true;
    else return false;
}
