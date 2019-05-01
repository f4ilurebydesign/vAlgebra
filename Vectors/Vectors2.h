#include <iostream>

namespace core { namespace Vectors2 {
  
  class Vectors2{
	  private:
		  double x0;
		  double y0;
		  double x1;
		  double y1;
	  public:
		  Vectors2(const double& x0, const double& y0, const double& x1, const double& y1);
		
	  	Vectors2& multVectors2Number(const double n);
	  	Vectors2& divVectors2Number(const double n);
	  	Vectors2& sumVectors2(const Vectors2& left, const Vectors2& right);

  		Vectors2& addVectors2(const Vectors2& other);
  		Vectors2& subVectors2(const Vectors2& other);
  		Vectors2& divVectors2(const Vectors2& other);
  		Vectors2& multVectors2(const Vectors2& other);
  		Vectors2& equVectors2(const Vectors2& other);

  		friend Vectors2 operator+ (Vectors2& left, const Vectors2& right);
  		friend Vectors2 operator- (Vectors2& left, const Vectors2& right);
		  friend Vectors2 operator/ (Vectors2& left, const Vectors2& right);
	  	friend Vectors2 operator* (Vectors2& left, const Vectors2& right);
		
		  Vectors2& operator+= (const Vectors2& right);
	  	Vectors2& operator-= (const Vectors2& right);
	  	Vectors2& operator/= (const Vectors2& right);
	  	Vectors2& operator*= (const Vectors2& right);
	  	Vectors2& operator= (const Vectors2& right);
	};

  
  
}}
