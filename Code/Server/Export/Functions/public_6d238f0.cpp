#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23910);

#define public_6d23908 _public_6d23908

PROC_DECLARE(0x6d238f0, internal_6d238f0, public_6d238f0);
extern "C" NAKED register_t __cdecl internal_6d238f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d209f0
        test byte ptr ss : [esp+8], 1
        je public_6d23908
        push esi
        call public_6d23910
        add esp, 4
        public_6d23908 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d238f0)
    }
}

#undef public_6d23908
