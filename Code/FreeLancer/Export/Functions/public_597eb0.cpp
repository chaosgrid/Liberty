#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_597ed0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_597ec8 _public_597ec8

PROC_DECLARE(0x597eb0, internal_597eb0, public_597eb0);
extern "C" NAKED register_t __cdecl internal_597eb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_597ed0
        test byte ptr ss : [esp+8], 1
        je public_597ec8
        push esi
        call public_5b7e1d
        add esp, 4
        public_597ec8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x597eb0)
    }
}

#undef public_597ec8
