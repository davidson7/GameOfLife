
using namespace std;

class Grid{
public:
  Grid();
  Grid(int width, int length);
  ~Grid();

  void setDimensions(int width, int length);

private:
  int width;
  int length;
};
