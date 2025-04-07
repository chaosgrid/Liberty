#include "Alchemy-PCH.h"


#define public_6237e12 _public_6237e12

PROC_DECLARE(0x6237df0, internal_6237df0, public_6237df0);
extern "C" NAKED register_t __cdecl internal_6237df0()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x48767E8
        jne public_6237e12
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x70]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6237e12 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6237df0)
    }
}

#undef public_6237e12
