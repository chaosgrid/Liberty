#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_543350);

#define public_543373 _public_543373
#define public_543375 _public_543375

PROC_DECLARE(0x543350, internal_543350, public_543350);
extern "C" NAKED register_t __cdecl internal_543350()
{
    __asm
    {
        test ecx, ecx
        je public_543373
        lea eax, ds:[ecx+0xC]
        test eax, eax
        je public_543373
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_543373
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_543375
        public_543373 : nop
        xor eax, eax
        public_543375 : nop
        mov eax, dword ptr ds : [eax+0x88]
        ret 
        UNREACHABLE_TRAP(0x543350)
    }
}

#undef public_543373
#undef public_543375
