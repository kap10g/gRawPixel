/*

PLEASE READ COPYING FOR LICENSE

FOLLOWING IS THE EXCEPTION TO THE LICENSE

Copyright 2015 George Charles Rosar II

*/

//insert CUDA for PixelRGBA

#include "../version.h"
#include "../osd/cudaVertexBuffer.h"
#include "../osd/cpuKernel.h"
#include <bitset>
#include <cassert>
#include <cstring>
#include <vector>
#include <string.h>

#include "../osd/opengl.h"
#include "gTransform.h"
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
      		virtual gMath& multiply(int k) = 0;
      		virtual gMath& operator^(gMath& rv) = 0;
      		virtual gMath& powers(int k) = 0;
      		virtual ~gMath() {}
	};

	class gMatrix : public gMath
	{
		public:
			gMatrix : gMath(Matrix& inMatrix, Scalar& inScalar);
			gMatrix : gMath(Matrix& inMatrix, Scalar& inScalar, gCell& inRaw);

			virtual Matrix& multiply(Matrix& rv);
			virtual Scalar& multiply(Scalar& sv);
			virtual gMatrix& operator*(Matrix& rv);
			~gMatrix();

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
			~gCell();
	};

	class plasPixel : public gCell
	{
		public: 
			plasPixel : gCell;
			~plasPixel();
	};

	

}
