#include "Server-PCH.h"

PROC_DECLARE(0x6d5b190, internal_6d5b190, public_6d5b190);
extern "C" NAKED register_t __cdecl internal_6d5b190()
{
    __asm
    {
        mov word ptr ds : [public_6d9042c], 3
        mov byte ptr ds : [public_6d9042e], 1
        ret 
        UNREACHABLE_TRAP(0x6d5b190)
    }
}
