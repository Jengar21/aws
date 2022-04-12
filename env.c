#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[], char *env[])
{
  const char *ssh = "SSH_CLIENT";
  int ix, ln;
  ln = strlen(ssh);
  ix = 0;
  while (0 != env[ix] && ix < 100)
  {
    if (0 == strncmp(ssh, env[ix], ln))
      break;
    ++ix;
  }
  if (ix < 100 && 0 != env[ix])
    printf("Hello ssh:%s!\n", env[ix]);
  else
    printf("missing %s or large environment!\n", ssh);
  return 0;
}
