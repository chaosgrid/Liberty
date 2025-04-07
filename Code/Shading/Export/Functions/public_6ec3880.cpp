#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec3880);

#define public_6ec3895 _public_6ec3895

PROC_DECLARE(0x6ec3880, internal_6ec3880, public_6ec3880);
extern "C" NAKED register_t __cdecl internal_6ec3880()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ec3895
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6ec3895 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ec3880)
    }
}

#undef public_6ec3895
