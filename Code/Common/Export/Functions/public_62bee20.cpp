#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bee20);

#define public_62bee36 _public_62bee36

PROC_DECLARE(0x62bee20, internal_62bee20, public_62bee20);
extern "C" NAKED register_t __cdecl internal_62bee20()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_62bee36
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 5
        rep movsd
        pop esi
        public_62bee36 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x62bee20)
    }
}

#undef public_62bee36
