// Operator overloading
// basics of overloading
// returning const values
// unary operators
// member vs friend

#include <iostream>

// generic class integer
class integer{
public:
  // default constructor
  integer()
  {
    //val = 0;   by default integers don't have values
    this->val = 0;
  }

  integer(int value)
  {
    this->val = value;
  }

  // obtain the value
  int value()
  {
    return this-> val;
  }

  int value() const
  {
    return this->val;
  }

  void set_value(int value)
  {
    this->val = value;
  }

  friend const integer operator-(const integer&, const integer&);

private:
  int val;
};

// const overloading   prevents calling something this actually being returned
//    ret type        operator        reference param     reference param
const integer operator-(const integer &LHS, const integer &RHS)
{
  return integer(LHS.val - RHS.val);
}


const integer operator+(const integer &LHS, const integer &RHS)
{
  return integer(LHS.value() + RHS.value());
}

int main(int argc, char **argv)
{
  integer a;
  integer b(7);

  integer c = a + b;

  std::cout << a.value() << " " << b.value() << std::endl;
  std::cout << "c = " << c.value();
  std::cout << "c - a = " << (c -a).value() << std::endl;
  return 0;
}
