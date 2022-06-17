cmake_minimum_required(VERSION 3.16.3)

project(Mini)

add_executable(${PROJECT_NAME} canvas.c pattern1.c line.c fractal1.c fractal2.c)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS} ${GLU_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} OpenGL::GL OpenGL::GLU GLUT::GLUT m)
