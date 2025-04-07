#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed5930);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed5928 _public_6ed5928

PROC_DECLARE(0x6ed5910, internal_6ed5910, public_6ed5910);
extern "C" NAKED register_t __cdecl internal_6ed5910()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ed5930
        test byte ptr ss : [esp+8], 1
        je public_6ed5928
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ed5928 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ed5910)
    }
}

#undef public_6ed5928
