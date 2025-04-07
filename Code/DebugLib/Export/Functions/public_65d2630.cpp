#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2630);

#define public_65d2645 _public_65d2645

PROC_DECLARE(0x65d2630, internal_65d2630, public_65d2630);
extern "C" NAKED register_t __cdecl internal_65d2630()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_65d2645
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_65d2645 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65d2630)
    }
}

#undef public_65d2645
