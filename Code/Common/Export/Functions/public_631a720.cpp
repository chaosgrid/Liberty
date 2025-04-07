#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63165f0);
CLANG_FORWARD_PROC_SYMBOL(public_631a720);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_631a738 _public_631a738

PROC_DECLARE(0x631a720, internal_631a720, public_631a720);
extern "C" NAKED register_t __cdecl internal_631a720()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_63165f0
        test byte ptr ss : [esp+8], 1
        je public_631a738
        push esi
        call public_6391d5a
        add esp, 4
        public_631a738 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x631a720)
    }
}

#undef public_631a738
