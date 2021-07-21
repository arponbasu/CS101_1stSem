#include<stdio.h>
#include<math.h>


typedef struct {
 
 double x;
 double y;
}complexrect;


typedef struct {
 
 double r;
 double a;
}complexpolar;




complexrect CartesianInput (double,double);
complexpolar PolarInput (double,double);
complexpolar RectToPolar (complexrect);
complexrect PolarToRect (complexpolar);
double realPart(complexrect);
double PolarRealPart(complexpolar);
double imaginaryPart(complexrect);
double PolarImaginaryPart(complexpolar);
double modulus (complexrect);
double argument (complexrect);
double Polarargument (complexpolar);
complexrect conjugate (complexrect);
complexpolar Polarconjugate (complexpolar);
complexrect sum (complexrect,complexrect);
complexpolar Polarsum (complexpolar,complexpolar);
complexrect difference (complexrect,complexrect);
complexpolar Polardifference (complexpolar,complexpolar);
complexrect product (complexrect,complexrect);
complexpolar Polarproduct (complexpolar,complexpolar);
complexrect division (complexrect,complexrect);
complexpolar Polardivision (complexpolar,complexpolar);
complexrect exponentiation (complexrect,complexrect);
complexpolar Polarexponentiation (complexpolar,complexpolar);
complexrect NaturalLogarithm (complexrect);
complexrect GeneralBaseLogarithm (complexrect,complexrect);
complexpolar PolarNaturalLogarithm (complexpolar);
complexpolar PolarGeneralBaseLogarithm (complexpolar,complexpolar);
complexrect sine (complexrect);
complexpolar Polarsine (complexpolar);
complexrect cosine (complexrect);
complexpolar Polarcosine (complexpolar);
complexrect tangent (complexrect);
complexpolar Polartangent (complexpolar);
complexrect cosecant (complexrect);
complexpolar Polarcosecant (complexpolar);
complexrect secant (complexrect);
complexpolar Polarsecant (complexpolar);
complexrect cotangent (complexrect);
complexpolar Polarcotangent (complexpolar);
complexrect Solvesine (complexrect);
complexpolar PolarSolvesine (complexpolar);
complexrect Solvecosine (complexrect);
complexpolar PolarSolvecosine (complexpolar);
complexrect Solvetangent (complexrect);
complexpolar PolarSolvetangent (complexpolar);
complexrect Solvecosecant (complexrect);
complexpolar PolarSolvecosecant (complexpolar);
complexrect Solvesecant (complexrect);
complexpolar PolarSolvesecant (complexpolar);
complexrect Solvecotangent (complexrect);
complexpolar PolarSolvecotangent (complexpolar);
complexrect sinehyper (complexrect);
complexpolar Polarsinehyper (complexpolar);
complexrect cosinehyper (complexrect);
complexpolar Polarcosinehyper (complexpolar);
complexrect tangenthyper (complexrect);
complexpolar Polartangenthyper (complexpolar);
complexrect cosecanthyper (complexrect);
complexpolar Polarcosecanthyper (complexpolar);
complexrect secanthyper (complexrect);
complexpolar Polarsecanthyper (complexpolar);
complexrect cotangenthyper (complexrect);
complexpolar Polarcotangenthyper (complexpolar);
complexrect Solvesinehyper (complexrect);
complexpolar PolarSolvesinehyper (complexpolar);
complexrect Solvecosinehyper (complexrect);
complexpolar PolarSolvecosinehyper (complexpolar);
complexrect Solvetangenthyper (complexrect);
complexpolar PolarSolvetangenthyper (complexpolar);
complexrect Solvecosecanthyper (complexrect);
complexpolar PolarSolvecosecanthyper (complexpolar);
complexrect Solvesecanthyper (complexrect);
complexpolar PolarSolvesecanthyper (complexpolar);
complexrect Solvecotangenthyper (complexrect);
complexpolar PolarSolvecotangenthyper (complexpolar);


