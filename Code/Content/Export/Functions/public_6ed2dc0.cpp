#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2dc0);

#define public_6ed2dd6 _public_6ed2dd6

PROC_DECLARE(0x6ed2dc0, internal_6ed2dc0, public_6ed2dc0);
extern "C" NAKED register_t __cdecl internal_6ed2dc0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6ed2dd6
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0xE
        rep movsd
        pop esi
        public_6ed2dd6 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6ed2dc0)
    }
}

#undef public_6ed2dd6
