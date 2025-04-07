#include "Alchemy-PCH.h"


#define public_6232692 _public_6232692

PROC_DECLARE(0x6232670, internal_6232670, public_6232670);
extern "C" NAKED register_t __cdecl internal_6232670()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xF52B8DD5
        jne public_6232692
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x7C]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6232692 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6232670)
    }
}

#undef public_6232692