complexrect CartesianInput (double x,double y)
{
	complexrect z;
	z.x = x;
	z.y = y;
	return z;
}

complexpolar PolarInput (double r,double a)
{
	complexpolar z;
	z.r = r;
	z.a = a;
	return z;
}




complexpolar RectToPolar (complexrect z1)
{
	complexpolar z2;
	
	z2.r = modulus (z1);
	z2.a = argument (z1);
	
	return z2;
}



complexrect PolarToRect (complexpolar z1)
{
	complexrect z2;
	double l = z1.r;
	double b = z1.a;
	
	z2.x = l*cos(b);
	z2.y = l*sin(b);
	
	return z2;
}

double realPart(complexrect z)
{
	return z.x;
}

double imaginaryPart(complexrect z)
{
	return z.y;
}

double PolarRealPart(complexpolar z)
{
		return (z.r)*cos(z.a);
}

double PolarImaginaryPart(complexpolar z)
{
		return (z.r)*sin(z.a);
}



double modulus (complexrect z)
{
	return pow(((z.x)*(z.x) + (z.y)*(z.y)),0.5);
}


double argument (complexrect z)
{
	return atan2 (z.y,z.x);
}

double Polarargument (complexpolar z)
{
	double b = z.a;
	
	while (b > 3.141592)
	{
		b = b - 6.283185;
	}
	
	return b;
}


complexrect conjugate (complexrect z)
{
	complexrect w;

	w.x = z.x;
	w.y = -z.y;

	return w;
}

complexpolar Polarconjugate (complexpolar z)
{
	complexpolar w;

	w.r = z.r;
	w.a = -z.a;

	return w;
}

complexrect sum (complexrect z1,complexrect z2)
{
	complexrect z3;
	
	z3.x = z1.x + z2.x;
	z3.y = z1.y + z2.y;
	
	return z3;

}

complexpolar Polarsum (complexpolar z1,complexpolar z2)
{
	return RectToPolar(sum(PolarToRect(z1),PolarToRect(z2)));
}

complexrect difference (complexrect z1,complexrect z2)
{
	complexrect z3;
	
	z3.x = z1.x - z2.x;
	z3.y = z1.y - z2.y;
	
	return z3;

}

complexpolar Polardifference (complexpolar z1,complexpolar z2)
{
	return RectToPolar(difference(PolarToRect(z1),PolarToRect(z2)));
}


complexrect product (complexrect z1,complexrect z2)
{
	complexrect z3;
	double x1 = z1.x;
	double x2 = z2.x;
	double y1 = z1.y;
	double y2 = z2.y;
	
	z3.x = x1*x2 - y1*y2;
	z3.y = y1*x2 + x1*y2;
	
	return z3;

}

complexpolar Polarproduct (complexpolar z1,complexpolar z2)
{
	complexpolar z3;
	
	z3.r = (z1.r)*(z2.r);
	z3.a = z1.a + z2.a;
	
	
	return z3;
}

complexrect division (complexrect z1,complexrect z2)
{
	complexrect z3;
	double x1 = z1.x;
	double x2 = z2.x;
	double y1 = z1.y;
	double y2 = z2.y;
	
	z3.x = (x1*x2 + y1*y2)/(pow(modulus(z2),2.0));
	z3.y = (y1*x2 - x1*y2)/(pow(modulus(z2),2.0));
	
	return z3;

}

complexpolar Polardivision (complexpolar z1,complexpolar z2)
{
	complexpolar z3;
	
	z3.r = (z1.r)/(z2.r);
	z3.a = z1.a - z2.a;
	
	
	return z3;
}


complexrect exponentiation (complexrect w,complexrect z)
{
	complexrect l;
	
	double r = modulus(w);
	double t = argument(w);
	double c = realPart(z);
	double d = imaginaryPart(z);
	
	l.x = pow(r,c)*exp((-1)*d*t)*cos(d*log(r) + c*t);
	l.y = pow(r,c)*exp((-1)*d*t)*sin(d*log(r) + c*t);
	
	return l;
}


