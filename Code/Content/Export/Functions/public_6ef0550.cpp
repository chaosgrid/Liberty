#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef0550);
CLANG_FORWARD_PROC_SYMBOL(public_6ef06d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ef0568 _public_6ef0568

PROC_DECLARE(0x6ef0550, internal_6ef0550, public_6ef0550);
extern "C" NAKED register_t __cdecl internal_6ef0550()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ef06d0
        test byte ptr ss : [esp+8], 1
        je public_6ef0568
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ef0568 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ef0550)
    }
}

#undef public_6ef0568
