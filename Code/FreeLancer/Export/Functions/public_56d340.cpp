#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_56d340);
CLANG_FORWARD_PROC_SYMBOL(public_56d360);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_56d358 _public_56d358

PROC_DECLARE(0x56d340, internal_56d340, public_56d340);
extern "C" NAKED register_t __cdecl internal_56d340()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_56d360
        test byte ptr ss : [esp+8], 1
        je public_56d358
        push esi
        call public_5b7e1d
        add esp, 4
        public_56d358 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x56d340)
    }
}

#undef public_56d358
