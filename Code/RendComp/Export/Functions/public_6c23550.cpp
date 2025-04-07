#include "RendComp-PCH.h"


#define public_6c23565 _public_6c23565
#define public_6c23575 _public_6c23575
#define public_6c23585 _public_6c23585

PROC_DECLARE(0x6c23550, internal_6c23550, public_6c23550);
extern "C" NAKED register_t __cdecl internal_6c23550()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x1E8]
        cmp eax, dword ptr ds : [ecx+0x14]
        jne public_6c23565
        or eax, 0xFFFFFFFF
        ret 0xC
        public_6c23565 : nop
        mov ecx, dword ptr ss : [esp+8]
        dec ecx
        je public_6c23585
        dec ecx
        je public_6c23575
        or eax, 0xFFFFFFFF
        ret 0xC
        public_6c23575 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0x28]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 0xC
        public_6c23585 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6c23550)
    }
}

#undef public_6c23565
#undef public_6c23575
#undef public_6c23585
