#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26610);
CLANG_FORWARD_PROC_SYMBOL(public_6c27aa0);

#define public_6c26626 _public_6c26626

PROC_DECLARE(0x6c26610, internal_6c26610, public_6c26610);
extern "C" NAKED register_t __cdecl internal_6c26610()
{
    __asm
    {
        cmp dword ptr ds : [ecx+0x218], 2
        jne public_6c26626
        mov eax, dword ptr ds : [ecx+0x1E8]
        mov ecx, dword ptr ds : [eax]
        call public_6c27aa0
        public_6c26626 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6c26610)
    }
}

#undef public_6c26626
