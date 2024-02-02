#include "week04.hpp"

/////// Human 클래스의 생성자 정의 ( 매개변수가 없는 생성자, 매개변수 m_name, m_hp, m_power인 생성자)


////////////////

/////// 멤버 함수 Attack, GetInfo 정의


////////////////


int main( )
{
	////// 객체 생성
	week04::Human attacker ;
	week04::Human defender( "이창율", 50, 10 )  ;

	////// 공격 전 객체 정보 확인
	std::cout << "\n====================== " << std::endl;	
	std::cout << "공격 전 객체 정보 확인 " << std::endl;
	std::cout << "======================\n" << std::endl;	
	week04::Human::GetInfo( attacker );
	week04::Human::GetInfo( defender );

	////// 공격 수행
	std::cout << "\n====================== " << std::endl;	
	std::cout << "공격 수행 " << std::endl;
	std::cout << "======================\n" << std::endl;	
	attacker.Attack( defender ) ;
	
	////// 공격 후 객체 정보 확인
	std::cout << "\n====================== " << std::endl;	
	std::cout << "공격 후 객체 정보 확인" << std::endl;
	std::cout << "======================\n" << std::endl;	
	week04::Human::GetInfo( attacker );
	week04::Human::GetInfo( defender );


	return 0;
}