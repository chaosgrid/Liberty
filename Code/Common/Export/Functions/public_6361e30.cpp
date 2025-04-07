#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6361e50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6361e48 _public_6361e48

PROC_DECLARE(0x6361e30, internal_6361e30, public_6361e30);
extern "C" NAKED register_t __cdecl internal_6361e30()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6361e50
        test byte ptr ss : [esp+8], 1
        je public_6361e48
        push esi
        call public_6391d5a
        add esp, 4
        public_6361e48 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6361e30)
    }
}

#undef public_6361e48
