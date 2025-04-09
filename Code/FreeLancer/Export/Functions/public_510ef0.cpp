#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_510f10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_510f08 _public_510f08

PROC_DECLARE(0x510ef0, internal_510ef0, public_510ef0);
extern "C" NAKED register_t __cdecl internal_510ef0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_510f10
        test byte ptr ss : [esp+8], 1
        je public_510f08
        push esi
        call public_5b7e1d
        add esp, 4
        public_510f08 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x510ef0)
    }
}

#undef public_510f08