complexpolar Polarexponentiation (complexpolar z,complexpolar w)
{
	double m = w.r;
	double t = Polarargument(w);
	double c = PolarRealPart(z);
	double d = PolarImaginaryPart(z);
	
	complexrect l;
	l.x = pow(m,c)*exp((-1)*d*t)*cos(d*log(m) + c*t);
	l.y = pow(m,c)*exp((-1)*d*t)*sin(d*log(m) + c*t);
	
	return RectToPolar(l);
}

complexrect NaturalLogarithm (complexrect z)
{
	complexrect l;
	
	l.x = log(modulus(z));
	l.y = argument(z);
	
	return l;
}

complexrect GeneralBaseLogarithm (complexrect w,complexrect z)
{
	return division(NaturalLogarithm(z),NaturalLogarithm(w));
}

complexpolar PolarNaturalLogarithm (complexpolar z)
{
	complexrect l;
	
	l.x = log(z.r);
	l.y = Polarargument(z);
	
	return RectToPolar(l);
}

complexpolar PolarGeneralBaseLogarithm (complexpolar w,complexpolar z)
{
	return Polardivision(PolarNaturalLogarithm(z),PolarNaturalLogarithm(w));
}

complexrect sine (complexrect z)
{
	double x = z.x;
	double y = z.y;
	
	complexrect l;
	
	l.x = sin(x)*cosh(y);
	l.y = cos(x)*sinh(y);
	

	return l;
}

complexpolar Polarsine (complexpolar z)
{
	return 	RectToPolar(sine(PolarToRect(z)));
}

complexrect cosine (complexrect z)
{
	double x = z.x;
	double y = z.y;
	
	complexrect l;
	
	l.x = cos(x)*cosh(y);
	l.y = -sin(x)*sinh(y);
	

	return l;
}

complexpolar Polarcosine (complexpolar z)
{
	return 	RectToPolar(cosine(PolarToRect(z)));
}

complexrect tangent (complexrect z)
{
	double x = z.x;
	double y = z.y;
	
	complexrect l;
	
	l.x = (sin(2*x))/(cos(2*x) + cosh(2*y));
	l.y = (sinh(2*y))/(cos(2*x) + cosh(2*y));
		
	return l;
}

complexpolar Polartangent (complexpolar z)
{
	return 	RectToPolar(tangent(PolarToRect(z)));
}

complexrect cosecant (complexrect z)
{
	double x = z.x;
	double y = z.y;
	
	complexrect l;
	
	l.x = sin(x)*cosh(y);
	l.y = cos(x)*sinh(y);
	
	complexrect one;
	one.x = 1.0;
	one.y = 0.0;

	return division(one,l);
}

complexpolar Polarcosecant (complexpolar z)
{
	return 	RectToPolar(cosecant(PolarToRect(z)));
}

complexrect secant (complexrect z)
{
	double x = z.x;
	double y = z.y;
	
	complexrect l;
	
	l.x = cos(x)*cosh(y);
	l.y = -sin(x)*sinh(y);
	

	complexrect one;
	one.x = 1.0;
	one.y = 0.0;

	return division(one,l);
}

complexpolar Polarsecant (complexpolar z)
{
	return 	RectToPolar(secant(PolarToRect(z)));
}

complexrect cotangent (complexrect z)
{
	double x = z.x;
	double y = z.y;
	
	complexrect l;
	
	l.x = (sin(2*x))/(cos(2*x) + cosh(2*y));
	l.y = (sinh(2*y))/(cos(2*x) + cosh(2*y));
		
	complexrect one;
	one.x = 1.0;
	one.y = 0.0;

	return division(one,l);
}

