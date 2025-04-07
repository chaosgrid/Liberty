#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341030);

#define public_6341046 _public_6341046

PROC_DECLARE(0x6341030, internal_6341030, public_6341030);
extern "C" NAKED register_t __cdecl internal_6341030()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6341046
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 8
        rep movsd
        pop esi
        public_6341046 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6341030)
    }
}

#undef public_6341046
