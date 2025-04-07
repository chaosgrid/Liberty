#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636db00);
CLANG_FORWARD_PROC_SYMBOL(public_636de70);
CLANG_FORWARD_PROC_SYMBOL(public_636e0c0);

#define public_636e0cf _public_636e0cf

PROC_DECLARE(0x636e0c0, internal_636e0c0, public_636e0c0);
extern "C" NAKED register_t __cdecl internal_636e0c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC
        test eax, eax
        jne public_636e0cf
        add esp, 0xC
        ret 
        public_636e0cf : nop
        push esi
        push eax
        lea ecx, ss:[esp+8]
        call public_636db00
        mov esi, dword ptr ss : [esp+8]
        lea ecx, ss:[esp+4]
        mov dword ptr ss : [esp+8], 0
        call public_636de70
        mov eax, esi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x636e0c0)
    }
}

#undef public_636e0cf
