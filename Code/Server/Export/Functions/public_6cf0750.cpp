#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0d730);

#define public_6cf0783 _public_6cf0783

PROC_DECLARE(0x6cf0750, internal_6cf0750, public_6cf0750);
extern "C" NAKED register_t __cdecl internal_6cf0750()
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
        lea edx, ds:[esi+8]
        push edx
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf0783
        mov ecx, dword ptr ss : [esp+0xC]
        test ecx, ecx
        je public_6cf0783
        mov eax, dword ptr ss : [esp+4]
        push eax
        push esi
        call public_6d0d730
        public_6cf0783 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6cf0750)
    }
}

#undef public_6cf0783
