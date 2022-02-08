PROJECT = SmallerThanMeanVector

SRC = Assignment1_Q3_SmallerThanMeanVector.cpp Assignment1_Q3_SmallerThanMeanVector.h Assignment1_Q3_TestSmallerThanMeanVector.cpp

LIB = -lgtest -lgtest_main -lpthread

all : $(SRC)
	g++ $^ -o $@.out $(LIB)

run:all
	./$^.out

clean:
	rm *.o*
