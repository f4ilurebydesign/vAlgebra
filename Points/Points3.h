#include <iostream>

namespace core { namespace Points3 {
  
  	class Points3 {
	private:
		double x;
		double y;
		double z;
	public:
		Points3(const double& x, const double& y, const double& z);

		Points3& multNumb(const double n);
		Points3& divNumb(const double n);

		Points3& add(const Points3& other);
		Points3& sub(const Points3& other);
		Points3& div(const Points3& other);
		Points3& mult(const Points3& other);
		Points3& equ(const Points3& other);

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

  	//---------------------------------------------------------------------------------------------
  	//Points2
  	//---------------------------------------------------------------------------------------------
 	
	Points3::Points3(const double& x, const double& y, const double& z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}

	Points3& Points3::multNumb(const double n) {
		this->x *= n;
		this->y *= n;
		this->z *= n;

		return *this;
	}
	Points3& Points3::divNumb(const double n) {
		this->x /= n;
		this->y /= n;
		this->z /= n;

		return *this;
	}

	Points3& Points3::add(const Points3& other) {
		this->x += other.x;
		this->y += other.y;
		this->z += other.z;

		std::cout << "( " << x << ", " << y << ", " << z << " )" << std::endl;

		return *this;
	}
	Points3& Points3::sub(const Points3& other) {
		this->x -= other.x;
		this->y -= other.y;
		this->z -= other.z;

		std::cout << "( " << x << ", " << y << ", " << z << " )" << std::endl;

		return *this;
	}
	Points3& Points3::div(const Points3& other) {
		if (other.x == 0 || other.y == 0 || other.z == 0) {
			this->x = 0;
			this->y = 0;
			this->y = 0;
		}
		if (!(other.x == 0 || other.y)) {
			this->x /= other.x;
			this->y /= other.y;
			this->z /= other.z;
		}
		std::cout << "( " << x << ", " << y << ", " << z << " )" << std::endl;

		return *this;
	}
	Points3& Points3::mult(const Points3& other) {
		this->x *= other.x;
		this->y *= other.y;
		this->z *= other.z;

		std::cout << "( " << x << ", " << y << ", " << z << " )" << std::endl;

		return *this;
	}
	Points3& Points3::equ(const Points3& other) {
		this->x = other.x;
		this->y = other.y;
		this->z = other.z;

		std::cout << "( " << x << ", " << y << ", " << z << " )" << std::endl;

		return *this;
	}

	Points3 operator+ (Points3& left, const Points3& right) {
		return left.add(right);
	}
	Points3 operator- (Points3& left, const Points3& right) {
		return left.sub(right);
	}
	Points3 operator/ (Points3& left, const Points3& right) {
		return left.div(right);
	}
	Points3 operator* (Points3& left, const Points3& right) {
		return left.mult(right);
	}

	Points3& Points3::operator+= (const Points3& other) {
		return add(other);
	}
	Points3& Points3::operator-= (const Points3& other) {
		return sub(other);
	}
	Points3& Points3::operator/= (const Points3& other) {
		return div(other);
	}
	Points3& Points3::operator*= (const Points3& other) {
		return mult(other);
	}
	Points3& Points3::operator= (const Points3& other) {
		return equ(other);
	}
	
}}
