#include "Server-PCH.h"

PROC_DECLARE(0x6d446c0, internal_6d446c0, public_6d446c0);
extern "C" NAKED register_t __cdecl internal_6d446c0()
{
    __asm
    {
        mov word ptr ds : [public_6d8faf0], 3
        mov byte ptr ds : [public_6d8faf2], 1
        ret 
        UNREACHABLE_TRAP(0x6d446c0)
    }
}
