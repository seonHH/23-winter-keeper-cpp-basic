#include <iostream>
#include <string>

namespace week06 
{
	class Animal
	{
		private:
		std::string m_name ;

		public:
		Animal( std::string ) ;
		~Animal() ;

		virtual void Action() {} ;
		std::string GetName() ;
	};

	class Dog : public Animal
	{
		private:
		int m_waveNumber ;

		public:
		Dog( std::string, int ) ;
		void Action() override ;
	};

	class Cat : public Animal
	{
		private:
		int m_jumpHeight ;

		public:
		Cat( std::string, int) ;
		void Action() override ;
	};
}