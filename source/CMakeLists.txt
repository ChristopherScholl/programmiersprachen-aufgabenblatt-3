# Build aufgabe 2 und 3
add_executable(2_und_3
  aufgabe_2_und_3.cpp
  )

# Build example
add_executable(example
  window.cpp
  glew.c
  example.cpp
  )
target_link_libraries(example
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )
add_dependencies(example glfw nanovg ${COPY_BINARY})

# Build clock
add_executable(clock
  window.cpp
  glew.c
  clock.cpp
  )
target_link_libraries(clock
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )
add_dependencies(clock glfw nanovg ${COPY_BINARY})

# Build tests
add_executable(tests
  window.cpp
  glew.c
  tests.cpp
  vec2.cpp
  mat2.cpp
  rectangle.cpp
  circle.cpp
  )
target_link_libraries(tests
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )


