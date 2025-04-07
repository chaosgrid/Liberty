#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6242e70);
CLANG_FORWARD_PROC_SYMBOL(public_6242ea0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6242e98 _public_6242e98

PROC_DECLARE(0x6242e70, internal_6242e70, public_6242e70);
extern "C" NAKED register_t __cdecl internal_6242e70()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+8]
        mov dword ptr ds : [edi], offset public_624fab0
        test esi, esi
        je public_6242e98
        mov ecx, esi
        call public_6242ea0
        push esi
        call public_62460e0
        add esp, 4
        mov dword ptr ds : [edi+8], 0
        public_6242e98 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6242e70)
    }
}

#undef public_6242e98
