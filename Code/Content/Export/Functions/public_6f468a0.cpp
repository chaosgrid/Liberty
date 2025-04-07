#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f468a0);

#define public_6f468b6 _public_6f468b6

PROC_DECLARE(0x6f468a0, internal_6f468a0, public_6f468a0);
extern "C" NAKED register_t __cdecl internal_6f468a0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6f468b6
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0x10
        rep movsd
        pop esi
        public_6f468b6 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f468a0)
    }
}

#undef public_6f468b6
