/*A specific syntax is required in case you define your member functions outside of your class - 
for example in a separate source file.
You need to specify the generic type in angle brackets after the class name.
For example, to have a member function bigger() defined outside of the class, the following syntax is used:*/
template <class T>
class Pair {
 private:
  T first, second;
 public:
  Pair (T a, T b):
   first(a), second(b){
  }
  T bigger();
};

template <class T>
T Pair<T>::bigger() {
  // some code
}