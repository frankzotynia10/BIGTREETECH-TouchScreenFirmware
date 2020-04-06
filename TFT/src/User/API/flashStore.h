#ifndef _FLASHSTORE_H_
#define _FLASHSTORE_H_

#include "stdbool.h"
#include "variants.h"
#include "Settings.h"
#include "includes.h"

#define PARA_SIZE 512  //bytes
extern bool wasRestored;

bool readStoredPara(void);
void storePara(void);

#endif
