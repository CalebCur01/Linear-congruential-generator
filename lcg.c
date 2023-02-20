#include <time.h>

  void lcr(int t){ //multiplier,seed,increment,modulus
     int multiplier = 1357423;
     int seed = time(NULL);
     int increment = 12345;
     long long int modulus = 4294967296; // 2^32
     int val = seed;
     int next_val = 0;

     printf("%d\n",seed);

     for(int i = 0;i<t;i++){
        next_val = ((multiplier * val) + increment) % modulus;
        printf("%d\n",next_val);
        val = next_val;
}

}

int main(){
    lcr(10);
}


