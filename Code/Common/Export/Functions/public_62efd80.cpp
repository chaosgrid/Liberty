#include "Common-PCH.h"


#define public_62efdb4 _public_62efdb4
#define public_62efe33 _public_62efe33

PROC_DECLARE(0x62efd80, internal_62efd80, public_62efd80);
extern "C" NAKED register_t __cdecl internal_62efd80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax]
        sub esp, 0x108
        test eax, eax
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x114]
        push edi
        je public_62efdb4
        mov edi, dword ptr ss : [esp+0x120]
        test edi, edi
        je public_62efdb4
        cmp dword ptr ds : [edi], 0xFFFFFFFF
        jne public_62efdb4
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edi], eax
        public_62efdb4 : nop
        mov edi, dword ptr ss : [esp+0x11C]
        test edi, edi
        je public_62efe33
        mov edx, dword ptr ds : [esi]
        push 0x100
        lea eax, ss:[esp+0x18]
        push eax
        push esi
        call dword ptr ds : [edx+0x84]
        mov ebx, dword ptr ds : [public_6399024]
        lea edx, ss:[esp+0x14]
        lea ecx, ss:[esp+0x14]
        push edx
        mov dword ptr ss : [esp+0x10], ecx
        call ebx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x44]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [edi], eax
        jne public_62efe33
        lea ecx, ss:[esp+0x14]
        lea eax, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x10], eax
        call ebx
        mov edx, dword ptr ds : [public_6399040]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        mov dword ptr ds : [edi], eax
        public_62efe33 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x108
        ret 
        UNREACHABLE_TRAP(0x62efd80)
    }
}

#undef public_62efdb4
#undef public_62efe33
