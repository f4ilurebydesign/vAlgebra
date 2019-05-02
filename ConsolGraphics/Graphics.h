#pragma once

#include <iostream>

namespace core { namespace cGraphics {

#define MAX_X 40
#define MAX_Y 40

	char map[MAX_Y][MAX_X];

	class BaseGraphics {
	public:
		virtual void draw() = 0;
	};

	class Map : public BaseGraphics {
	public:
		Map() {}
		void init() {
			for (int y = 0; y < MAX_Y; y++) {
				for (int x = 0; x < MAX_X; x++) {
					map[y][x] = ' ';//рамка
					map[0][x] = '-';
					map[39][x] = '-';
					map[y][0] = '-';
					map[y][39] = '-';
				}
			}
		}
		void draw() {
			for (int y = 0; y < MAX_Y; y++) {
				for (int x = 0; x < MAX_X; x++) {
					std::cout << map[y][x];
				}
				std::cout << std::endl;
			}
		}
	};
		class Line : public BaseGraphics {
	private:
		int x0, y0, x1, y1;
	public:
		Line(int x0, int y0, int x1, int y1) {
			this->x0 = x0;
			this->y0 = y0;
			this->x1 = x1;
			this->y1 = y1;
		}
		void draw() {
			// - | / \
			
		}
	};


} }
