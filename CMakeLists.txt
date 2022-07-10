cmake_minimum_required(VERSION 3.16.3)

project(Mini)

add_executable(${PROJECT_NAME} canvas.c spiral.c line.c fern.c vicsek.c home.c)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS} ${GLU_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} OpenGL::GL OpenGL::GLU GLUT::GLUT m)
