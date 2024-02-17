#include <vector>
#include "week06.hpp"

//// ( 1 ) ////
////// Animal의 생성자, 소멸자, GetName 정의







////////////////////////////////////////

////// Dog의 생성자, Action 정의






////////////////////////////////////////

////// Cat의 생성자, Action 정의






////////////////////////////////////////


int main( )
{
	//// ( 2 ) ////
	////// 객체들을 저장할 vector 정의




	////////////////////////////////////////

	int mainNum, objNum, tempNum ;
	std::string tempName ;
	bool exitFlag = 0 ;

	while( true )
	{
		std::cout << "\n  (1) Dog 객체 생성  /  (2) Cat 객체 생성  /  (3) 전체 객체 Action  /  (4) 종료  " << std::endl;
		std::cin >> mainNum ;
		switch( mainNum )
		{
			case 1 :
				std::cout << "이름, 꼬리 흔드는 횟수 입력( 띄어쓰기 구분 )" << std::endl ;
				//// ( 3 ) ////
				////// 사용자로부터 String, Int를 입력 받아 Dog 객체 생성 ( new 이용 )




				/////////////////////////////////////////////////////////////
				break ;

			case 2 :
				std::cout << "이름, 점프 높이 입력( 띄어쓰기 구분 )" << std::endl ;
				//// ( 3 ) ////	
				////// 사용자로부터 string, int를 입력 받아 Cat 객체 생성 ( new 이용 )



				/////////////////////////////////////////////////////////////
				break ;

			case 3 :
				std::cout << "\n!Action! " << std::endl ;
				//// ( 4 ) ////
				////// vector을 순회하며 각 객체의 Action 호출





				/////////////////////////////////////////////////////////////
				break ;

			case 4 :
				std::cout << "프로그램 종료!" << std::endl ;
				exitFlag = 1 ;
				break ;

			default :
				std::cout << "잘못된 입력입니다." << std::endl ;	
        		std::cin.clear() ;
        		std::cin.ignore( INT_MAX, '\n' ) ;
				continue;
		}
		if ( exitFlag ) break ;
	}
	//// ( 5 ) ////
	////// vector을 순회하며 각 객체의 소멸자 호출




	/////////////////////////////////////////////////////////////
	return 0 ;
}