PROJECT = SmallerThanMeanList

SRC = Assignment1_Q3_SmallerThanMeanList.cpp Assignment1_Q3_SmallerThanMeanList.h Assignment1_Q3_TestSmallerThanMeanList.cpp

LIB = -lgtest -lgtest_main -lpthread

all : $(SRC)
	g++ $^ -o $@.out $(LIB)

run:all
	./$^.out

clean:
	rm *.o*
