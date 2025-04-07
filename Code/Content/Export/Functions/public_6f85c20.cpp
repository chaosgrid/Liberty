#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f85f60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f85c38 _public_6f85c38

PROC_DECLARE(0x6f85c20, internal_6f85c20, public_6f85c20);
extern "C" NAKED register_t __cdecl internal_6f85c20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f85f60
        test byte ptr ss : [esp+8], 1
        je public_6f85c38
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f85c38 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f85c20)
    }
}

#undef public_6f85c38
