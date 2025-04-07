#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ced1f0);

#define public_6ced206 _public_6ced206

PROC_DECLARE(0x6ced1f0, internal_6ced1f0, public_6ced1f0);
extern "C" NAKED register_t __cdecl internal_6ced1f0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6ced206
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0x1B
        rep movsd
        pop esi
        public_6ced206 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6ced1f0)
    }
}

#undef public_6ced206
