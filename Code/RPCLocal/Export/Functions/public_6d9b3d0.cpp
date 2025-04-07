#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9b3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d9b3e8 _public_6d9b3e8

PROC_DECLARE(0x6d9b3d0, internal_6d9b3d0, public_6d9b3d0);
extern "C" NAKED register_t __cdecl internal_6d9b3d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d9b3f0
        test byte ptr ss : [esp+8], 1
        je public_6d9b3e8
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d9b3e8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d9b3d0)
    }
}

#undef public_6d9b3e8
