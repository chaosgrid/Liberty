#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d280);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f4d278 _public_6f4d278

PROC_DECLARE(0x6f4d260, internal_6f4d260, public_6f4d260);
extern "C" NAKED register_t __cdecl internal_6f4d260()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f4d280
        test byte ptr ss : [esp+8], 1
        je public_6f4d278
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f4d278 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f4d260)
    }
}

#undef public_6f4d278
