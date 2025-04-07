#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eee7a0);

#define public_6eee7b6 _public_6eee7b6

PROC_DECLARE(0x6eee7a0, internal_6eee7a0, public_6eee7a0);
extern "C" NAKED register_t __cdecl internal_6eee7a0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6eee7b6
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 6
        rep movsd
        pop esi
        public_6eee7b6 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6eee7a0)
    }
}

#undef public_6eee7b6
