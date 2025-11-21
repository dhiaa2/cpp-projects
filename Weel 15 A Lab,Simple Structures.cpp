#include <iostream>
using namespace std;

struct BOX
{
    int length;
    int width;
    int height;


};

int calcVolume(BOX v);

int main()
{
    BOX v1 = { 100,50, 20 };
    BOX v2 = { 25,10, 10 };
    BOX v3 = { 20,10, 20 };
    cout << "Volume: " << calcVolume(v1) << endl;
    cout << "Volume: " << calcVolume(v2) << endl;
    cout << "Volume: " << calcVolume(v3) << endl;


    return 0;

}

int calcVolume(BOX v)
{
    int volume;
    volume = v.length * v.width * v.height;
    return volume;
}