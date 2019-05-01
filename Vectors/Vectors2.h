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
		
	  	Vectors2& multNumb(const double n);
	  	Vectors2& divNumb(const double n);
	  	Vectors2& sumVectors(const Vectors2& left, const Vectors2& right);

  		Vectors2& add(const Vectors2& other);
  		Vectors2& sub(const Vectors2& other);
  		Vectors2& div(const Vectors2& other);
  		Vectors2& mult(const Vectors2& other);
  		Vectors2& equ(const Vectors2& other);

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


	Vectors2::Vectors2(const double& x0, const double& y0, const double& x1, const double& y1) {
		this->x0 = x0;
		this->y0 = y0;
		this->x1 = x1;
		this->y1 = y1;
	}

	Vectors2& Vectors2::multNumb(const double n) {
		this->x0 *= n;
		this->y0 *= n;
		this->x1 *= n;
		this->y1 *= n;

		return *this;
	}
	Vectors2& Vectors2::divNumb(const double n) {
		this->x0 /= n;
		this->y0 /= n;
		this->x1 /= n;
		this->y1 /= n;

		return *this;
	}
	/*доделать*/Vectors2& Vectors2::sum(const Vectors2& left, const Vectors2& right) {
		//один следует из другого
		if (left.x1 == right.x0 && left.y1 == right.y0) {
			this->x0 = left.x0;
			this->y0 = left.y0;
			this->x1 = right.x1;
			this->y1 = right.y1;
		}
		//из одной точки
		if (left.x1 == right.x1 && left.y1 == right.y1) {
			this->x0 = left.x1;
			this->y0 = left.y1;
			this->x1 += 5;
			this->y1 += 5;
		}
		std::cout << "( " << x0 << " ; " << y0 << " )" << "( " << x1 << " ; " << y1 << " )" << std::endl;
		
		return *this;
	}

	Vectors2& Vectors2::add(const Vectors2& other) {
		this->x0 += other.x0;
		this->y0 += other.y0;
		this->x1 += other.x1;
		this->y1 += other.y1;

		std::cout << "( " << x0 << " ; " << y0 << " )" << "( " << x1 << " ; " << y1 << " )" << std::endl;

		return *this;
	}
	Vectors2& Vectors2::sub(const Vectors2& other) {
		this->x0 -= other.x0;
		this->y0 -= other.y0;
		this->x1 -= other.x1;
		this->y1 -= other.y1;

		std::cout << "( " << x0 << " ; " << y0 << " )" << "( " << x1 << " ; " << y1 << " )" << std::endl;

		return *this;
	}
	Vectors2& Vectors2::div(const Vectors2& other) {
		if (other.x0 == 0 || other.y0 == 0 || other.x1 == 0 || other.y1 == 0) {
			this->x0 = 0;
			this->y0 = 0;
			this->x1 = 0;
			this->y1 = 0;
		}
		if (!(other.x0 == 0 || other.y0 == 0 || other.x1 == 0 || other.y1 == 0)) {
			this->x0 /= other.x0;
			this->y0 /= other.y0;
			this->x1 /= other.x1;
			this->y1 /= other.y1;
		}
		std::cout << "( " << x0 << " ; " << y0 << " )" << "( " << x1 << " ; " << y1 << " )" << std::endl;

		return *this;
	}
	Vectors2& Vectors2::mult(const Vectors2& other) {
		this->x0 *= other.x0;
		this->y0 *= other.y0;
		this->x1 *= other.x1;
		this->y1 *= other.y1;

		std::cout << "( " << x0 << " ; " << y0 << " )" << "( " << x1 << " ; " << y1 << " )" << std::endl;

		return *this;
	}
	Vectors2& Vectors2::equ(const Vectors2& other) {
		this->x0 = other.x0;
		this->y0 = other.y0;
		this->x1 = other.x1;
		this->y1 = other.y1;

		std::cout << "( " << x0 << " ; " << y0 << " )" << "( " << x1 << " ; " << y1 << " )" << std::endl;

		return *this;
	}

	Vectors2 operator+ (Vectors2& left, const Vectors2& right) {
		return left.add(right);
	}
	Vectors2 operator- (Vectors2& left, const Vectors2& right) {
		return left.sub(right);
	}
	Vectors2 operator/ (Vectors2& left, const Vectors2& right) {
		return left.div(right);
	}
	Vectors2 operator* (Vectors2& left, const Vectors2& right) {
		return left.mult(right);
	}

	Vectors2& Vectors2::operator+= (const Vectors2& other) {
		return add(other);
	}
	Vectors2& Vectors2::operator-= (const Vectors2& other) {
		return sub(other);
	}
	Vectors2& Vectors2::operator/= (const Vectors2& other) {
		return div(other);
	}
	Vectors2& Vectors2::operator*= (const Vectors2& other) {
		return mult(other);
	}
	Vectors2& Vectors2::operator= (const Vectors2& other) {
		return equ(other);
	}
	
}}
