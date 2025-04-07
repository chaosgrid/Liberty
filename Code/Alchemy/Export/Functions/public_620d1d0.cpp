#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620d1d0);

#define public_620d1e5 _public_620d1e5

PROC_DECLARE(0x620d1d0, internal_620d1d0, public_620d1d0);
extern "C" NAKED register_t __cdecl internal_620d1d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_620d1e5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_620d1e5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x620d1d0)
    }
}

#undef public_620d1e5
