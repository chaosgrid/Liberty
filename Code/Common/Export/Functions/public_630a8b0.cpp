#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630a8b0);

#define public_630a8c0 _public_630a8c0
#define public_630a8cc _public_630a8cc
#define public_630a8d1 _public_630a8d1

PROC_DECLARE(0x630a8b0, internal_630a8b0, public_630a8b0);
extern "C" NAKED register_t __cdecl internal_630a8b0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_630a8cc
        mov dx, word ptr ss : [esp+4]
        mov edi, edi
        public_630a8c0 : nop
        cmp word ptr ds : [eax+0xA], dx
        je public_630a8d1
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_630a8c0
        public_630a8cc : nop
        xor eax, eax
        ret 4
        public_630a8d1 : nop
        add eax, 8
        ret 4
        UNREACHABLE_TRAP(0x630a8b0)
    }
}

#undef public_630a8c0
#undef public_630a8cc
#undef public_630a8d1
