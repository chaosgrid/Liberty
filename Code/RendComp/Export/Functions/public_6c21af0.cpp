#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21af0);

#define public_6c21b05 _public_6c21b05

PROC_DECLARE(0x6c21af0, internal_6c21af0, public_6c21af0);
extern "C" NAKED register_t __cdecl internal_6c21af0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6c21b05
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6c21b05 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c21af0)
    }
}

#undef public_6c21b05
