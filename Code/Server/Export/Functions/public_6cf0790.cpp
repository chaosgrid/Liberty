#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d6e0);

#define public_6cf07be _public_6cf07be

PROC_DECLARE(0x6cf0790, internal_6cf0790, public_6cf0790);
extern "C" NAKED register_t __cdecl internal_6cf0790()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ds:[esi+4]
        push edx
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf07be
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        je public_6cf07be
        push esi
        call public_6d0d6e0
        public_6cf07be : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6cf0790)
    }
}

#undef public_6cf07be
