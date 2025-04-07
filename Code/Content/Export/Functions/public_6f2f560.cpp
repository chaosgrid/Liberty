#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f29680);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f560);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2f578 _public_6f2f578

PROC_DECLARE(0x6f2f560, internal_6f2f560, public_6f2f560);
extern "C" NAKED register_t __cdecl internal_6f2f560()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f29680
        test byte ptr ss : [esp+8], 1
        je public_6f2f578
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f2f578 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f2f560)
    }
}

#undef public_6f2f578
