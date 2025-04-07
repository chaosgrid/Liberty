#include "Movie-PCH.h"

PROC_DECLARE(0x6ad75a8, internal_6ad75a8, public_6ad75a8);
extern "C" NAKED register_t __cdecl internal_6ad75a8()
{
    __asm
    {
        fptan 
        ret 
        UNREACHABLE_TRAP(0x6ad75a8)
    }
}
