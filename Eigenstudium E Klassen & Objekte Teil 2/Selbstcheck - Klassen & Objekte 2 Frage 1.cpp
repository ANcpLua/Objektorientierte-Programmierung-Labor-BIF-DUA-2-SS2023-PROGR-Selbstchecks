int main() {
    point *p = new point(1, 2, 3);

    p->x = -1;
    p->y = 9999999;
    p->z = 0;

    std::cout << "x: " << p->x << " | y: " << p->y << " | z: " << p->z << "\n";

    delete p;
    return 0;
}