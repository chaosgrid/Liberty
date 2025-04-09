#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_504cf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_504c28 _public_504c28

PROC_DECLARE(0x504c10, internal_504c10, public_504c10);
extern "C" NAKED register_t __cdecl internal_504c10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_504cf0
        test byte ptr ss : [esp+8], 1
        je public_504c28
        push esi
        call public_5b7e1d
        add esp, 4
        public_504c28 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x504c10)
    }
}

#undef public_504c28
