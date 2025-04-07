#include "Server-PCH.h"

PROC_DECLARE(0x6d06b80, internal_6d06b80, public_6d06b80);
extern "C" NAKED register_t __cdecl internal_6d06b80()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6d8d9e4], ax
        mov byte ptr ds : [public_6d8d9e6], al
        ret 
        UNREACHABLE_TRAP(0x6d06b80)
    }
}
