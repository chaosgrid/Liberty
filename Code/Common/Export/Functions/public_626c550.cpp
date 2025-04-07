#include "Common-PCH.h"

PROC_DECLARE(0x626c550, internal_626c550, public_626c550);
extern "C" NAKED register_t __cdecl internal_626c550()
{
    __asm
    {
        xor eax, eax
        mov ax, word ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+4]
        cmp ax, word ptr ds : [ecx]
        sbb eax, eax
        neg eax
        ret 4
        UNREACHABLE_TRAP(0x626c550)
    }
}
