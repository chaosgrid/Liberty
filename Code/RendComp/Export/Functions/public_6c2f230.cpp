#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2dff0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2f230);

#define public_6c2f244 _public_6c2f244

PROC_DECLARE(0x6c2f230, internal_6c2f230, public_6c2f230);
extern "C" NAKED register_t __cdecl internal_6c2f230()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6c2f244
        call public_6c2dff0
        mov dword ptr ds : [esi], 0
        public_6c2f244 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c2f230)
    }
}

#undef public_6c2f244
