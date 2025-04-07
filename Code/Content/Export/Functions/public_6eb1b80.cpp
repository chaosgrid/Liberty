#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1b80);

#define public_6eb1b96 _public_6eb1b96

PROC_DECLARE(0x6eb1b80, internal_6eb1b80, public_6eb1b80);
extern "C" NAKED register_t __cdecl internal_6eb1b80()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6eb1b96
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 9
        rep movsd
        pop esi
        public_6eb1b96 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6eb1b80)
    }
}

#undef public_6eb1b96
