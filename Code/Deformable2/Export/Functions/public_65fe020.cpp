#include "Deformable2-PCH.h"


#define public_65fe04a _public_65fe04a

PROC_DECLARE(0x65fe020, internal_65fe020, public_65fe020);
extern "C" NAKED register_t __cdecl internal_65fe020()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, offset public_6602448
        mov ecx, 0x17
        xor eax, eax
        mov dword ptr ds : [edx], 0
        repe cmpsb
        pop edi
        pop esi
        je public_65fe04a
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_65fe04a : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x65fe020)
    }
}

#undef public_65fe04a
