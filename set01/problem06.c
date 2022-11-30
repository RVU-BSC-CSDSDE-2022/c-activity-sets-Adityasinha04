comp_func(int *a,int *b,int *c)
{
  int temp;
  if((*a>*b)&(*a>*c))
  {
    temp=*a;
  }
  else if((*b>*a)&(*b>*c))
  {
    temp=*b;
  }
  else
  {
    temp=*c;
  }

return temp;
}


