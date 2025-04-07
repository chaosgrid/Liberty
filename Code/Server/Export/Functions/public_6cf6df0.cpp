#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf6df0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf73d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);

#define public_6cf6e2e _public_6cf6e2e
#define public_6cf6e3e _public_6cf6e3e
#define public_6cf6e51 _public_6cf6e51

PROC_DECLARE(0x6cf6df0, internal_6cf6df0, public_6cf6df0);
extern "C" NAKED register_t __cdecl internal_6cf6df0()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        mov dword ptr ss : [esp+8], eax
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6cf6e3e
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        call public_6d006c0
        add esp, 0xC
        test al, al
        jne public_6cf6e2e
        mov dword ptr ss : [esp+0x14], 0
        public_6cf6e2e : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        mov ecx, esi
        call public_6cf73d0
        test al, al
        je public_6cf6e51
        public_6cf6e3e : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [esi+0x38]
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        call dword ptr ds : [edx+0xD0]
        public_6cf6e51 : nop
        pop edi
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6cf6df0)
    }
}

#undef public_6cf6e2e
#undef public_6cf6e3e
#undef public_6cf6e51
