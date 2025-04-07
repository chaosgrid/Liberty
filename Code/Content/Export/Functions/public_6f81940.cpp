#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f81940);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f81958 _public_6f81958

PROC_DECLARE(0x6f81940, internal_6f81940, public_6f81940);
extern "C" NAKED register_t __cdecl internal_6f81940()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6eec8d0
        test byte ptr ss : [esp+8], 1
        je public_6f81958
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f81958 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f81940)
    }
}

#undef public_6f81958
