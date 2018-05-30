// Copyright (c) 2014-2017 Coin Sciences Ltd
// Mercante code distributed under the GPLv3 license, see COPYING file.

#include "mercante/mercante.h"

void* custom_get_blockchain_default(const char *param,int* size,void *param_in)
{
    *size=0;
    
    return NULL;
}

