#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39e30);
CLANG_FORWARD_PROC_SYMBOL(public_6b69d0e);
CLANG_FORWARD_PROC_SYMBOL(public_6b69d14);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a250);

#define public_6b396a9 _public_6b396a9
#define public_6b396e7 _public_6b396e7
#define public_6b39726 _public_6b39726
#define public_6b39730 _public_6b39730

PROC_DECLARE(0x6b39650, internal_6b39650, public_6b39650);
extern "C" NAKED register_t __cdecl internal_6b39650()
{
    __asm
    {
        mov eax, 0x280C
        call public_6b6a250
        lea eax, ss:[esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0x2818]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ss : [esp+0x2814]
        test eax, eax
        push esi
        push edi
        jbe public_6b39730
        cmp eax, 0x80
        ja public_6b39730
        mov edi, dword ptr ds : [ecx+eax*4+0xC]
        test edi, edi
        je public_6b39730
        test ebx, ebx
        jne public_6b396a9
        mov ecx, edi
        call public_6b69d0e
        pop edi
        pop esi
        pop ebx
        add esp, 0x280C
        ret 8
        public_6b396a9 : nop
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0xC]
        push eax
        push 0x2800
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx+4]
        test eax, eax
        jne public_6b396e7
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_6b69d14
        mov ecx, ebx
        call public_6b39e30
        pop edi
        pop esi
        pop ebx
        add esp, 0x280C
        ret 8
        public_6b396e7 : nop
        push 0x19000
        call dword ptr ds : [public_6b6b1d8]
        mov esi, eax
        add esp, 4
        test esi, esi
        mov dword ptr ss : [esp+0x14], esi
        je public_6b39730
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0xC]
        push eax
        push 0x19000
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx+4]
        test eax, eax
        jne public_6b39726
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        push esi
        mov ecx, edi
        call public_6b69d14
        public_6b39726 : nop
        push esi
        call dword ptr ds : [public_6b6b1dc]
        add esp, 4
        public_6b39730 : nop
        mov ecx, ebx
        call public_6b39e30
        pop edi
        pop esi
        pop ebx
        add esp, 0x280C
        ret 8
        UNREACHABLE_TRAP(0x6b39650)
    }
}

#undef public_6b396a9
#undef public_6b396e7
#undef public_6b39726
#undef public_6b39730
