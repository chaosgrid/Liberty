#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d500);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ed00);

#define public_6cf0743 _public_6cf0743

PROC_DECLARE(0x6cf06c0, internal_6cf06c0, public_6cf06c0);
extern "C" NAKED register_t __cdecl internal_6cf06c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        push esi
        jbe public_6cf0743
        mov edx, dword ptr ds : [public_6d90264]
        lea eax, ds:[ecx-1]
        cmp eax, edx
        jae public_6cf0743
        mov edx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov esi, dword ptr ds : [eax+edx+0x348]
        test esi, esi
        je public_6cf0743
        imul ecx, 0x418
        mov eax, dword ptr ds : [ecx+edx-0x34]
        test eax, 0x3FFFFFFF
        lea ecx, ds:[ecx+edx-0x418]
        je public_6cf0743
        call public_6d4ed00
        fcomp qword ptr ds : [public_6d65190]
        fnstsw ax
        test ah, 0x41
        jnp public_6cf0743
        mov esi, dword ptr ss : [esp+8]
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ds:[esi+8]
        push edx
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf0743
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        je public_6cf0743
        push esi
        call public_6d0d500
        public_6cf0743 : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6cf06c0)
    }
}

#undef public_6cf0743
