#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define prec(n) fixed<<setprecision(n)
using namespace std;
typedef long long ll;
typedef unsigned long long int ull ;
 
const int MOD=1e9+7;
const char nl = '\n';
const double EPS =1e-9;
const double pi = M_PI ;


double DEG_to_RAD(double d) { return d * pi / 180.0; }
double RAD_to_DEG(double r) { return r * 180.0 / pi; }

// Point 
class point {
    public :
    double x, y ;
    point() {x =  y = 0.0 ;} 
    point( double x, double y) : x(x), y(y) {} 
    bool operator < (point other) {
        if (fabs(x - other.x) > EPS) 
            return x < other.x; 
        return y < other.y;
    }
    bool operator == ( point p2) const {
        return (fabs(x - p2.x) < EPS && (fabs(y - p2.y) < EPS));  
    }
    point operator + (const point& a) const { return point(x+a.x, y+a.y); }
    point operator - (const point& a) const { return point(x-a.x, y-a.y); }
    point operator * (double k) const { return point(x*k, y*k); }
    point operator / (double k) const { return point(x/k, y/k); }
    double operator * (const point& a) const { return x*a.x + y*a.y; } // dot product

    point rotate ( double alpha) {
        // xoay diem theo 1 goc alpha bat ky 
        double rad = DEG_to_RAD(alpha); // multiply theta with PI / 180.0
        return point(x * cos(rad) - y * sin(rad),
                    x * sin(rad) + y * cos(rad));   
    }

    friend istream &operator>>(istream &is, point &p) ;
};

istream &operator>>(istream &is, point &p){
    is >> p.x >> p.y ;
    return is ;
}


double hypot( double _x , double _y) {
    return sqrt(_x*_x + _y*_y) ; 
    // return  sqrt (x^2 + y^2)
}
double dist(point p1, point p2) { 
    return hypot(p1.x - p2.x, p1.y - p2.y); 
}

int ccw( point p,point p1 , point p2 ){
    // cho biet di tu p-> p1-> p2 la re trai hay phai 
    // return -1 re phai ( k < 0) ;
    // return 1 re trai ( k > 0) ;
    // return 0 di thang ;
    return (p1.x-p.x)* (p2.x-p.y) - (p2.x-p.x)* (p1.y-p.y);
}

// Line ax+by+c = 0 
class line {
    public:
        double a,b,c ;
        point p1, p2 ;
        line(){ a=b=c = 0.0;}
        line(double a, double b, double c) : a(a), b(b), c(c) {} 

        line pointsToLine(point p1, point p2 ) {
            if (fabs(p1.x - p2.x) < EPS)  
                return line(1.0 ,0.0, -p1.x);
            else  {
                double a = -(double)(p1.y - p2.y) / (p1.x - p2.x);
                return line(   a , 1.0 ,  -(double)(a * p1.x) - p1.y  ) ;
            }
        }
        
        double calwithpoint (point p1) {
            // thay toa diem p1 vao pt duong thang 
            return p1.x * a+ p1.y*b+c ;
        }


};

bool areParallel(line l1, line l2) { 
    // song song 
    return (fabs(l1.a-l2.a) < EPS) && (fabs(l1.b-l2.b) < EPS); 
}
bool areSame(line l1, line l2) {
    // Check trung nhau 
    return areParallel(l1 ,l2) && (fabs(l1.c - l2.c) < EPS);
}

bool areIntersect(line l1, line l2, point *p) {
    if (areSame(l1 , l2)) return false; 
    if (areParallel(l1, l2)) return false; 

    p->x = (double)(l2.b * l1.c - l1.b * l2.c ) /  (l2.a * l1.b - l1.a * l2.b);
    if (fabs(l1.b) > EPS) 
        p->y = - (l1.a * p->x + l1.c) / l1.b; 
    else 
        p->y = - (l2.a * p->x + l2.c) / l2.b;
    return true; 
}

double angel( line l1 , line l2) {
    //  in radian
    return acos( fabs(l1.a * l2.a + l1.b*l2.b ) / ( hypot(l1.a, l1.b) * hypot(l2.a,l2.b) ) ) ;
}

double distToLine(point p , line l) {
    
    return ( fabs(l.calwithpoint(p)) / hypot(l.a,l.b) ) ;
}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    point p1 ,p2 ;
    cin >> p1 >> p2 ;
    cout << dist(p1,p2 ) ;
    
    return 0;
}
