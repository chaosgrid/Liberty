#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632ee30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_632ee28 _public_632ee28

PROC_DECLARE(0x632ee10, internal_632ee10, public_632ee10);
extern "C" NAKED register_t __cdecl internal_632ee10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_632ee30
        test byte ptr ss : [esp+8], 1
        je public_632ee28
        push esi
        call public_6391d5a
        add esp, 4
        public_632ee28 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x632ee10)
    }
}

#undef public_632ee28
