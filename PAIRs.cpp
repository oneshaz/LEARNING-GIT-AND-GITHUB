#include <iostream>
#include <utility>

int main()
{
    std::pair<int,int> p ; 
    p = { 3 , 4 } ; 
    std::cout << p.first << " " << p.second << std::endl; ; //first and second are member variables
    
    //nested pair
    
    std::pair<int, std::pair<int , int>> p1 ; 
    p1 = { 5 , { 3 , 4 }} ; 
    std::cout << p1.first << " " << p1.second.first << " " << p1.second.second << std::endl ; 
    
    std::pair<int , std::pair<int , std::pair<int,int>>> p2 ; 
    p2 = { 4 , { 3 , {1 , 2}}} ; 
    std::cout << p2.second.second.first << std::endl ;
    
    //updates
    
    std::pair<std::string , int> p3 ; 
    p3 = { "Vanshaz" , 4 } ; 
    p3.first = "Vanz" ; 
    p3.second = 3 ; 
    std::cout << p3.first << " " << p3.second << std::endl ; 
    
    p3 = { "vkc" , 12 } ;
    std::cout << p3.first << std::endl ; 
    
    //comparing pairs
    //compared lexocographically - compare first values , if equal compare second values
    
    std::pair<int,int> p_1 ; 
    std::pair<int,int> p_2 ; 
    
    p_1 = { 3 , 4 } ; 
    p_2 = { 2 , 1000 } ; 
    
    std::cout << ( p_1 > p_2 ) << std::endl ; //true
    
    
    return 0;
}