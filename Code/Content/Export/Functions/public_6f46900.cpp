#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46900);

#define public_6f46916 _public_6f46916

PROC_DECLARE(0x6f46900, internal_6f46900, public_6f46900);
extern "C" NAKED register_t __cdecl internal_6f46900()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6f46916
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 7
        rep movsd
        pop esi
        public_6f46916 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f46900)
    }
}

#undef public_6f46916
