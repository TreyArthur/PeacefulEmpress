#include "peQueen.h"
#include <math.h>
#include <iostream>

peQueen::peQueen(const int n)
{
    m_Size = n;
}

unsigned long long peQueen::ValidPlacements()
{
    unsigned long long start = m_Size * m_Size - m_Size + 1;
    unsigned long long end = m_Size * m_Size;

    unsigned long long numerator = 1;
    for (unsigned long long i=start; i<=end; i++)
    {
        numerator *= i;
    }

    unsigned long long demoninator = Factorial(m_Size);

    return (numerator / demoninator);
}

unsigned long long peQueen::Factorial(unsigned long long n)
{
    unsigned long long value = 1;
    for(unsigned long long i = 1; i <= n; ++i)
        value *= i;
    return value;
}

int peQueen::Solutions()
{
    //  n solutions
    //  1 1
    //  2 0
    //  3 0
    //  4 2
    //  5 10
    //  6 4
    //  7 40
    //  8 92
    //  9 352
    // 10 724
    // 11 2680

    return 0;
}

long peQueen::ValidPlacementsBit()
{
    int p = m_Size * m_Size;

    long long bitLength = pow(2.0,p) - 1;

    std::cout << "bl: " << bitLength << std::endl;

    long count = 0;
    for(long i=1; i<bitLength; i++)
    {
        int nsb = NumberSetBits(i);

        if ( nsb == m_Size ) count++;
    }

    return count;
}

int peQueen::NumberSetBits(int n)
{
    int value = n;

    int count = 0;
    while(value)
    {
        count += value & 1;
        value >>= 1;
    }

    return count;
}
