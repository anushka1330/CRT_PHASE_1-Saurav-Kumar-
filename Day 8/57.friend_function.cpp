#include<iostream>
using namespace std;
class Area{
    private:
    int length;
    int width;
    
    public:
    void setSides(int l , int w)
    {
        this->length = l;
        this->width = w;
    }
    friend void showArea(Area a);

};
void showArea(Area b){
    int area = b.length * b.width;
    cout<<"Area: "<<area<<endl;
}


int main(){
    Area a;
    a.setSides(5, 10);
    showArea(a);
    return 0;

}