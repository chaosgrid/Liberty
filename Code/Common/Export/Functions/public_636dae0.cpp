#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6377e40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_636daf8 _public_636daf8

PROC_DECLARE(0x636dae0, internal_636dae0, public_636dae0);
extern "C" NAKED register_t __cdecl internal_636dae0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6377e40
        test byte ptr ss : [esp+8], 1
        je public_636daf8
        push esi
        call public_6391d5a
        add esp, 4
        public_636daf8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x636dae0)
    }
}

#undef public_636daf8
