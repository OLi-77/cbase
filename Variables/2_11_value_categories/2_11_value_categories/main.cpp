struct As {
  void f() {
    this;
    // The expression this is a prvalue expression.
    // Note, that the expression this is not
    // a variable.
  }
};


As f() {   return As(); }


int main() {
  f();
  // The expression f() belongs to the
  // prvalue category, because
  // it belongs neither to the lvalue nor
  // to the xvalue category.
}


