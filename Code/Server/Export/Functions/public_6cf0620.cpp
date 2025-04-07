#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0bbc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d498f0);

#define public_6cf06a1 _public_6cf06a1
#define public_6cf06aa _public_6cf06aa

PROC_DECLARE(0x6cf0620, internal_6cf0620, public_6cf0620);
extern "C" NAKED register_t __cdecl internal_6cf0620()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6cf06aa
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        push edi
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf06aa
        mov ebx, dword ptr ss : [esp+0x14]
        test ebx, ebx
        je public_6cf06aa
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        jbe public_6cf06a1
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[esi-1]
        cmp eax, ecx
        jae public_6cf06a1
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6cf06a1
        mov edx, dword ptr ds : [edi+0x24]
        mov eax, dword ptr ds : [edi+0x20]
        push edx
        push eax
        mov eax, esi
        imul eax, 0x418
        lea edx, ds:[edi+0x14]
        push edx
        lea ecx, ds:[eax+ecx-0x418]
        call public_6d498f0
        test al, al
        je public_6cf06aa
        public_6cf06a1 : nop
        push esi
        mov ecx, ebx
        push edi
        call public_6d0bbc0
        public_6cf06aa : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6cf0620)
    }
}

#undef public_6cf06a1
#undef public_6cf06aa
