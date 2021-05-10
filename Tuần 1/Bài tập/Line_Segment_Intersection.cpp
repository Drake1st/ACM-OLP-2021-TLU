// DCCB 
#include <bits/stdc++.h>
#define x first
#define y second
#define mt make_tuple
using namespace std;
typedef pair <long,long> point;
typedef tuple <double,double,double> f;
 
f pt(point p1, point p2){
    if(p1.x==p2.x) return mt(1.0,0.0,-p1.x);
    double a = -double(p1.y-p2.y) / (p1.x - p2.x);
    return mt(a,1.0, -(double)(a*p1.x) - p1.y);
}
 
int check_line(f f1, point p){
    double a,b,c;
    tie(a,b,c) = f1;
    double total = a*p.x+b*p.y+c;
    // cout<<total<<endl;
    if(fabs(total-0.0)<1e-9) return 0;
    if(total==0) return 0;
    if(total<0) return -1;
    return 1;
}
 
int main()
{
    int t; cin>>t;
    while(t--){
        point p1,p2,p3,p4;
        cin>>p1.x>>p1.y>>p2.x>>p2.y>>p3.x>>p3.y>>p4.x>>p4.y;
        f pt1,pt2;
        pt1 = pt(p1,p2);
        pt2 = pt(p3,p4);
        // TH1: Ko cung duong
        int p1_w = check_line(pt2,p1);
        int p2_w = check_line(pt2,p2);
        int p3_w = check_line(pt1,p3);
        int p4_w = check_line(pt1,p4);
        // cout<<p1_w<<endl;
        // cout<<p2_w<<endl;
        // cout<<p3_w<<endl;
        // cout<<p4_w<<endl;
        if(p1_w || p2_w || p3_w || p4_w){
            if(((p1_w != p2_w) && (p3_w != p4_w))){
                cout<<"YES"<<endl;
                continue;
            }
            cout<<"NO"<<endl;
        }
        else{
            double p1_p3,p2_p3,p1_p4,p2_p4,line12,line34;
            p1_p3 = sqrt(pow(p1.x-p3.x,2)+pow(p1.y-p3.y,2));
            p2_p3 = sqrt(pow(p2.x-p3.x,2)+pow(p2.y-p3.y,2));
            p1_p4 = sqrt(pow(p1.x-p4.x,2)+pow(p1.y-p4.y,2));
            p2_p4 = sqrt(pow(p2.x-p4.x,2)+pow(p2.y-p4.y,2));
            line12 = sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
            line34 = sqrt(pow(p3.x-p4.x,2)+pow(p3.y-p4.y,2));
            if(p1_w==0){
                if(fabs(p1_p3+p1_p4-line34)<1e-9){ cout<<"YES\n"; continue;}
            }
            if(p2_w==0){
                if(fabs(p2_p3+p2_p4-line34)<1e-9){ cout<<"YES\n"; continue;}
            }
            if(p3_w==0){
                if(fabs(p1_p3+p2_p3-line12)<1e-9){ cout<<"YES\n"; continue;}
            }
            if(p4_w==0){
                if(fabs(p2_p4+p1_p4-line12)<1e-9){ cout<<"YES\n"; continue;}
            }
            cout<<"NO\n";
        }
    }
    return 0;  
}
