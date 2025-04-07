#include "Common-PCH.h"


#define public_6328ead _public_6328ead
#define public_6328ece _public_6328ece

PROC_DECLARE(0x6328e80, internal_6328e80, public_6328e80);
extern "C" NAKED register_t __cdecl internal_6328e80()
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
        jl public_6328ece
        cmp eax, dword ptr ss : [esp+4]
        jge public_6328ece
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_6328ead
        mov esi, dword ptr ds : [public_639914c]
        public_6328ead : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx]
        push eax
        lea eax, ss:[esp+0xC]
        push eax
        push esi
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], edx
        pop esi
        add esp, 0x14
        ret 0xC
        public_6328ece : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], 0
        pop esi
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x6328e80)
    }
}

#undef public_6328ead
#undef public_6328ece
