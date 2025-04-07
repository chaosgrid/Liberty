#include "Shading-PCH.h"


#define public_6eb4103 _public_6eb4103
#define public_6eb413b _public_6eb413b

PROC_DECLARE(0x6eb40f0, internal_6eb40f0, public_6eb40f0);
extern "C" NAKED register_t __cdecl internal_6eb40f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_6eb4103
        or eax, 0xFFFFFFFF
        pop esi
        ret 0xC
        public_6eb4103 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov edi, eax
        cmp dword ptr ds : [esi+8], 0xFFFFFFFF
        jne public_6eb413b
        test edi, edi
        jl public_6eb413b
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        movzx eax, byte ptr ss : [esp+0xC]
        shr eax, 1
        and eax, 1
        mov dword ptr ds : [esi+8], eax
        public_6eb413b : nop
        mov eax, edi
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6eb40f0)
    }
}

#undef public_6eb4103
#undef public_6eb413b
