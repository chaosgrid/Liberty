#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f48110);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f48108 _public_6f48108

PROC_DECLARE(0x6f480f0, internal_6f480f0, public_6f480f0);
extern "C" NAKED register_t __cdecl internal_6f480f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f48110
        test byte ptr ss : [esp+8], 1
        je public_6f48108
        push esi
        call public_6f57e26
        add esp, 4
        public_6f48108 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f480f0)
    }
}

#undef public_6f48108
