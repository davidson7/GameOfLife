
using namespace std;

class Simulation{
  public:
    Simulation();
    ~Simulation();

    bool isFilled();
    bool dead();
    bool live();

    void update(int x, int y);


};
