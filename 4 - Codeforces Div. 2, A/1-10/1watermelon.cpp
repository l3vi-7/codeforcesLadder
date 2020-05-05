    #include<bits/stdc++.h>
    using namespace std;
     
    void fastscan(int &number) 
    { 
        bool negative = false; 
        register int c; 
      
        number = 0; 
      
        c = getchar(); 
        if (c=='-') 
        { 
            negative = true; 
      
            c = getchar(); 
        } 
      
     
        for (; (c>47 && c<58); c=getchar()) 
            number = number *10 + c - 48; 
     
        if (negative) 
            number *= -1; 
    } 
     
     
    int main() 
    { 
     
        int n; 
        fastscan(n); 
     
        if (n > 2 && n % 2 == 0) 
            cout << "YES\n";
        else
            cout << "NO\n";
     
        return 0; 
    } 