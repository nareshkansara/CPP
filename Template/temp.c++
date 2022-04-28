#include<iostream>
using namespace std;

template <class T>
class vector {
    public :
        T *arr;
        int size ;
        vector(int m ){
            size = m ;
            arr = new T[size];

        }
        T dotProduct (vector &v){
            T d=0 ;
            for ( int i = 0; i < size; i++)

            {
                d += this->arr[i]* v.arr[i];
            }
            return d;

        }
};


int main(){
    vector<float> v1(3);
    v1.arr[0] = 1.3;
    v1.arr[1] = 1.23;
    v1.arr[2] = 2.3;


 vector<float> v2(3);
    v1.arr[0] = 0.3;
    v1.arr[1] = 2.23;
    v1.arr[2] = 3.3;

    float a = v1.dotProduct(v2);
    cout<<a<<endl;


    return 0;
}