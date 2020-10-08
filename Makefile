CC=g++
FLAG= -std=c++11 -g -Wall
SRCS=$(wildcard ./src/*.cpp)
OBJS=$(patsubst ./src/%.cpp,%.o,$(SRCS))
LIBDIR= -L /usr/local/lib 
LIBS += -l glfw -l opencv_world
INCDIR=-I ./include -I /usr/local/include/opencv4 -I /usr/local/include/GLFW
main : $(OBJS)
	$(CC) $(FLAG) -o main $(OBJS) $(LIBDIR) $(LIBS)
%.o : $(SRCS)
	$(CC) $(FLAG) $(INCDIR) $(SRCS) -c
clean : 
	rm -f *.o 


