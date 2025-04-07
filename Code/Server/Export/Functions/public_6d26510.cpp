#include "Server-PCH.h"

PROC_DECLARE(0x6d26510, internal_6d26510, public_6d26510);
extern "C" NAKED register_t __cdecl internal_6d26510()
{
    __asm
    {
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6d26510)
    }
}
