#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f570);
CLANG_FORWARD_PROC_SYMBOL(public_6f55590);
CLANG_FORWARD_PROC_SYMBOL(public_6f556c0);

#define public_6f55e1e _public_6f55e1e

PROC_DECLARE(0x6f55df0, internal_6f55df0, public_6f55df0);
extern "C" NAKED register_t __cdecl internal_6f55df0()
{
    __asm
    {
        push esi
        push 2
        call public_6f55590
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_6f55e1e
        push 2
        call public_6f4b090
        add esp, 4
        test eax, eax
        je public_6f55e1e
/*FIXUP push offset public_6f61888 @0x6f55e0f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61888
        push 2
        call public_6f4f570
        add esp, 8
        public_6f55e1e : nop
        push esi
        call dword ptr ds : [public_6f5a108]
        neg eax
        sbb eax, eax
        inc eax
        push eax
        call public_6f556c0
        add esp, 8
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f55df0)
    }
}

#undef public_6f55e1e
