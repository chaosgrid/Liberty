#include "Server-PCH.h"

PROC_DECLARE(0x6cf33f0, internal_6cf33f0, public_6cf33f0);
extern "C" NAKED register_t __cdecl internal_6cf33f0()
{
    __asm
    {
        fld dword ptr ds : [public_6d65520]
        ret 
        UNREACHABLE_TRAP(0x6cf33f0)
    }
}
