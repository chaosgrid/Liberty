#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f9d009 _public_6f9d009

PROC_DECLARE(0x6f9cff0, internal_6f9cff0, public_6f9cff0);
extern "C" NAKED register_t __cdecl internal_6f9cff0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi], offset public_6fbd3f0
        je public_6f9d009
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f9d009 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f9cff0)
    }
}

#undef public_6f9d009
