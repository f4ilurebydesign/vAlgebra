#pragma once

#include <iostream>
#include "Points2.h"
#include "Vectors2.h"

namespace core { namespace cGraphics {

#define MAX_X 80
#define MAX_Y 40

		char map[MAX_Y][MAX_X];

		class BaseGraphics {
		public:
			virtual void draw() = 0;
		};

		class Map : public BaseGraphics {
		public:
			Map();
			void init();
			void draw();
		};

		class Point : public BaseGraphics {
		private:
			int x, y;
		public:
			Point(const core::Points2::Points2& other);
			void draw();
		};

		class Line : public BaseGraphics {
		private:
			int x0, y0, x1, y1;
		public:
			Line(const core::Vectors2::Vectors& other);
			void draw();
		};


		//----------------------------------------
		//map
		//----------------------------------------

		Map::Map() {}
		void Map::init() {
				for (int y = 0; y < MAX_Y; y++) {
					for (int x = 0; x < MAX_X; x++) {
						map[y][x] = ' ';//рамка
						map[0][x] = '-';
						map[39][x] = '-';
						map[y][0] = '-';
						map[y][79] = '-';
					}
				}
			}
		void Map::draw() {
				for (int y = 0; y < MAX_Y; y++) {
					for (int x = 0; x < MAX_X; x++) {
						std::cout << map[y][x];
					}
					std::cout << std::endl;
				}
			}

		//----------------------------------------
		//point
		//----------------------------------------

		Point::Point(const core::Points2::Points2& other) {
				this->x = other.x;
				this->y = other.y;
			}
		void Point::draw() {
				map[y][x] = '*';
			}

		//----------------------------------------
		//line
		//----------------------------------------

		Line::Line(const core::Vectors2::Vectors& other) {
				this->x0 = other.x0;
				this->y0 = other.y0;
				this->x1 = other.x1;
				this->y1 = other.y1;
			}
		void Line::draw() {
				if (y0 == y1) {
					while (x0 != x1) {
						map[y0][x0] = '+';
						x0++;
					}
				}
				if (x0 == x1) {
					while (y0 != y1) {
						map[y0][x0] = '+';
						y0++;
					}
				}
				if (x0 > x1) {
					while (y0 != y1) {
						map[y0][x0] = '+';
						y0++;
						x0--;
					}
				}
				if (x0 < x1) {
					while (y0 != y1) {
						map[y0][x0] = '+';
						y0--;
						x0++;
					}
				}
			}

	}
}
