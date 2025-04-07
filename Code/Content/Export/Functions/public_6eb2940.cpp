#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb2a30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb2958 _public_6eb2958

PROC_DECLARE(0x6eb2940, internal_6eb2940, public_6eb2940);
extern "C" NAKED register_t __cdecl internal_6eb2940()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6eb2a30
        test byte ptr ss : [esp+8], 1
        je public_6eb2958
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6eb2958 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eb2940)
    }
}

#undef public_6eb2958
