#include "Common-PCH.h"


#define public_62bfdab _public_62bfdab

PROC_DECLARE(0x62bfd80, internal_62bfd80, public_62bfd80);
extern "C" NAKED register_t __cdecl internal_62bfd80()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        mov eax, 0xFFFFFFFD
        je public_62bfdab
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        jne public_62bfdab
        mov eax, dword ptr ds : [ecx+0x164]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        public_62bfdab : nop
        ret 4
        UNREACHABLE_TRAP(0x62bfd80)
    }
}

#undef public_62bfdab
