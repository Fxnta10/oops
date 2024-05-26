#include<iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;
class Matrix{
    private:
        int rows;
        int columns;
        int mat[MAX_ROWS][MAX_COLS];
        
    public:
        void getdata(int r,int c){
            for(int i=0;i<rows;i++){
                for (int j=0;j<columns;j++){
                    cin>>mat[i][j];
                }
            }
        }
        void display(){
            for(int i=0;i<rows;i++){
                for (int j=0;j<columns;j++){
                    cout<<mat[i][j];
                }
            }
        }
        void sum(Matrix m1,Matrix m2){
            if(m1.rows!=m2.rows || m1.columns!=m2.columns) {
                cout<<"error";
            }
            for(int i=0;i<rows;i++){
                for (int j=0;j<columns;j++){
                    mat[i][j]=m1.mat[i][j]+m2.mat[i][j];
                }
            
            }
            
        }
};

void main(){
    Matrix m1;
    Matrix m2;
    Matrix m3;
    m1.getdata(3,3);
    m2.getdata(3,3);
    m3.sum(m1,m2);
    m3.display();

}