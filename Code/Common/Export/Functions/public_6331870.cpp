#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6331890);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6331888 _public_6331888

PROC_DECLARE(0x6331870, internal_6331870, public_6331870);
extern "C" NAKED register_t __cdecl internal_6331870()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6331890
        test byte ptr ss : [esp+8], 1
        je public_6331888
        push esi
        call public_6391d5a
        add esp, 4
        public_6331888 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6331870)
    }
}

#undef public_6331888
