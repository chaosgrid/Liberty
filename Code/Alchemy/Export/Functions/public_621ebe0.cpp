#include "Alchemy-PCH.h"


#define public_621ebf2 _public_621ebf2
#define public_621ebfe _public_621ebfe

PROC_DECLARE(0x621ebe0, internal_621ebe0, public_621ebe0);
extern "C" NAKED register_t __cdecl internal_621ebe0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ds : [eax+0x18]
        cmp eax, ecx
        je public_621ebfe
        mov edx, dword ptr ss : [esp+8]
        public_621ebf2 : nop
        cmp dword ptr ds : [eax+4], edx
        je public_621ebfe
        add eax, 0x10
        cmp eax, ecx
        jne public_621ebf2
        public_621ebfe : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0xC], edx
        mov edx, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x621ebe0)
    }
}

#undef public_621ebf2
#undef public_621ebfe
