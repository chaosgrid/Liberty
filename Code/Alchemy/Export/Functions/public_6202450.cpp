#include "Alchemy-PCH.h"

PROC_DECLARE(0x6202450, internal_6202450, public_6202450);
extern "C" NAKED register_t __cdecl internal_6202450()
{
    __asm
    {
        mov al, byte ptr ss : [esp+8]
        mov byte ptr ds : [public_6257919], al
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6202450)
    }
}
