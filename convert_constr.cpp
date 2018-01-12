 #include <iostream>
  using namespace std;
  class IntClass
   {
        private:
              int value;
              public:   // Convert constructor from int.
                   IntClass(int intValue)
                   {
                         value = intValue;
                    }
                     int getValue()
                     {
                         return value;
                    }
                    IntClass f(int intValue)
                      {
                           return intValue;
                      }
                      void printValue(IntClass x)
                      {
                           cout << x.getValue();
                        }


    };
     int main()
     {
                  // Initialize with an int.
                   IntClass intObject = 23;
                   //cout << "The value is " << intObject.getValue() << endl;
                    // Assign an int.
                     intObject = 24;
                     //cout  << "The value is " << intObject.getValue()  << endl;
                      // Pass an int to a function expecting IntClass.
                      //cout << "The value is ";
                      //intObject.printValue(25);
                     // cout << endl;
                       // Demonstrate conversion on a return.
                        IntClass obj = intObject.f(234);
             cout << "The value from the converted function is  ";
             intObject.printValue(obj);
             return 0;
      }





















