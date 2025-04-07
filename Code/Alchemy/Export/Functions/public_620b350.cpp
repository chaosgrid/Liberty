#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b350);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620b36b _public_620b36b

PROC_DECLARE(0x620b350, internal_620b350, public_620b350);
extern "C" NAKED register_t __cdecl internal_620b350()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [ecx], offset public_624bd80
        test eax, eax
        je public_620b36b
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_620b36b
        push ecx
        call public_62460e0
        pop ecx
        public_620b36b : nop
        ret 
        UNREACHABLE_TRAP(0x620b350)
    }
}

#undef public_620b36b
