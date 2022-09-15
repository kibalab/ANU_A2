#include <stdio.h>

int main()
{
    long long int start;
    int mul, add, n;
    
    scanf("%lld %d %d %d", &start, &mul, &add, &n);
    
    for(int i = 0; i < n - 1 ; i++)
    {
        start = start * mul + add;
    }
    
    printf("%lld", start);
    
    return 0;
}