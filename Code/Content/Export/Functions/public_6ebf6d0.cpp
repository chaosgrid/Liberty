#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ebf6e9 _public_6ebf6e9

PROC_DECLARE(0x6ebf6d0, internal_6ebf6d0, public_6ebf6d0);
extern "C" NAKED register_t __cdecl internal_6ebf6d0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6fb565c
        je public_6ebf6e9
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ebf6e9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ebf6d0)
    }
}

#undef public_6ebf6e9
