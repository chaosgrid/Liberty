#include "Server-PCH.h"


#define public_6d5eb45 _public_6d5eb45

PROC_DECLARE(0x6d5eab0, internal_6d5eab0, public_6d5eab0);
extern "C" NAKED register_t __cdecl internal_6d5eab0()
{
    __asm
    {
        sub esp, 0x208
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x218]
        mov ecx, edi
        mov ebx, 0xFFFFFFFE
        call dword ptr ds : [public_6d6490c]
        mov eax, dword ptr ss : [esp+0x21C]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [public_6d643dc]
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6d5eb45
        mov edx, dword ptr ds : [public_6d64a58]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0x104
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x11C]
        push 0
        push edx
        call dword ptr ds : [public_6d64bc0]
        add esp, 0x14
        push 0
        lea eax, ss:[esp+0x114]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d644e8]
        test al, al
        je public_6d5eb45
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x208
        ret 
        public_6d5eb45 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0x208
        ret 
        UNREACHABLE_TRAP(0x6d5eab0)
    }
}

#undef public_6d5eb45
