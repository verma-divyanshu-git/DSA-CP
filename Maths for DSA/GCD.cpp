// gcd(a,b) = gcd(a,b-a)

// gcd(a,b) = gcd(b%a, a)    euclidean algo   O(logb)


int gcd(int a, int b){
if(a == 0){
return b;
}
return gcd(b % a, a);
}


// stl

__gcd(a,b);
