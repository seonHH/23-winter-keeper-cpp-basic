#include <iostream>
#include <string>

namespace week07
{
	class Human
	{
		private:
		int m_age ;
		std::string m_name ;

		public:
		Human() {}
		Human( int , std::string ) ;

		Human operator+( Human& ) ;
		friend std::ostream& operator<<( std::ostream& , const Human& ) ;
		friend std::istream& operator>>( std::istream& , Human& ) ;
	} ;
} 
