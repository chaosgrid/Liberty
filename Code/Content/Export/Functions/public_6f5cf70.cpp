#include "Content-PCH.h"

PROC_DECLARE(0x6f5cf70, internal_6f5cf70, public_6f5cf70);
extern "C" NAKED register_t __cdecl internal_6f5cf70()
{
    __asm
    {
        mov dword ptr ds : [public_6fd1b98], 0x459C4000
        ret 
        UNREACHABLE_TRAP(0x6f5cf70)
    }
}