complexpolar Polarcotangent (complexpolar z)
{
	return 	RectToPolar(cotangent(PolarToRect(z)));
}

///////////////////////////////////////////////////////////////////////////////

complexrect Solvesine (complexrect z)
{
	
	
	complexrect half;
	half.x = 0.5;
	half.y = 0.0;
	
	complexrect one;
	one.x = 1.0;
	one.y = 0.0;
	
	complexrect two;
	two.x = 2.0;
	two.y = 0.0;
	
	complexrect iota;
	iota.x = 0.0;
	iota.y = 1.0;
	
	complexrect square;
	
	square = exponentiation(z,two);
	
	complexrect w;
	
	w = exponentiation(difference(one,square),half);
	
	complexrect l;
	
	l = difference(w,product(iota,z));
	
	return product(iota,NaturalLogarithm(l));
	
}

complexpolar PolarSolvesine (complexpolar z)
{
	return 	RectToPolar(Solvesine(PolarToRect(z)));
}

complexrect Solvecosine (complexrect z)
{
		complexrect pibytwo;
		pibytwo.x = 1.570796;
		pibytwo.y = 0.0;
		
		return difference (pibytwo,Solvesine(z));
}

complexpolar PolarSolvecosine (complexpolar z)
{
	return 	RectToPolar(Solvecosine(PolarToRect(z)));
}

complexrect Solvetangent (complexrect z)
{
	complexrect half;
	half.x = 0.5;
	half.y = 0.0;
	
	complexrect iota;
	iota.x = 0.0;
	iota.y = 1.0;
	
	return product (product(iota,half),NaturalLogarithm(division(sum(iota,z),difference(iota,z))));
}

complexpolar PolarSolvetangent (complexpolar z)
{
	return 	RectToPolar(Solvetangent(PolarToRect(z)));
}

complexrect Solvecosecant (complexrect z)
{
	complexrect one;
	one.x = 1.0;
	one.y = 0.0;
	
	return Solvesine(division(one,z));
	
}

complexpolar PolarSolvecosecant (complexpolar z)
{
	return 	RectToPolar(Solvecosecant(PolarToRect(z)));
}

complexrect Solvesecant (complexrect z)
{
		complexrect one;
		one.x = 1.0;
		one.y = 0.0;
	
		return Solvecosine(division(one,z));
}

complexpolar PolarSolvesecant (complexpolar z)
{
	return 	RectToPolar(Solvesecant(PolarToRect(z)));
}

complexrect Solvecotangent (complexrect z)
{
	complexrect one;
	one.x = 1.0;
	one.y = 0.0;
	
	return Solvetangent(division(one,z));
	
}

complexpolar PolarSolvecotangent (complexpolar z)
{
	return 	RectToPolar(Solvecotangent(PolarToRect(z)));
}

///////////////////////////////////////////

complexrect sinehyper (complexrect z)
{
	double x = z.x;
	double y = z.y;
	
	complexrect l;
	
	l.x = sinh(x)*cos(y);
	l.y = cosh(x)*sin(y);
	

	return l;
}

complexpolar Polarsinehyper (complexpolar z)
{
	return 	RectToPolar(sinehyper(PolarToRect(z)));
}

complexrect cosinehyper (complexrect z)
{
	double x = z.x;
	double y = z.y;
	
	complexrect l;
	
	l.x = cosh(x)*cos(y);
	l.y = sinh(x)*sin(y);
	

	return l;
}

complexpolar Polarcosinehyper (complexpolar z)
{
	return 	RectToPolar(cosinehyper(PolarToRect(z)));
}

complexrect tangenthyper (complexrect z)
{
	
	complexrect minus;
	minus.x = -1.0;
	minus.y = 0.0;
	
	complexrect iota;
	iota.x = 0.0;
	iota.y = 1.0;
	
	return product(product(minus,iota),tangent(product(iota,z)));
}

