// DCCB
#include <bits/stdc++.h>

using namespace std;
typedef vector<vector<int>> vvi;
typedef vector<int> vi;

int N;
vvi A, B, C, D;
vvi E, F, G, H;     
vvi z11, z12, z21, z22;
vvi P1, P2, P3, P4, P5, P6, P7;
vvi xx, yy;
void resize_v(vvi &arr,int x,int y){
    arr.resize(x,vi (y));
}
  
void multi_normal(vvi x, vvi y, vvi &z) { 
     for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            z[i][j] = 0;      
           for(int k=0; k<2; k++) {
              z[i][j] += (x[i][k]*y[k][j]);        
           }  
        }        
     }
}

void matrix_add(int n, vvi x, vvi y, vvi &z) {
     for(int i=0; i<n; i++) 
        for(int j=0; j<n; j++) 
           z[i][j] = x[i][j] + y[i][j];        
}

void matrix_sub(int n, vvi x, vvi y, vvi &z) {
     for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) 
           z[i][j] = x[i][j] - y[i][j];        
}

void Strassen(int n, vvi x, vvi y, vvi &z) {
     if(n == 2) multi_normal(x, y, z);     
     else {
        for(int i=0; i<n/2; i++) {
           for(int j=0; j<n/2; j++) {
              A[i][j] = x[i][j];
              B[i][j] = x[i][j+n/2];
              C[i][j] = x[i+n/2][j];
              D[i][j] = x[i+n/2][j+n/2];
              
              E[i][j] = y[i][j];
              F[i][j] = y[i][j+n/2];
              G[i][j] = y[i+n/2][j];
              H[i][j] = y[i+n/2][j+n/2];    
           }        
        }  
        
        matrix_add(n/2, A, D, xx);
        matrix_add(n/2, E, H, yy);
        Strassen(n/2, xx, yy, P5);
        // cout<<n<<endl;
        matrix_add(n/2, C, D, xx);
        Strassen(n/2, xx, E, P3);
        
        
        matrix_sub(n/2, G, E, xx);
        Strassen(n/2, D, xx, P4);
        

        matrix_sub(n/2, F, H, yy);
        Strassen(n/2, A, yy, P1);
        

        matrix_add(n/2, A, B, xx);
        Strassen(n/2, xx, H, P2);
        
        
        matrix_sub(n/2, B, D, xx);
        matrix_add(n/2, G, H, yy);
        Strassen(n/2, xx, yy, P6);
        

        matrix_sub(n/2, A, C, xx);
        matrix_add(n/2, E, F, yy);
        Strassen(n/2, xx, yy, P7);
        

        matrix_add(n/2, P5, P4, xx);
        matrix_sub(n/2, P6, P2, yy);
        matrix_add(n/2, xx, yy, z11);
        
 
        matrix_add(n/2, P1, P2, z12);
        

        matrix_add(n/2, P3, P4, z21);
        

        matrix_add(n/2, P1, P5, xx);
        matrix_add(n/2, P3, P7, yy);
        matrix_sub(n/2, xx, yy, z22);
        
        for(int i=0; i<n/2; i++) {
           for(int j=0; j<n/2; j++) {
              z[i][j] = z11[i][j];
              z[i][j+n/2] = z12[i][j];
              z[i+n/2][j] = z21[i][j];
              z[i+n/2][j+n/2] = z22[i][j];        
           }        
        }
     }
}
int main() {
    cin>>N;
    vvi x,y,z;
    x.resize(N,vi (N));
    y.resize(N,vi (N));
    z.resize(N,vi (N,0));
    resize_v(A,N,N);
    resize_v(B,N,N);
    resize_v(C,N,N);
    resize_v(D,N,N);
     
    resize_v(E,N,N);
    resize_v(F,N,N);
    resize_v(G,N,N);
    resize_v(H,N,N);
     
    resize_v(z11,N,N);
    resize_v(z12,N,N);
    resize_v(z21,N,N);
    resize_v(z22,N,N);

    resize_v(P1,N,N);
    resize_v(P2,N,N);
    resize_v(P3,N,N);
    resize_v(P4,N,N);     
    resize_v(P5,N,N);
    resize_v(P6,N,N);
    resize_v(P7,N,N);
     
    resize_v(xx,N,N);
    resize_v(yy,N,N); 

    for(auto &item:x)
        for(auto &element:item)
            cin>>element;
    for(auto &item:y)
        for(auto &element:item)
            cin>>element;
    // multi_matrix_normal(x,y,z);
    Strassen(N, x, y, z);
    for(auto &item:z){
        for(auto &element:item)
            cout<<element<<" ";
        cout<<endl;
    }
    
    return 0;
}


