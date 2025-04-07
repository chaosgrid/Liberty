#include "Server-PCH.h"


#define public_6d5e2d3 _public_6d5e2d3

PROC_DECLARE(0x6d5e270, internal_6d5e270, public_6d5e270);
extern "C" NAKED register_t __cdecl internal_6d5e270()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        call dword ptr ds : [public_6d643c0]
        mov eax, dword ptr ds : [eax+0xC]
        push 0
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        call dword ptr ds : [public_6d649e4]
        add esp, 0x10
        test al, al
        je public_6d5e2d3
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        push esi
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        push edx
        call dword ptr ds : [public_6d643bc]
        mov edx, dword ptr ss : [esp+0x1C]
        add esp, 0x10
        neg al
        push edx
        sbb eax, eax
        and eax, 3
        add eax, 0xFFFFFFFD
        mov esi, eax
        mov eax, dword ptr ds : [public_6d64a5c]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov eax, esi
        pop esi
        ret 
        public_6d5e2d3 : nop
        mov eax, 0xFFFFFFFE
        ret 
        UNREACHABLE_TRAP(0x6d5e270)
    }
}

#undef public_6d5e2d3
