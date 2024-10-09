#include<iostream>
using namespace std;

//Base class Vehicle
class Vehicle {
  public:
  void vehicle(){
    cout<<"I am a vehicle"<<endl;
  }
};

//Derived class twoWheeler(inherits from vehicle)
class TwoWheeler : public Vehicle{
  public:
  void twoWheeler(){
    cout<<"I have two wheels"<<endl;
  }
};

//Derived class bike(inherits form twoWheeler)
class Bike : public TwoWheeler{
  public:
  void bike(){
    cout<<"I am a bike"<<endl;
  }
};

int main(){
  Bike mybike;
  
  //call methods of bike, twoWheeler and vehicle through bike object
  
  mybike.bike();          //bike's method
  mybike.twoWheeler();  //twoWheeler's method
  mybike.vehicle();      //vehicle's method;
  
  return 0;
  
}
  
  
  
  
  

  