complexpolar Polartangenthyper (complexpolar z)
{
	return 	RectToPolar(tangenthyper(PolarToRect(z)));
}

complexrect cosecanthyper (complexrect z)
{
	complexrect one;
	one.x = 1.0;
	one.y = 0.0;
	
	return division(one,sinehyper(z));
}
complexpolar Polarcosecanthyper (complexpolar z)
{
	return 	RectToPolar(cosecanthyper(PolarToRect(z)));
}
complexrect secanthyper (complexrect z)
{
	complexrect one;
	one.x = 1.0;
	one.y = 0.0;
	
	return division(one,cosinehyper(z));
}
complexpolar Polarsecanthyper (complexpolar z)
{
	return 	RectToPolar(secanthyper(PolarToRect(z)));
}
complexrect cotangenthyper (complexrect z)
{
	complexrect one;
	one.x = 1.0;
	one.y = 0.0;
	
	return division(one,tangenthyper(z));
}
complexpolar Polarcotangenthyper (complexpolar z)
{
	return 	RectToPolar(cotangenthyper(PolarToRect(z)));
}

complexrect Solvesinehyper (complexrect z)
{
	complexrect half;
	half.x = 0.5;
	half.y = 0.0;
	
	complexrect one;
	one.x = 1.0;
	one.y = 0.0;
	
	complexrect two;
	two.x = 2.0;
	two.y = 0.0;
	
	complexrect square;
	
	square = exponentiation(z,two);
	
	complexrect w;
	
	w = exponentiation(sum(one,square),half);
	
	return NaturalLogarithm(sum(z,w));
}
complexpolar PolarSolvesinehyper (complexpolar z)
{
	return 	RectToPolar(Solvesinehyper(PolarToRect(z)));
}

complexrect Solvecosinehyper (complexrect z)
{
	complexrect half;
	half.x = 0.5;
	half.y = 0.0;
	
	complexrect one;
	one.x = 1.0;
	one.y = 0.0;
	
	complexrect two;
	two.x = 2.0;
	two.y = 0.0;
	
	complexrect square;
	
	square = exponentiation(z,two);
	
	complexrect w;
	
	w = exponentiation(difference(square,one),half);
	
	return NaturalLogarithm(sum(z,w));
}

complexpolar PolarSolvecosinehyper (complexpolar z)
{
	return 	RectToPolar(Solvecosinehyper(PolarToRect(z)));
}

complexrect Solvetangenthyper (complexrect z)
{
	complexrect half;
	half.x = 0.5;
	half.y = 0.0;
	
	complexrect one;
	one.x = 1.0;
	one.y = 0.0;
	
	return 	product(half,NaturalLogarithm(division(sum(one,z),difference(one,z))));

}

complexpolar PolarSolvetangenthyper (complexpolar z)
{
	return 	RectToPolar(Solvetangenthyper(PolarToRect(z)));
}

complexrect Solvecosecanthyper (complexrect z)
{
	complexrect one;
	one.x = 1.0;
	one.y = 0.0;
	
	return Solvesinehyper(division(one,z));
}
complexpolar PolarSolvecosecanthyper (complexpolar z)
{
	return 	RectToPolar(Solvecosecanthyper(PolarToRect(z)));
}
complexrect Solvesecanthyper (complexrect z)
{
	complexrect one;
	one.x = 1.0;
	one.y = 0.0;
	
	return Solvecosinehyper(division(one,z));
}
complexpolar PolarSolvesecanthyper (complexpolar z)
{
	return 	RectToPolar(Solvesecanthyper(PolarToRect(z)));
}
complexrect Solvecotangenthyper (complexrect z)
{
	complexrect one;
	one.x = 1.0;
	one.y = 0.0;
	
	return Solvetangenthyper(division(one,z));
}
complexpolar PolarSolvecotangenthyper (complexpolar z)
{
	return 	RectToPolar(Solvecotangenthyper(PolarToRect(z)));
}
