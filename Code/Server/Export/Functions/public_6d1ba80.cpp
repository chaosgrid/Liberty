#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1ba70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d1ba98 _public_6d1ba98

PROC_DECLARE(0x6d1ba80, internal_6d1ba80, public_6d1ba80);
extern "C" NAKED register_t __cdecl internal_6d1ba80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d1ba70
        test byte ptr ss : [esp+8], 1
        je public_6d1ba98
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d1ba98 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d1ba80)
    }
}

#undef public_6d1ba98
