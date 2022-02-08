PROJECT = OddOneOut

SRC = Assignment1_Q1_OddOneOutList.cpp Assignment1_Q1_OddOneOutList.h Assignment1_Q1_TestOddOneOutList.cpp

LIB = -lgtest -lgtest_main -lpthread

all : $(SRC)
	g++ $^ -o $@.out $(LIB)

run:all
	./$^.out

clean:
	rm *.o*
