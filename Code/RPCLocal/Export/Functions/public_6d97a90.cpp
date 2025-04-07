#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d978c0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d97aa8 _public_6d97aa8

PROC_DECLARE(0x6d97a90, internal_6d97a90, public_6d97a90);
extern "C" NAKED register_t __cdecl internal_6d97a90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d978c0
        test byte ptr ss : [esp+8], 1
        je public_6d97aa8
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d97aa8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d97a90)
    }
}

#undef public_6d97aa8
