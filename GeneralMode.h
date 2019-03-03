
using namespace std;

class GeneralMode{
public:
  GeneralMode();
  ~GeneralMode();

  void display();
  int getNeighbors(int x, int y);

private:
  int neighbors;
};
