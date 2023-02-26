int main() {
    point* p = new point;
    p->x = 1;
    p->y = 2;
    p->z = 3;

    std::cout << "x: " << p->x << " | y: " << p->y << " | z: " << p->z << "\n";

    delete p;
    return 0;
}