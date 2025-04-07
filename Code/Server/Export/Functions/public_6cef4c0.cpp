#include "Server-PCH.h"

PROC_DECLARE(0x6cef4c0, internal_6cef4c0, public_6cef4c0);
extern "C" NAKED register_t __cdecl internal_6cef4c0()
{
    __asm
    {
        mov word ptr ds : [public_6d8d744], 0
        mov byte ptr ds : [public_6d8d746], 1
        ret 
        UNREACHABLE_TRAP(0x6cef4c0)
    }
}
