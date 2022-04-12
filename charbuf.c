#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#define BUFSZ 30
typedef struct CharBuf {
  char buf[BUFSZ];
  int used;
  struct CharBuf *next;
} CharBuf;
CharBuf *newCharBuf(char *cbf) {
  struct CharBuf *nwp = (struct CharBuf *)malloc(sizeof(struct CharBuf));
   nwp->next = (char *)malloc(sizeof(char) * (strlen(cbf) + 1));
   strcpy(nwp->next, cbf);
    nwp->next = NULL;
    return nwp;/* allocate, initialize, and return a new instance of CharBuf */
}
void delCharBuf(CharBuf *cbf) {
  free(cbf->next);
  free(cbf);/* free the passed CharBuf instance */
}
typedef struct CBMgr {
  struct CharBuf *head;
  struct CharBuf *tail;
} CBMgr;
CBMgr *newCBMgr(CBMgr *cbm) {
  struct CBMgr *ptrToTwoCharBuf = (struct CBMgr *)malloc(2*sizeof(struct CBMgr));
   ptrToTwoCharBuf->head = (char *)malloc(sizeof(char) * (strlen(cbm) + 1));
   ptrToTwoCharBuf->tail = (char *)malloc(sizeof(char) * (strlen(cbm) + 1));
   strcpy(ptrToTwoCharBuf->head, cbm);
   strcpy(ptrToTwoCharBuf->tail, cbm);
    ptrToTwoCharBuf->head = NULL;
    ptrToTwoCharBuf->tail = NULL;
    return ptrToTwoCharBuf;/* allocate, initialize, and return a new instance of CBMgr */
}
void delCBMgr(CBMgr *cbm) {
  free(cbm->tail);
  free(cbm-> head);
  free(cbm);/* free all the CharBuf instances managed by the passed CBMgr,
     then free the CBmgr instance */
}
void cbmAppend(CBMgr *cbm, CharBuf *cbf) {
  /* append the passed CharBuf instance to the chain of CharBuf's
     managed by the passed CBMgr. handle the pointers so that cbm->head 
     points to the beginning of the chain and cbm->tail points to the
     end of the chain, and each cbf->next points to the next
     CharBuf in the chain. make sure the tail cbf->next is always null. */
}
char *cbmtoString() {
  /* sequence through the chain of CharBuf's totalling the ->used member.
     allocate a character string of sufficient size, then go through the chain again
     appending the contents of each buffer into the allocated string to make a
     single string from of all the data in the buffers.  use strncpy() so that
     the correct number of characters will be copied from each buffer.  keep track of
     the current location in the string with &str[loc].  return the string. */
}
static void usage(char *argv[]) {
  fprintf(stderr, "usage: %s path\n", argv[0]);
  exit(1);
}
int main(int argc, char *argv[])
{
  int len, rtn;
  CharBuf *cbf;
  CBMgr *cbm;
  char *path, *data;
  FILE *handle;
  if (argc < 2)
    usage(argv);
  path = argv[1];
  /* open the file whose name was passed from the command line.
     don't forget to check for an open error (write the error message and return from main()) */
  /* allocate a CBMgr and the first CharBuf */
  /* in a while loop, read in a chunk of data the size of BUFSZ, the CharBuf buffer size,
     into the current CharBuf. set the ->used member to the length of the data read.
     use cbmAppend() to add the CharBuf to the list managed by the CBMgr, then allocate a
     new CharBuf instance for the next read. */
  /* when the loop finishes, handle the following conditions: */
  /* a read of fewer than BLKSZ bytes: update the ->used field and append the last CharBuf */
  /* an end-of-file with no additional data: free the last CharBuf */
  /* an error: print the error message and free the last CharBuf, return from main() */
  /* if no error occurs, close the file, remember to check for a close error (print a message and return) */
  /* call cbmtoString() to convert the CharBuf chain to a single string,
     and use a single printf() call to display the string */
  /* cleanup by freeing the string and the CBMgr (which should free all the CharBuf's) */
  return 0;
 }
