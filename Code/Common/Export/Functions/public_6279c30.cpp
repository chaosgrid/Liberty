#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62736c0);
CLANG_FORWARD_PROC_SYMBOL(public_6279c30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6279c48 _public_6279c48

PROC_DECLARE(0x6279c30, internal_6279c30, public_6279c30);
extern "C" NAKED register_t __cdecl internal_6279c30()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62736c0
        test byte ptr ss : [esp+8], 1
        je public_6279c48
        push esi
        call public_6391d5a
        add esp, 4
        public_6279c48 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6279c30)
    }
}

#undef public_6279c48
