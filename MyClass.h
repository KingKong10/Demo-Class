//Class header
#ifndef MyClass_H
#define MyClass_H


class MyClass
{
  private: int num;
	   string room;
           bool fun;

  public: 

          MyClass();
          ~MyClass();
          
          
 	  void setNum (int);
          int getNum ();

          void setRoom (string);
  	  string getRoom ();

          void setFun (bool);
	  bool getFun ();

};
