#pragma once

#include <iostream>
#include <math.h>

namespace core { namespace Points2 {

	class Points2 {
	private:
		double x, y;
	public:
		Points2(const double& x, const double& y);

		Points2& multNumb(const double n);
		Points2& divNumb(const double n);
		Points2& pSQRT(Points2& other);
		Points2& pPOWER(Points2& other, const int n);

		Points2& add(const Points2& other);
		Points2& sub(const Points2& other);
		Points2& div(const Points2& other);
		Points2& mult(const Points2& other);
		Points2& equ(const Points2& other);
		Points2& inc();
		Points2& dinc();

		friend Points2 operator+ (Points2& left, const Points2& right);
		friend Points2 operator- (Points2& left, const Points2& right);
		friend Points2 operator/ (Points2& left, const Points2& right);
		friend Points2 operator* (Points2& left, const Points2& right);
		friend Points2 operator++ (Points2& other);
		friend Points2 operator-- (Points2& right);

		Points2& operator+= (const Points2& right);
		Points2& operator-= (const Points2& right);
		Points2& operator/= (const Points2& right);
		Points2& operator*= (const Points2& right);
		Points2& operator= (const Points2& right);
	};

	//------------------------------------------------------------------------------------
	//Points2
	//------------------------------------------------------------------------------------

	Points2::Points2(const double& x, const double& y) {
		this->x = x;
		this->y = y;

		std::cout << "start coord: " << "( " << x << " , " << y << " )" << std::endl;
	}
	
	Points2& Points2::multNumb(const double n) {
		this->x *= n;
		this->y *= n;
	
		return *this;
	}
	Points2& Points2::divNumb(const double n) {
		this->x /= n;
		this->y /= n;
	
		return *this;
	}
	Points2& Points2::pSQRT(Points2& other) {
		this->x = sqrt(other.x);
		this->y = sqrt(other.y);

		std::cout << "( " << x << " ; " << y << " )" << std::endl;

		return *this;
	}
	Points2& Points2::pPOWER(Points2& other, const int n) {
		for (int i = 2; i <= n; i++) {
			this->x *= x;
			this->y *= y;
		}

		std::cout << "( " << x << " ; " << y << " )" << std::endl;

		return *this;
	}
	
	Points2& Points2::add(const Points2& other) {
		this->x += other.x;
		this->y += other.y;
	
		std::cout << "( " << x << " ; " << y << " )" << std::endl;
	
		return *this;
	}
	Points2& Points2::sub(const Points2& other) {
		this->x -= other.x;
		this->y -= other.y;
	
		std::cout << "( " << x << " ; " << y << " )" << std::endl;
	
		return *this;
	}
	Points2& Points2::div(const Points2& other) {
		if (other.x == 0 || other.y == 0) {
			this->x /= other.x;
			this->y /= other.y;
		}
		if (!(other.x == 0 || other.y)) {
			this->x /= other.x;
			this->y /= other.y;
		}
		std::cout << "( " << x << " ; " << y << " )" << std::endl;
	
		return *this;
	}
	Points2& Points2::mult(const Points2& other) {
		this->x *= other.x;
		this->y *= other.y;
	
		std::cout << "( " << x << " ; " << y << " )" << std::endl;
	
		return *this;
	}
	Points2& Points2::equ(const Points2& other) {
		this->x = other.x;
		this->y = other.y;
	
		std::cout << "( " << x << " ; " << y << " )" << std::endl;
	
		return *this;
	}
	Points2& Points2::inc() {
		this->x += 1;
		this->y += 1;

		std::cout << "( " << x << " ; " << y << " )" << std::endl;

		return *this;
	}
	Points2& Points2::dinc() {
		this->x -= 1;
		this->y -= 1;

		std::cout << "( " << x << " ; " << y << " )" << std::endl;

		return *this;
	}
	
	Points2 operator+ (Points2& left, const Points2& right) {
		return left.add(right);
	}
	Points2 operator- (Points2& left, const Points2& right) {
		return left.sub(right);
	}
	Points2 operator/ (Points2& left, const Points2& right) {
		return left.div(right);
	}
	Points2 operator* (Points2& left, const Points2& right) {
		return left.mult(right);
	}
	Points2 operator++ (Points2& other) {
		return other.inc();
	}
	Points2 operator-- (Points2& other) {
		return other.dinc();
	}
	
	Points2& Points2::operator+= (const Points2& other) {
		return add(other);
	}
	Points2& Points2::operator-= (const Points2& other) {
		return sub(other);
	}
	Points2& Points2::operator/= (const Points2& other) {
		return div(other);
	}
	Points2& Points2::operator*= (const Points2& other) {
		return mult(other);
	}
	Points2& Points2::operator= (const Points2& other) {
		return equ(other);
	}

} }
