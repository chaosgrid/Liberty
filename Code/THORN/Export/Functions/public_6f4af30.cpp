#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f39230);
CLANG_FORWARD_PROC_SYMBOL(public_6f4af30);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f4af48 _public_6f4af48

PROC_DECLARE(0x6f4af30, internal_6f4af30, public_6f4af30);
extern "C" NAKED register_t __cdecl internal_6f4af30()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f39230
        test byte ptr ss : [esp+8], 1
        je public_6f4af48
        push esi
        call public_6f57e26
        add esp, 4
        public_6f4af48 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f4af30)
    }
}

#undef public_6f4af48
