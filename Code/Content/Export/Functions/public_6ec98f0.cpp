#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec9910);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ec9908 _public_6ec9908

PROC_DECLARE(0x6ec98f0, internal_6ec98f0, public_6ec98f0);
extern "C" NAKED register_t __cdecl internal_6ec98f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ec9910
        test byte ptr ss : [esp+8], 1
        je public_6ec9908
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ec9908 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec98f0)
    }
}

#undef public_6ec9908
