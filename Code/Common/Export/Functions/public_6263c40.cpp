#include "Common-PCH.h"

PROC_DECLARE(0x6263c40, internal_6263c40, public_6263c40);
extern "C" NAKED register_t __cdecl internal_6263c40()
{
    __asm
    {
        xor eax, eax
        mov ax, word ptr ds : [ecx+2]
        mov ecx, dword ptr ss : [esp+4]
        cmp word ptr ds : [ecx+2], ax
        sbb eax, eax
        neg eax
        ret 4
        UNREACHABLE_TRAP(0x6263c40)
    }
}
