#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ca530);
CLANG_FORWARD_PROC_SYMBOL(public_4ceb30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4ceb48 _public_4ceb48

PROC_DECLARE(0x4ceb30, internal_4ceb30, public_4ceb30);
extern "C" NAKED register_t __cdecl internal_4ceb30()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4ca530
        test byte ptr ss : [esp+8], 1
        je public_4ceb48
        push esi
        call public_5b7e1d
        add esp, 4
        public_4ceb48 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4ceb30)
    }
}

#undef public_4ceb48
