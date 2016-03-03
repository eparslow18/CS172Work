#pragma once

class EvenNumber {
	private:
		int number;
	public:
		EvenNumber()//non arg constructor 
		{
			number = 0;
		}
		EvenNumber(int number)//constructor
		{
			this->number = number;
		}

		int getValue() //return int
		{
			return number;
		}
		int getNext() //return the next even number
		{
			int nextEvenNum = number + 2;
			return nextEvenNum;
		}
		int getPrevious() //return previous even number
		{
			int previousEvenNum = number - 2;
			return previousEvenNum;
		}
};		