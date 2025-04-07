#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6377e50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_636c7d8 _public_636c7d8

PROC_DECLARE(0x636c7c0, internal_636c7c0, public_636c7c0);
extern "C" NAKED register_t __cdecl internal_636c7c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6377e50
        test byte ptr ss : [esp+8], 1
        je public_636c7d8
        push esi
        call public_6391d5a
        add esp, 4
        public_636c7d8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x636c7c0)
    }
}

#undef public_636c7d8
