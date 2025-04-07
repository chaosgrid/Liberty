#include "Alchemy-PCH.h"


#define public_621fa52 _public_621fa52
#define public_621fa5e _public_621fa5e
#define public_621fa68 _public_621fa68

PROC_DECLARE(0x621fa40, internal_621fa40, public_621fa40);
extern "C" NAKED register_t __cdecl internal_621fa40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, ecx
        je public_621fa5e
        mov edx, dword ptr ss : [esp+8]
        public_621fa52 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_621fa5e
        add eax, 0x10
        cmp eax, ecx
        jne public_621fa52
        public_621fa5e : nop
        cmp eax, ecx
        jne public_621fa68
        or eax, 0xFFFFFFFF
        ret 0xC
        public_621fa68 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x621fa40)
    }
}

#undef public_621fa52
#undef public_621fa5e
#undef public_621fa68
