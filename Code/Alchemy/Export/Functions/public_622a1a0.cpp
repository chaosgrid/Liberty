#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622a1a0);

#define public_622a1b5 _public_622a1b5

PROC_DECLARE(0x622a1a0, internal_622a1a0, public_622a1a0);
extern "C" NAKED register_t __cdecl internal_622a1a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_622a1b5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_622a1b5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x622a1a0)
    }
}

#undef public_622a1b5
