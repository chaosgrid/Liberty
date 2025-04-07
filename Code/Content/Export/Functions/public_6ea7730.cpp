#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7730);

#define public_6ea7746 _public_6ea7746

PROC_DECLARE(0x6ea7730, internal_6ea7730, public_6ea7730);
extern "C" NAKED register_t __cdecl internal_6ea7730()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6ea7746
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0x12
        rep movsd
        pop esi
        public_6ea7746 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6ea7730)
    }
}

#undef public_6ea7746
