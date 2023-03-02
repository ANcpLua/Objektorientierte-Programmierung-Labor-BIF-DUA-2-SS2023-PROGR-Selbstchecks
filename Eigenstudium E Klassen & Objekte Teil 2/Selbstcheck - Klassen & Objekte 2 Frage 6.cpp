class point {
public:
    point(int x, int y, int z) {
        this->setX(x);
        this->setY(y);
        this->setZ(z);
    }

    point() {
        this->setX(0);
        this->setY(0);
        this->setZ(0);
    }

    point(const point &other) {
        this->setX(other.getX());
        this->setY(other.getY());
        this->setZ(other.getZ());
    }

    virtual ~point() {
        std::cout << "point destroyed\n";
    }

    int getX() const {
        return this->x;
    }

    void setX(int x) {
        if (x < 0) {
            this->x = 0;
            return;
        }

        if (x > 10) {
            this->x = 10;
            return;
        }

        this->x = x;
    }

    int getY() const {
        return this->y;
    }

    void setY(int y) {
        if (y < 0) {
            this->y = 0;
            return;
        }

        if (y > 10) {
            this->y = 10;
            return;
        }

        this->y = y;
    }

    int getZ() const {
        return this->z;
    }

    void setZ(int z) {
        if (z < 0) {
            this->z = 0;
            return;
        }

        if (z > 10) {
            this->z = 10;
            return;
        }

        this->z = z;
    }

private:
    int x;
    int y;
    int z;
};