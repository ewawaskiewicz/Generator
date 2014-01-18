int tablica[10];
int *wsk = tablica;
int* generator(void)
{
  for(int i=0; i<10; ++i)
  {
     tablica[i]=i;
  }
  return wsk;
}
