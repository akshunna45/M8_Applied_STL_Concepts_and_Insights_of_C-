PROJECT = AbsoluteDifferenceVector

SRC = Assignment1_Q4_TestAbsoluteDifferenceVector.cpp Assignment1_Q4_AbsoluteDifferenceVector.h Assignment1_Q4_AbsoluteDifferenceVector.cpp

LIB = -lgtest -lgtest_main -lpthread

all : $(SRC)g++
	g++ $^ -o $@.out $(LIB)

run:all
	./$^.out

clean:
	rm *.o*
