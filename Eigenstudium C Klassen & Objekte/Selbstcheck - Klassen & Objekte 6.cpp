class point {
public:
    point(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    point() {
        this->x = 0;
        this->y = 0;
        this->z = 0;
    }

    int x;
    int y;
    int z;
};