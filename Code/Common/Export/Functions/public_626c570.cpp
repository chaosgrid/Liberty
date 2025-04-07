#include "Common-PCH.h"

PROC_DECLARE(0x626c570, internal_626c570, public_626c570);
extern "C" NAKED register_t __cdecl internal_626c570()
{
    __asm
    {
        xor eax, eax
        mov ax, word ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+4]
        cmp word ptr ds : [ecx], ax
        sbb eax, eax
        neg eax
        ret 4
        UNREACHABLE_TRAP(0x626c570)
    }
}
