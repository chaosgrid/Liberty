#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46550);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f46548 _public_6f46548

PROC_DECLARE(0x6f46530, internal_6f46530, public_6f46530);
extern "C" NAKED register_t __cdecl internal_6f46530()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f46550
        test byte ptr ss : [esp+8], 1
        je public_6f46548
        push esi
        call public_6f57e26
        add esp, 4
        public_6f46548 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f46530)
    }
}

#undef public_6f46548
