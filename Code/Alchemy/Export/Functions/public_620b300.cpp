#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_620b322 _public_620b322

PROC_DECLARE(0x620b300, internal_620b300, public_620b300);
extern "C" NAKED register_t __cdecl internal_620b300()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_624bd84
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        mov dword ptr ds : [ecx+8], offset public_624bd80
        je public_620b322
        mov ecx, dword ptr ds : [ecx+0x10]
        test ecx, ecx
        je public_620b322
        push ecx
        call public_62460e0
        pop ecx
        public_620b322 : nop
        ret 
        UNREACHABLE_TRAP(0x620b300)
    }
}

#undef public_620b322
