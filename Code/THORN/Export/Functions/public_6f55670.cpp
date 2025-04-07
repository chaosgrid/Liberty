#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b840);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55610);
CLANG_FORWARD_PROC_SYMBOL(public_6f556c0);

#define public_6f556ab _public_6f556ab

PROC_DECLARE(0x6f55670, internal_6f55670, public_6f55670);
extern "C" NAKED register_t __cdecl internal_6f55670()
{
    __asm
    {
        push esi
        push 0
        push 3
        call public_6f4f5e0
        add esp, 8
        push eax
        push 0
        push 2
        call public_6f4f5e0
        add esp, 8
        push eax
        call dword ptr ds : [public_6f5a0b4]
        mov esi, eax
        add esp, 8
        test esi, esi
        je public_6f556ab
        call public_6f55610
        push eax
        push esi
        call public_6f4b840
        add esp, 8
        pop esi
        ret 
        public_6f556ab : nop
        push 0
        call public_6f556c0
        add esp, 4
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f55670)
    }
}

#undef public_6f556ab
