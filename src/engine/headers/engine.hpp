struct Blah {
  int val;
};

class Moo {
  public:
    Blah b;
    virtual void setAValue();
    void incCounter();
    int getCounter();
  protected:
    int counter;
};

class Cow : public Moo {
  public:
    // void setAValue();
};

Blah* allocateBlah();