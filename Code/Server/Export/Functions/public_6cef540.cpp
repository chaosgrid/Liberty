#include "Server-PCH.h"

PROC_DECLARE(0x6cef540, internal_6cef540, public_6cef540);
extern "C" NAKED register_t __cdecl internal_6cef540()
{
    __asm
    {
        mov word ptr ds : [public_6d8d734], 4
        mov byte ptr ds : [public_6d8d736], 1
        ret 
        UNREACHABLE_TRAP(0x6cef540)
    }
}
