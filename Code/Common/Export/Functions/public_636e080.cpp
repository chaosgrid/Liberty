#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636da30);
CLANG_FORWARD_PROC_SYMBOL(public_636de70);
CLANG_FORWARD_PROC_SYMBOL(public_636e080);

#define public_636e08f _public_636e08f

PROC_DECLARE(0x636e080, internal_636e080, public_636e080);
extern "C" NAKED register_t __cdecl internal_636e080()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC
        test eax, eax
        jne public_636e08f
        add esp, 0xC
        ret 
        public_636e08f : nop
        push esi
        push eax
        lea ecx, ss:[esp+8]
        call public_636da30
        mov esi, dword ptr ss : [esp+8]
        lea ecx, ss:[esp+4]
        mov dword ptr ss : [esp+8], 0
        call public_636de70
        mov eax, esi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x636e080)
    }
}

#undef public_636e08f
