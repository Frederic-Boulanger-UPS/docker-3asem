// Lemmes nécessaires pour l'arithmétique non linéaire
//@ lemma distr_right: forall x, y, z. x*(y+z) == (x*y)+(x*z) ;
//@ lemma distr_left: forall x, y, z. (x+y)*z == (x*z)+(y*z) ;

// Définition du carré (fonction sqr)
//@ function int sqr(int x) = x * x ;

int isqrt(int x) {
  // Le résultat doit être la partie entière de la racine carrée de x
  //@ requires x >= 0 ;
  //@ ensures  sqr(result) <= x && x < sqr(result + 1) ;
  int count = 0;
  int sum = 1;
  while (sum <= x) { 
  	//@ invariant x >= sqr(count) && sum == sqr(count + 1) ;
  	//@ variant   x - count ;
    count++;
    sum = sum + 2*count+1;
  }
  // On a: sqr(count) <= x && sum == sqr(count + 1) && sum > x
  // On veut: sqr(count) <= x && x < sqr(count + 1)
  return count;
}   
