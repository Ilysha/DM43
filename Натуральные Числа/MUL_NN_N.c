
NATURAL MUL_NN_N(NATURAL E,NATURAL B)
{
  int i;
  for(i=0;i<B.n;i++)
    {
      E=MUL_ND_N(E,B.A[i]);
      E=MUL_Nk_N(E,i);
    } 
  return(E);
}    
