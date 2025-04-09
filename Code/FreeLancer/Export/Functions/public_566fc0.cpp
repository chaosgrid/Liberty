#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_471f30);

#define public_566fcc _public_566fcc

PROC_DECLARE(0x566fc0, internal_566fc0, public_566fc0);
extern "C" NAKED register_t __cdecl internal_566fc0()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xF
        je public_566fcc
        xor al, al
        ret 4
        public_566fcc : nop
        push 0
        call public_471f30
        add esp, 4
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x566fc0)
    }
}

#undef public_566fcc
