int mySqrt(int x) {

    if(x == 1 || x == 0) return x;
    else
    {
        int left = 1, right = x, result;
        while(left <= right)
        {
            long long mid = left + (right - left)/2;
            long long x1 = mid * mid;
            if(x1 == x) return mid;
            else if(x1 < x)
            {
                result = mid;
                left = mid + 1;
            }
            else right = mid - 1;
        }
        return result;
    }
}
