float point_coordinates[][4] = {
    // Left house
    {0, 0, 0, 0}, // 0
    {1, 0, 0, 0}, // 1
    {0, 1, 0, 0}, // 2
    {1, 1, 0, 0}, // 3
    {0, 0, 1, 0}, // 4
    {1, 0, 1, 0}, // 5
    {0, 1, 1, 0}, // 6
    {1, 1, 1, 0}, // 7

    // Right house
    {0, 0, 0, 1}, // 8
    {1, 0, 0, 1}, // 9
    {0, 1, 0, 1}, // 10
    {1, 1, 0, 1}, // 11
    {0, 0, 1, 1}, // 12
    {1, 0, 1, 1}, // 13
    {0, 1, 1, 1}, // 14
    {1, 1, 1, 1}, // 15
    {.5, .5, 1.5, 1} // 16
};

for (int i = 0; i < 17; ++i) {
    points.push_back(Point(4, 
        point_coordinates[i], 
        point_coordinates[i]+4));
    vertices.push_back(
        builder.get_vertex(points[i]));
}