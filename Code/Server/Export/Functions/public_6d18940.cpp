#include "Server-PCH.h"

PROC_DECLARE(0x6d18940, internal_6d18940, public_6d18940);
extern "C" NAKED register_t __cdecl internal_6d18940()
{
    __asm
    {
        mov word ptr ds : [public_6d8f5ec], 0
        mov byte ptr ds : [public_6d8f5ee], 1
        ret 
        UNREACHABLE_TRAP(0x6d18940)
    }
}
