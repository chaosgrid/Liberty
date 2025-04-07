#include "DebugLib-PCH.h"


#define public_65d4964 _public_65d4964

PROC_DECLARE(0x65d4950, internal_65d4950, public_65d4950);
extern "C" NAKED register_t __cdecl internal_65d4950()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        jne public_65d4964
        mov eax, offset public_65e13a4
        public_65d4964 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        push esi
        push eax
        push ecx
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        sub eax, esi
        pop esi
        neg eax
        sbb eax, eax
        ret 8
        UNREACHABLE_TRAP(0x65d4950)
    }
}

#undef public_65d4964
