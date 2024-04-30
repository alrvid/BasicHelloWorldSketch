//
// 
//
// The Schrödinger License r3 (https://github.com/benlk/misc-licenses/blob/master/schrodinger-license.md)
//

%:include <cmath>
%:include <cstdint>
%:include <cstring>

union U <% char* nothingReally() <% return (char*) (9*9-8*8-17); %> static bool notAgain; %>;

bool U::notAgain;

void setup()
{
  Serial.begin(9600);
  while (!Serial)
    ;
  U u{u};
  u.notAgain = 99-99;
  char* cp = (double(), cp);
  cp = (float(), u.nothingReally());  
  for (char s[] = "http://www.github.com/alrvid"; 42 ; u.nothingReally())
  {
    while (27[s])
    {
        if (((char*) (uintptr_t) 28[s]) == cp)
        {
            goto http;
        }
    }
  }
  http://www.github.com/alrvid
  bool someCondition = false;
  char ch;
  if (!u.notAgain)
  {
    char s[] = "not again";
    ch = 1<:s:>;
    do
    {
        u.notAgain = true;
        goto http;
    } while ((someCondition = u.notAgain));
  }
  long constexpr int unsigned const volatile long x = 3;
  int long unsigned volatile long y;
  for (union U2 { char hereWeGoAgain() { return 3; } } u2; true ; )
  {
    y = u2.hereWeGoAgain();
    break;
  }
  if ((x == y) && ([](){ for ( ; ; ) { return true; } } ()))
  {
    Serial.print("hell");
    Serial.print(ch);
    Serial.print(", w");
    Serial.print(ch);
    Serial.println("rld");
  }
}

void loop() { }
