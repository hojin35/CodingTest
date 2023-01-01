#include<iostream>

int v[31] = {0,};

int main()
{
    for(int i=0;i<28;i++)
    {
        int temp;
        std::cin >> temp;
        v[temp] = 1;
    }
    
    for(int i=1;i<=30;i++)
    {
        if(v[i] == 0)
        {
            std::cout << i << std::endl;
        }
    }
}