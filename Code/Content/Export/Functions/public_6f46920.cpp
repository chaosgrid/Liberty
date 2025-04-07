#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46920);

#define public_6f46936 _public_6f46936

PROC_DECLARE(0x6f46920, internal_6f46920, public_6f46920);
extern "C" NAKED register_t __cdecl internal_6f46920()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6f46936
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0x4F
        rep movsd
        pop esi
        public_6f46936 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f46920)
    }
}

#undef public_6f46936
