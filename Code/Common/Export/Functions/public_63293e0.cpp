#include "Common-PCH.h"


#define public_6329424 _public_6329424

PROC_DECLARE(0x63293e0, internal_63293e0, public_63293e0);
extern "C" NAKED register_t __cdecl internal_63293e0()
{
    __asm
    {
        sub esp, 0x14
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        jl public_6329424
        cmp eax, dword ptr ss : [esp+4]
        jge public_6329424
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx]
        push eax
        lea eax, ss:[esp+0xC]
        push eax
        mov eax, dword ptr ds : [esi+4]
        push eax
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], edx
        pop esi
        add esp, 0x14
        ret 0xC
        public_6329424 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], 0
        pop esi
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x63293e0)
    }
}

#undef public_6329424
