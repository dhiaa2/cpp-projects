
#include <iostream>
#include <string>
using namespace std;
class Explorer
{

private:
    string name;
    int score;
    int numGold;
    int numSilver;

public:
    Explorer();
    Explorer(string n, int s, int nG, int nS);
    int getScore();
    void findGold();
    void findSilver();
    void robbed();
    void robbed(int n);
    void showInfo();
};

Explorer::Explorer()
    : name("Ahmed the Sheik"), score(1000), numGold(100), numSilver(50)
{
}
Explorer::Explorer(string n, int s, int nG, int nS)
    :name(n), score(s), numGold(nG), numSilver(nS)
{
}
int Explorer::getScore()
{
    return score;
}
void Explorer::findGold()
{
    score = score + 100;
    numGold++;
}
void Explorer::findSilver()
{
    score = score + 50;
    numSilver++;
}
void Explorer::robbed()
{
    score = 0;
    numGold = 0;
    numSilver = 0;
}
void Explorer::robbed(int n)
{
    score = score - n;
}
void Explorer::showInfo()
{
    cout << "STATS <<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << "Name: " << name << endl;
    cout << "Score: " << score << endl;
    cout << "Gold Coins: " << numGold << endl;
    cout << "Silver Coins: " << numSilver << endl << endl;
}
int main()
{
    Explorer myExplorer;
    myExplorer.robbed();
    for (int x = 0; x < 100000; x++)
        myExplorer.findGold();
    myExplorer.showInfo();

    myExplorer.robbed();

    myExplorer.findGold();
    myExplorer.findSilver();
    myExplorer.showInfo();
    myExplorer.findGold();
    myExplorer.findSilver();
    myExplorer.showInfo();


}