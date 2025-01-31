
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    if(digits[digitsSize-1] < 9)
    {
        digits[digitsSize-1]++;
        *returnSize = digitsSize;
        return digits;
    }
    else
    {
        int i = digitsSize - 1;
        int temp = 0;
        while(i >= 0 && digits[i] == 9)
        {
            i--;
            temp++;
        }
        if(digitsSize - temp == 0) temp++;
        int *result = (int*)malloc((temp+1)*sizeof(int));
        if(i == -1)
        {
            result[0] = 1;
            for(int j=1; j < temp; j++)
            {
                result[j] = 0;
            }
            *returnSize = temp;
            return result;
        }
        else
        {
            digits[i]++;
            for(int j = i+1; j < digitsSize; j++)
            {
                digits[j] = 0;
            }
            *returnSize = digitsSize;
            return digits;
        }
        
    }
}
