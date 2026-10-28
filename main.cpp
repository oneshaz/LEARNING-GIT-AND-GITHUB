#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v( 2 , 100. ) ;  // 5 instances of 100 
    
    v.push_back( 10 ) ; 
    v.emplace_back( 10 ) ; //faster than push_back
    
    int size = v.size() ;
    
    auto it1 = v.begin() ; // v.begin() points to the first elements 
    auto it2 = v.end() ; // v.end() points to the memory address right after the first ele
    
    // std::cout << it1 << std::endl ; //doesnt work cuz represents a position - NOT a variable
    std::cout << *it1 << std::endl ; 
    
    std::vector<int> v1( 2 , 10 ) ; 
    std::vector<int> v2( v1 ) ;  // copying a vector into another vector
    
    for( auto x : v2 )
        std::cout << x << " " ; 
    std::cout << std::endl ;
    
    for( int i = 0 ; i < size ; i++ )
        std::cout << v[i] << " " ; 
    std::cout << std::endl ;
    
    for( auto x : v )
        std::cout << x << " " ; 
    std::cout << std::endl ;
    
    // ~~~ imp functions ~~~ 
    
    v.push_back( 12 ) ; 
    v.emplace_back( 12 ) ; 
    
    std::cout << v.front() << " " << v.back() << std::endl ; 
    
    size = v.size() ;
    int check_bool = v.empty() ; 
    
    ( check_bool == 1 ) ? ( std::cout << "empty" ) : ( std::cout << "not empty") ; 
    std::cout << std::endl ; 
    
    std::vector<int> v3(v) ; 
    // v3(v) ; wrong
    
    v.clear() ;
    
    check_bool = v.empty() ; 
    
    ( check_bool == 1 ) ? ( std::cout << "empty" ) : ( std::cout << "not empty") ; 
    
    // v(v3) ; 
    v.swap(v3) ; 
    
    std::cout << std::endl ; 
    
    std::vector<int> v4(2 ,100) ; 
    v4.insert( v4.begin() , 300 ) ; 
    v4.insert( v4.begin() + 1 , 200 ) ; 
    v4.insert( v4.begin() , v.begin() , v.end() ) ; 
    
    for( auto x : v4 )
        std::cout << x << " " ; 
    
    return 0;
}