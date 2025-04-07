#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecabb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ec6048 _public_6ec6048

PROC_DECLARE(0x6ec6030, internal_6ec6030, public_6ec6030);
extern "C" NAKED register_t __cdecl internal_6ec6030()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ecabb0
        test byte ptr ss : [esp+8], 1
        je public_6ec6048
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ec6048 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec6030)
    }
}

#undef public_6ec6048
