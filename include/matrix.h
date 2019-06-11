#ifndef MATRIX_H
#define MATRIX_H

using uint = unsigned int;
using sint = short int;
using usint = unsigned short int;



class Matrix
{	
	private:		

		int rows, cols;
		float **matrix;
	
	public:
	
		Matrix(uint, uint, float**);
		Matrix(uint, uint, float&);
		virtual ~Matrix();
		uint getNumOfRows() const;
		uint getNumOfCols() const;
		void printMatrix();
		Matrix& operator=(const Matrix&);
};



#endif 
