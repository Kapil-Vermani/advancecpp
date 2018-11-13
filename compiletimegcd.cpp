#include <iostream>
template <int x,int y>
struct CGCD
{
    const static int value = CGCD<y,x%y>::value;
};
template<int x>
struct CGCD<x,0>
{
    const static int value = x;
};
int main()
{ 
 //This program compute GCD using template metaprogramming and is based on the fact that GCD(x,y) ==> GCD(y,x%y) and GCD(x,0) = x    
 static_assert(CGCD<35,45>::value==5,"This is error");
 static_assert(CGCD<48,64>::value==16,"This is error");
 return 0;
}
