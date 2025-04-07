#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f72a80);
CLANG_FORWARD_PROC_SYMBOL(public_6f72c90);

#define public_6f72ca4 _public_6f72ca4

PROC_DECLARE(0x6f72c90, internal_6f72c90, public_6f72c90);
extern "C" NAKED register_t __cdecl internal_6f72c90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6f72ca4
        mov ecx, esi
        call public_6f72a80
        public_6f72ca4 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f72c90)
    }
}

#undef public_6f72ca4
