#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a60);
CLANG_FORWARD_PROC_SYMBOL(public_6806a90);
CLANG_FORWARD_PROC_SYMBOL(public_6806ab0);

#define public_6806a72 _public_6806a72
#define public_6806a87 _public_6806a87

PROC_DECLARE(0x6806a60, internal_6806a60, public_6806a60);
extern "C" NAKED register_t __cdecl internal_6806a60()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6806ab0
        add esp, 4
        test eax, eax
        je public_6806a87
        public_6806a72 : nop
        push 0x3B
        push esi
        call public_6806a90
        push esi
        call public_6806ab0
        add esp, 0xC
        test eax, eax
        jne public_6806a72
        public_6806a87 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6806a60)
    }
}

#undef public_6806a72
#undef public_6806a87
