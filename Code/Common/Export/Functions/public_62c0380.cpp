#include "Common-PCH.h"


#define public_62c03b9 _public_62c03b9

PROC_DECLARE(0x62c0380, internal_62c0380, public_62c0380);
extern "C" NAKED register_t __cdecl internal_62c0380()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        mov eax, 0xFFFFFFFD
        je public_62c03b9
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_62c03b9
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        call dword ptr ds : [eax+0xE0]
        neg al
        sbb eax, eax
        and eax, 2
        add eax, 0xFFFFFFFE
        public_62c03b9 : nop
        ret 8
        UNREACHABLE_TRAP(0x62c0380)
    }
}

#undef public_62c03b9
