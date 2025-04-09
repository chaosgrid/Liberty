#include "FreeLancer-PCH.h"


#define public_429bb4 _public_429bb4

PROC_DECLARE(0x429b80, internal_429b80, public_429b80);
extern "C" NAKED register_t __cdecl internal_429b80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_429bb4
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x34]
        test al, al
        je public_429bb4
        fld dword ptr ds : [esi+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_429bb4
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        pop esi
        ret 8
        public_429bb4 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], 0
        mov eax, 0xFFFFFFF9
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x429b80)
    }
}

#undef public_429bb4
