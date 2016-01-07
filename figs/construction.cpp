// 2: Left of first house (yellow)
faceLists.push_back(...);
faceLists.back().push_back(vertices[0]);
faceLists.back().push_back(vertices[2]);
faceLists.back().push_back(vertices[6]);
faceLists.back().push_back(vertices[4]);

//21: Back right vertical edge (blue)
faceLists.push_back(...);
faceLists.back().push_back(vertices[3]);
faceLists.back().push_back(vertices[7]);
faceLists.back().push_back(vertices[15]);
faceLists.back().push_back(vertices[11]);

for (int i = 0; i < 35; ++i)
    faces.push_back(
      builder.get_facet_from_vertices(
        faceLists[i].begin(), 
        faceLists[i].end(), false).first);

// 1: Right house (green)
volumeLists.push_back(...);
volumeLists.back().push_back(faces[6]);
volumeLists.back().push_back(faces[7]);
volumeLists.back().push_back(faces[8]);
volumeLists.back().push_back(faces[9]);
volumeLists.back().push_back(faces[10]);
volumeLists.back().push_back(faces[11]);
volumeLists.back().push_back(faces[12]);
volumeLists.back().push_back(faces[13]);
volumeLists.back().push_back(faces[14]);

// 11: Roof from left to right tip (red)
volumeLists.push_back(...);
volumeLists.back().push_back(faces[31]);
volumeLists.back().push_back(faces[32]);
volumeLists.back().push_back(faces[33]);
volumeLists.back().push_back(faces[34]);
volumeLists.back().push_back(faces[5]);

for (int i = 0; i < 12; ++i)
    volumes.push_back(builder.get_cell<3>(
      volumeLists[i].begin(), 
      volumeLists[i].end()).first);

LCC::Dart_handle house4d = builder.get_cell<4>(
  volumes.begin(), volumes.end()).first;