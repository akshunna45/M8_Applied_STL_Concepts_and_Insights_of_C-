PROJECT = AbsoluteDifferenceList

SRC = Assignment1_Q4_TestAbsoluteDifferenceList.cpp Assignment1_Q4_AbsoluteDifferenceList.h Assignment1_Q4_AbsoluteDifferenceList.cpp

LIB = -lgtest -lgtest_main -lpthread

all : $(SRC)
	g++ $^ -o $@.out $(LIB)

run:all
	./$^.out

clean:
	rm *.o*
