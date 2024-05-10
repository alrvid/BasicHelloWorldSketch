//
// https://github.com/alrvid/BasicHelloWorldSketch
//
// The Schrödinger License r3 (https://github.com/benlk/misc-licenses/blob/master/schrodinger-license.md)
//

// This is the commented version, where I accept comments from anyone who is interested in documenting
// how the sketch works. Just make a PR!

// %: is the digraph for #
%:include <cmath>
%:include <cstdint>
%:include <cstring>

// U is a Union datatype in C++ that points at the same memory location for all its members.
// nothingReally() returns a pointer to the char at memory location (9*9-8*8-17=0).
// notAgain is a static boolean that is not initialized
// Digraphs: <: :> -> [ ] and <% %> -> { }
union U <% char* nothingReally() <% return (char*) (9*9-8*8-17); %> static bool notAgain; %>;

// static member of U, needs to be declared outside of the class
bool U::notAgain;

void setup()
{
  Serial.begin(9600);
  while (!Serial)
    ;
  U u{u}; // create an instance of U, using U itself to initialise it
  u.notAgain = 99-99; // set notAgain to false
  // cp is used to define itself as a pointer to a double
  // However, the double datatype is overridden by the char* pointer
  char* cp = (double(), cp);
  // cp is now a pointer to the value of nothingReally()
  // this is the same memory location as notAgain 
  cp = (float(), u.nothingReally());
  // This for loop transforms the compiler-breaking URL into a goto statement  
  for (char s[] = "http://www.github.com/alrvid"; 42 ; u.nothingReally())
  {
    while (27[s]) // in C++, s[27] is equivalent to 27[s]
    {
        if (((char*) (uintptr_t) 28[s]) == cp)
        {
            goto http; // jump to the URL
        }
    }
  }
  http://www.github.com/alrvid
  bool someCondition = false;
  char ch;
  if (!u.notAgain) 
  {
    char s[] = "not again";
    ch = 1<:s:>;  // first index of s is letter "o"
    do
    {
        u.notAgain = true; // set notAgain to true
        goto http; // jump to the URL, but doesn't enter if statement second time
    } while ((someCondition = u.notAgain)); // while loop is never entered
  }
  long constexpr int unsigned const volatile long x = 3; // x is set to 3
  int long unsigned volatile long y; // y is not initialized
  for (union U2 { char hereWeGoAgain() { return 3; } } u2; true ; ) // hereWeGoAgain() in union U2 returns 3
  {
    y = u2.hereWeGoAgain(); // y is set to 3
    break; // leave the for loop, otherwise would be infinite
  }
  // x and y are both 3, so the if statement is entered
  // lambda function potentially infinite, but return true breaks it
  if ((x == y) && ([](){ for ( ; ; ) { return true; } } ()))
  {
    Serial.print("hell");
    Serial.print(ch); // prints "o"
    Serial.print(", w");
    Serial.print(ch); // prints "o"
    Serial.println("rld");
  }
}

void loop() { }
