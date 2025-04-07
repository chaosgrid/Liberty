#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71900);
CLANG_FORWARD_PROC_SYMBOL(public_6f71920);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f71918 _public_6f71918

PROC_DECLARE(0x6f71900, internal_6f71900, public_6f71900);
extern "C" NAKED register_t __cdecl internal_6f71900()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f71920
        test byte ptr ss : [esp+8], 1
        je public_6f71918
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f71918 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f71900)
    }
}

#undef public_6f71918
