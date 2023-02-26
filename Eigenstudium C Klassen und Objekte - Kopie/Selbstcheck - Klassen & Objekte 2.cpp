void initialize(struct point &point, int x, int y, int z) {
    point.x = x > 0 ? x : 0;
    point.y = y > 0 ? y : 0;
    point.z = z > 0 ? z : 0;
}