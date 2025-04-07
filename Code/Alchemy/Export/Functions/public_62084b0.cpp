#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62084b0);

#define public_62084c5 _public_62084c5

PROC_DECLARE(0x62084b0, internal_62084b0, public_62084b0);
extern "C" NAKED register_t __cdecl internal_62084b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62084c5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_62084c5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62084b0)
    }
}

#undef public_62084c5
