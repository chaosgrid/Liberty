#include "Common-PCH.h"


#define public_62bfd7b _public_62bfd7b

PROC_DECLARE(0x62bfd50, internal_62bfd50, public_62bfd50);
extern "C" NAKED register_t __cdecl internal_62bfd50()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        mov eax, 0xFFFFFFFD
        je public_62bfd7b
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        jne public_62bfd7b
        mov eax, dword ptr ds : [ecx+0x160]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        public_62bfd7b : nop
        ret 4
        UNREACHABLE_TRAP(0x62bfd50)
    }
}

#undef public_62bfd7b
