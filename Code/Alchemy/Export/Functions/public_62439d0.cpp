#include "Alchemy-PCH.h"

PROC_DECLARE(0x62439d0, internal_62439d0, public_62439d0);
extern "C" NAKED register_t __cdecl internal_62439d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        xor eax, eax
        cmp dword ptr ds : [ecx+8], 0x1FF
        sete al
        ret 4
        UNREACHABLE_TRAP(0x62439d0)
    }
}
