#include "week07.hpp"

/////// ( 1 ) ///////

/////////////////////

/////// ( 2 ) ///////



/////////////////////

/////// ( 3 ) ///////




/////////////////////

/////// ( 4 ) ///////





/////////////////////


int main()
{
	week07::Human a ;
	week07::Human b ;

	std::cout << "========== 객체 2개 입력 ==========" << std::endl ;

	std::cin >> a ;
	std::cin >> b ;	

	std::cout << a << std::endl ;
	std::cout << b << std::endl ;

	

	week07::Human c = a + b ;

	std::cout << "\n========== C 정보 출력 ==========" << std::endl ;
	std::cout << c << std::endl ;

	return 0 ;
}

