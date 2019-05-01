#include <iostream>

namespace core { namespace Vectors3 {

  class Vectors3{
	  private:
	  	double x0;
		  double x1;
		  double y0;
		  double y1;
		  double z0;
		  double z1;
	  public:
	  	Vectors3(const double& x0, const double y0, const double& z0, const double& x1, const double y1, const double& z1);

		  Vectors3& multNumb(const double n);
		  Vectors3& divNumb(const double n);
      Vectors3& sumVectors(const Vectors3& left, const Vectors3& right);

		  Vectors3& add(const Vectors3& other);
		  Vectors3& sub(const Vectors3& other);
		  Vectors3& div(const Vectors3& other);
	  	Vectors3& mult(const Vectors3& other);
		  Vectors3& equ(const Vectors3& other);

	  	friend Vectors3 operator+ (Vectors3& left, const Vectors3& right);
		  friend Vectors3 operator- (Vectors3& left, const Vectors3& right);
		  friend Vectors3 operator/ (Vectors3& left, const Vectors3& right);
		  friend Vectors3 operator* (Vectors3& left, const Vectors3& right);

		  Vectors3& operator+= (const Vectors3& right);
		  Vectors3& operator-= (const Vectors3& right);
		  Vectors3& operator/= (const Vectors3& right);
		  Vectors3& operator*= (const Vectors3& right);
		  Vectors3& operator= (const Vectors3& right);
	};
  
    //---------------------------------------------------------------------------------------------
  	//Vectors3
  	//---------------------------------------------------------------------------------------------
  
    Vectors3::Vectors3(const double& x0, const double y0, const double& z0, const double& x1, const double y1, const double& z1) {
		  this->x0 = x0;
		  this->y0 = y0;
		  this->z0 = z0;
		  this->x1 = x1;
		  this->y1 = y1;
		  this->z1 = z1;
	  }

	  Vectors3& Vectors3::multVectors3Number(const double n) {
		  this->x0 *= n;
	  	this->y0 *= n;
	  	this->z0 *= n;
	  	this->x1 *= n;
	  	this->y1 *= n;
	  	this->z1 *= n;

		  return *this;
	  }
	  Vectors3& Vectors3::divVectors3Number(const double n) {
		  this->x0 /= n;
	  	this->y0 /= n;
  		this->z0 /= n;
  		this->x1 /= n;
  		this->y1 /= n;
  		this->z1 /= n;

		  return *this;
	  }
	  /*доделать*/Vectors3& Vectors3::sumVectors3(const Vectors3& left, const Vectors3& right) {
		    //один следует из другого
		    if (left.x1 == right.x0 && left.y1 == right.y0 && left.z1 == right.z0) {
			this->x0 = left.x0;
			this->y0 = left.y0;
			this->z0 = left.z0; 
			this->x1 = right.x1;
			this->y1 = right.y1;
			this->z1 = right.z1; 
		}
		//из одной точки
		if (left.x1 == right.x1 && left.y1 == right.y1 && left.z1 == right.z1) {
			this->x0 = left.x1;
			this->y0 = left.y1;
			this->z0 = right.z1;
			this->x1 += 5; //шо це
			this->y1 += 5; //шо це
			this->z1 = right.y1; // шо це
		}
		std::cout << "( " << x0 << " ; " << y0 << " )" << "( " << x1 << " ; " << y1 << " )" << std::endl;

		return *this;
	}

	Vectors3& Vectors3::addVectors3(const Vectors3& other) {
		this->x0 += other.x0;
		this->y0 += other.y0;
		this->z0 += other.z0;
		this->x1 += other.x1;
		this->y1 += other.y1;
		this->z1 += other.z1;

		std::cout << "( " << x0 << " ; " << y0 << " ; " << z0 << " )" << "( " << x1 << " ; " << y1 << " ; "  << z1 << " )" << std::endl;

		return *this;
	}
	Vectors3& Vectors3::subVectors3(const Vectors3& other) {
		this->x0 -= other.x0;
		this->y0 -= other.y0;
		this->z0 -= other.z0;
		this->x1 -= other.x1;
		this->y1 -= other.y1;
		this->z1 -= other.z1;

		std::cout << "( " << x0 << " ; " << y0 << " ; " << z0 << " )" << "( " << x1 << " ; " << y1 << " ; " << z1 << " )" << std::endl;

		return *this;
	}
	Vectors3& Vectors3::divVectors3(const Vectors3& other) {
		if (other.x0 == 0 || other.y0 == 0 || other.z0 || other.x1 == 0 || other.y1 == 0 || other.z1 == 0) {
			this->x0 = 0;
			this->y0 = 0;
			this->z0 = 0;
			this->x1 = 0;
			this->y1 = 0;
			this->z1 = 0;

			std::cout << "( " << x0 << " ; " << y0 << " ; " << z0 << " )" << "( " << x1 << " ; " << y1 << " ; " << z1 << " )" << std::endl;
		}
		if (!(other.x0 == 0 || other.y0 == 0 || other.z0 || other.x1 == 0 || other.y1 == 0 || other.z1 == 0)) {
			this->x0 /= other.x0;
			this->y0 /= other.y0;
			this->z0 /= other.z0;
			this->x1 /= other.x1;
			this->y1 /= other.y1;
			this->z1 /= other.z1;

			std::cout << "( " << x0 << " ; " << y0 << " ; " << z0 << " )" << "( " << x1 << " ; " << y1 << " ; " << z1 << " )" << std::endl;
		}

		return *this;
	}
	Vectors3& Vectors3::multVectors3(const Vectors3& other) {
		this->x0 *= other.x0;
		this->y0 *= other.y0;
		this->z0 *= other.z0;
		this->x1 *= other.x1;
		this->y1 *= other.y1;
		this->z1 *= other.z1;

		std::cout << "( " << x0 << " ; " << y0 << " ; " << z0 << " )" << "( " << x1 << " ; " << y1 << " ; " << z1 << " )" << std::endl;

		return *this;
	}
	Vectors3& Vectors3::equVectors3(const Vectors3& other) {
		this->x0 = other.x0;
		this->y0 = other.y0;
		this->z0 = other.z0;
		this->x1 = other.x1;
		this->y1 = other.y1;
		this->z1 = other.z1;

		std::cout << "( " << x0 << " ; " << y0 << " ; " << z0 << " )" << "( " << x1 << " ; " << y1 << " ; " << z1 << " )" << std::endl;

		return *this;
	}

	Vectors3 operator+ (Vectors3& left, const Vectors3& right) {
		return left.addVectors3(right);
	}
	Vectors3 operator- (Vectors3& left, const Vectors3& right) {
		return left.subVectors3(right);
	}
	Vectors3 operator/ (Vectors3& left, const Vectors3& right) {
		return left.divVectors3(right);
	}
	Vectors3 operator* (Vectors3& left, const Vectors3& right) {
		return left.multVectors3(right);
	}

	Vectors3& Vectors3::operator+= (const Vectors3& other) {
		return addVectors3(other);
	}
	Vectors3& Vectors3::operator-= (const Vectors3& other) {
		return subVectors3(other);
	}
	Vectors3& Vectors3::operator/= (const Vectors3& other) {
		return divVectors3(other);
	}
	Vectors3& Vectors3::operator*= (const Vectors3& other) {
		return multVectors3(other);
	}
	Vectors3& Vectors3::operator= (const Vectors3& other) {
		return equVectors3(other);
	}

  
}}
