#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f9170);

#define public_65f9185 _public_65f9185

PROC_DECLARE(0x65f9170, internal_65f9170, public_65f9170);
extern "C" NAKED register_t __cdecl internal_65f9170()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_65f9185
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_65f9185 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65f9170)
    }
}

#undef public_65f9185
