#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6289e80);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6289ee8 _public_6289ee8

PROC_DECLARE(0x6289ed0, internal_6289ed0, public_6289ed0);
extern "C" NAKED register_t __cdecl internal_6289ed0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6289e80
        test byte ptr ss : [esp+8], 1
        je public_6289ee8
        push esi
        call public_6391d5a
        add esp, 4
        public_6289ee8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6289ed0)
    }
}

#undef public_6289ee8
