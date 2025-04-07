#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62212e0);

#define public_62212f5 _public_62212f5

PROC_DECLARE(0x62212e0, internal_62212e0, public_62212e0);
extern "C" NAKED register_t __cdecl internal_62212e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_62212f5
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_62212f5 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62212e0)
    }
}

#undef public_62212f5
