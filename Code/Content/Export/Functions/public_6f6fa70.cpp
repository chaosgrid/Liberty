#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6fa70);

#define public_6f6fa86 _public_6f6fa86

PROC_DECLARE(0x6f6fa70, internal_6f6fa70, public_6f6fa70);
extern "C" NAKED register_t __cdecl internal_6f6fa70()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6f6fa86
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 5
        rep movsd
        pop esi
        public_6f6fa86 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f6fa70)
    }
}

#undef public_6f6fa86
