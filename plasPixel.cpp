/*

PLEASE READ COPYING FOR LICENSE

FOLLOWING IS THE EXCEPTION TO THE LICENSE

Copyright 2015 George Charles Rosar II

*/

//insert CUDA for PixelRGBA

#include "plasPixel.h"
//psuedo code
//delclare class
  //init clean
  //cleanup clean
	//poly for multiplication
	//poly for calculated powers
	//



namespace OpenSubdiv {
namespace OPENSUBDIV_VERSION {

namespace Osd
{
	class gMath
	{
		public:
			virtual gMath& operator*(gMath& rv) = 0;
      		virtual gMath& multiply(Matrix*) = 0;
      		virtual gMath& multiply(Scalar*) = 0;
      		virtual gMath& multiply(Vector*) = 0;
      		virtual gMath& multiply(int& k) = 0;
      		virtual gMath& operator^(gMath& rv) = 0;
      		virtual gMath& powers(int& k) = 0;
      		virtual ~gMath() {}
	};

	class gMatrix : public gMath
	{
		public:
			gMatrix : gMath(Matrix& inMatrix, Scalar& inScalar) {
				_matrix = Matrix(inMatrix);
				_scalar = Scalar(inScalar);
			}
			gMatrix : gMath(Matrix& inMatrix, Scalar& inScalar, gCell& inRaw) {
				_matrix = Matrix(inMatrix);
				_scalar = Scalar(inScalar);
				_rawData = gCell(inRaw);
			}
			virtual Matrix& multiply(Matrix& rv)
			{
				return _matrix * rv;
			}
			virtual Scalar& multiply(Scalar& sv)
			{
				return _scalar * sv;
			}
			virtual gMatrix& operator*(Matrix& rv)
			{
				return gMatrix(_matrix * rv, _scalar, _rawData);
			}
			~gMatrix() {}

		private:
			Matrix& _matrix;
			Scalar& _scalar;
			gCell _rawData;
	};

	class gCell : public gMath
	{
		public:
			gCell : gMath {}
			Matrix& gMatrix(float aA, float aB, float aC, float bA, float bB, float bC, float cA, float cB, float cC);
			PixelRGBA& cPixel[];
			~gCell() {}
	};

	class gPixel : public gCell
	{
		public: 
			gPixel : gCell {}
			~gPixel() {}
	};

	

}
