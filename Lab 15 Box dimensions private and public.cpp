#include <iostream>

using namespace std;

class Box
{
private:
	int length;
	int width;
	int height;

public:
	Box();
	Box(int l, int w, int h);
	int calcArea();
	void showBox();
};

int main()
{
	Box r1(100, 50, 10);
	Box r2(10, 5, 2);

	r1.showBox();
	r2.showBox();

	cout << "Area of Box 1 is " << r1.calcArea() << endl;
	cout << "Area of Box 2 is " << r2.calcArea() << endl;

	return 0;
}

Box::Box()
{
	length = 1;
	width = 1;
	height = 1;
}

Box::Box(int l, int w, int h)
{
	length = l;
	width = w;
	height = h;
}

void Box::showBox()
{
	cout << length << " x " << width << " y " << height << endl;
}

int Box::calcArea()
{
	return length * width * height;

}