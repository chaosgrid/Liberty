#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b729c, internal_5b729c, public_5b729c);
extern "C" NAKED register_t __cdecl internal_5b729c()
{
    __asm
    {
        jmp dword ptr ds : [public_5c67c0]
        UNREACHABLE_TRAP(0x5b729c)
    }
}
