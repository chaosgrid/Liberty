#include "Server-PCH.h"

PROC_DECLARE(0x6d44650, internal_6d44650, public_6d44650);
extern "C" NAKED register_t __cdecl internal_6d44650()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6d8fb00], ax
        mov byte ptr ds : [public_6d8fb02], al
        ret 
        UNREACHABLE_TRAP(0x6d44650)
    }
}
