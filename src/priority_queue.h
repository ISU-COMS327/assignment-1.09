#include <vector>
#include "character.h"

using namespace std;

struct Coordinate {
    uint8_t x;
    uint8_t y;
};

typedef struct {
    int distance;
    int priority;
    Character * character;
    Coordinate coord;
} Node;

class PriorityQueue {
    private:
        std::vector<Node> nodes;

    public:
        int size();
        void clear();
        void insertWithPriority(Character * character, int);
        void insertCoordWithPriority(struct Coordinate coord, int);
        void decreaseCoordPriority(struct Coordinate coord, int);
        void decreasePriority(Character * character, int);
        Node extractMin();
};
