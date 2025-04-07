#include "Server-PCH.h"

PROC_DECLARE(0x6d189c0, internal_6d189c0, public_6d189c0);
extern "C" NAKED register_t __cdecl internal_6d189c0()
{
    __asm
    {
        mov word ptr ds : [public_6d8f5dc], 4
        mov byte ptr ds : [public_6d8f5de], 1
        ret 
        UNREACHABLE_TRAP(0x6d189c0)
    }
}
