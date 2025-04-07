#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661aa60);

#define public_661aa76 _public_661aa76

PROC_DECLARE(0x661aa60, internal_661aa60, public_661aa60);
extern "C" NAKED register_t __cdecl internal_661aa60()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_661aa76
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 8
        rep movsd
        pop esi
        public_661aa76 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x661aa60)
    }
}

#undef public_661aa76
