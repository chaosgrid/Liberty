#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23960);

#define public_6d23958 _public_6d23958

PROC_DECLARE(0x6d23940, internal_6d23940, public_6d23940);
extern "C" NAKED register_t __cdecl internal_6d23940()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d209f0
        test byte ptr ss : [esp+8], 1
        je public_6d23958
        push esi
        call public_6d23960
        add esp, 4
        public_6d23958 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d23940)
    }
}

#undef public_6d23958
