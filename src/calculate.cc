// need to be C in order to use dlopen()
extern "C"
{
  int plus(int one, int two)
  {
    return one + two;
  }
}