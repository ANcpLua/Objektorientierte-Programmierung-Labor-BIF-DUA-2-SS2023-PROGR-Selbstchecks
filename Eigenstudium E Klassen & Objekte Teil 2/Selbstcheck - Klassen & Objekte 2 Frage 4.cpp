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

    point(const point &other) {
        this->x = other.x;
        this->y = other.y;
        this->z = other.z;
    }

    virtual ~point() {
        std::cout << "point destroyed\n";
    }

    int getX() const {
        return this->x;
    }

    void setX(int x) {
        this->x = x;
    }

    int getY() const {
        return this->y;
    }

    void setY(int y) {
        this->y = y;
    }

    int getZ() const {
        return this->z;
    }

    void setZ(int z) {
        this->z = z;
    }

private:
    int x;
    int y;
    int z;
};