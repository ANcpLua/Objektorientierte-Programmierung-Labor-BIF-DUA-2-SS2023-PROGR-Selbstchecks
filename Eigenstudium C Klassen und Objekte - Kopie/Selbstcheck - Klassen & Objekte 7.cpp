int main() {
    point *p1 = new point(1, 2, 3);
    std::cout << "x: " << p1->x << " | y: " << p1->y << " | z: " << p1->z << "\n";
    delete p1;

    point *p2 = new point();
    std::cout << "x: " << p2->x << " | y: " << p2->y << " | z: " << p2->z << "\n";
    delete p2;

    return 0;
}