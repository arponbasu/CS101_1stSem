#include<simplecpp>
#define MAXSIZE 100
#define C_Width 1920
#define C_Height 765
#define Y_Offset 100
#define X_Offset 260
#define X_Origin (C_Width/2 -X_Offset)
#define Y_Origin (C_Height-Y_Offset)
#define X_Ax_Scale 20
#define textOffset 20

double yArray[MAXSIZE+1];
double xArray[MAXSIZE+1];
double f (double x)
{
    return exp(x);
}


void initialize()
{
double a = -5.0,b = 5.0;
double h = (b-a)/MAXSIZE;
for(int j = 0; j < MAXSIZE; ++j)
{
    xArray[j] = a + h*j;
    yArray[j] = f(a + h*j);
}
    xArray[MAXSIZE] = xArray[MAXSIZE-1];
    yArray[MAXSIZE] = yArray[MAXSIZE-1];


}
void plot()
{
for (int i = 0; i < MAXSIZE; i++)
{
Line l(X_Origin+X_Ax_Scale*xArray[i],(-1*yArray[i]+Y_Origin),
       X_Origin+X_Ax_Scale*xArray[i+1],(-1*yArray[i+1]+Y_Origin));
    l.setColor(COLOR("blue"),true);
    l.imprint();
}

}




int main()
{
initialize();

initCanvas("exponent",C_Width,C_Height);
Line xAxis(X_Origin-200,Y_Origin,X_Origin+200,Y_Origin);
Line yAxis(X_Origin,C_Height-(textOffset+2.5*(-1)*yArray[100]+Y_Origin),X_Origin,C_Height-textOffset);

Text z(X_Origin,Y_Origin+textOffset,"0");

Text pen(X_Origin-200,Y_Origin,"-X");
pen.setColor(COLOR("blue"),true);

Text nen(X_Origin+200,Y_Origin,"+X");
nen.setColor(COLOR("blue"),true);

Text five(X_Origin-100,Y_Origin+textOffset,"-5");
five.setColor(COLOR("blue"),true);

Text nfive(X_Origin+100,Y_Origin+textOffset,"5");
nfive.setColor(COLOR("blue"),true);


Text py(X_Origin-textOffset,textOffset+2*(-1)*yArray[100]+Y_Origin,"+Y");
Text expr(X_Origin-textOffset,(-1)*yArray[100]+Y_Origin,"exp[5]");


plot();

getClick();
return 0;
}

























