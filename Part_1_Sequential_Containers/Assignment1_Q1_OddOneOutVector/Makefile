PROJECT = OddOneOut

SRC = Assignment1_Q1_OddOneOutVector.cpp Assignment1_Q1_OddOneOutVector.h Assignment1_Q1_TestOddOneOutVector.cpp

LIB = -lgtest -lgtest_main -lpthread

all : $(SRC)
	g++ $^ -o $@.out $(LIB)

run:all
	./$^.out

clean:
	rm *.o*
