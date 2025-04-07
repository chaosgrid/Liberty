#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_PROC_SYMBOL(public_6d5b920);
CLANG_FORWARD_PROC_SYMBOL(public_6d5bd60);

#define public_6d5bd9a _public_6d5bd9a
#define public_6d5bdb1 _public_6d5bdb1

PROC_DECLARE(0x6d5bd60, internal_6d5bd60, public_6d5bd60);
extern "C" NAKED register_t __cdecl internal_6d5bd60()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov esi, ecx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        lea edi, ds:[esi+0x1C]
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], ebx
        call public_6d15d10
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+0x20]
        je public_6d5bd9a
        push eax
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, edi
        call public_6ce3ea0
        public_6d5bd9a : nop
        push ebx
        mov ecx, esi
        call public_6d5b920
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        jne public_6d5bdb1
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax]
        public_6d5bdb1 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d5bd60)
    }
}

#undef public_6d5bd9a
#undef public_6d5bdb1
