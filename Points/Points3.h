#include <iostream>

namespace core { namespace Points3 {
  
  class Points3 {
	private:
		double x;
		double y;
		double z;
	public:
		Points3(const double& x, const double& y, const double& z);

		Points3& multPoints3Number(const double n);
		Points3& divPoints3Number(const double n);

		Points3& addPoints3(const Points3& other);
		Points3& subPoints3(const Points3& other);
		Points3& divPoints3(const Points3& other);
		Points3& multPoints3(const Points3& other);
		Points3& equPoints3(const Points3& other);

		friend Points3 operator+ (Points3& left, const Points3& right);
		friend Points3 operator- (Points3& left, const Points3& right);
		friend Points3 operator/ (Points3& left, const Points3& right);
		friend Points3 operator* (Points3& left, const Points3& right);

		Points3& operator+= (const Points3& right);
		Points3& operator-= (const Points3& right);
		Points3& operator/= (const Points3& right);
		Points3& operator*= (const Points3& right);
		Points3& operator= (const Points3& right);
	};

  
 
}}
