#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f99890);
CLANG_FORWARD_PROC_SYMBOL(public_6fa5880);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6fa5898 _public_6fa5898

PROC_DECLARE(0x6fa5880, internal_6fa5880, public_6fa5880);
extern "C" NAKED register_t __cdecl internal_6fa5880()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f99890
        test byte ptr ss : [esp+8], 1
        je public_6fa5898
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6fa5898 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6fa5880)
    }
}

#undef public_6fa5898
