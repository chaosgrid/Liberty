#include "Server-PCH.h"

PROC_DECLARE(0x6cef500, internal_6cef500, public_6cef500);
extern "C" NAKED register_t __cdecl internal_6cef500()
{
    __asm
    {
        mov word ptr ds : [public_6d8d73c], 2
        mov byte ptr ds : [public_6d8d73e], 1
        ret 
        UNREACHABLE_TRAP(0x6cef500)
    }
}
