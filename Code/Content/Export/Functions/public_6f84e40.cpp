#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f84e60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f84e58 _public_6f84e58

PROC_DECLARE(0x6f84e40, internal_6f84e40, public_6f84e40);
extern "C" NAKED register_t __cdecl internal_6f84e40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f84e60
        test byte ptr ss : [esp+8], 1
        je public_6f84e58
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f84e58 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f84e40)
    }
}

#undef public_6f84e58
