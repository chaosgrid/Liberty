#include "Server-PCH.h"

PROC_DECLARE(0x6cef4b0, internal_6cef4b0, public_6cef4b0);
extern "C" NAKED register_t __cdecl internal_6cef4b0()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6d8d748], ax
        mov byte ptr ds : [public_6d8d74a], al
        ret 
        UNREACHABLE_TRAP(0x6cef4b0)
    }
}
