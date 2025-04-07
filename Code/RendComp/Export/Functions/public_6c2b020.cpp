#include "RendComp-PCH.h"


#define public_6c2b045 _public_6c2b045

PROC_DECLARE(0x6c2b020, internal_6c2b020, public_6c2b020);
extern "C" NAKED register_t __cdecl internal_6c2b020()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, offset public_6c37360
        mov ecx, 0x10
        xor eax, eax
        repe cmpsb
        pop edi
        pop esi
        jne public_6c2b045
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx], ecx
        ret 0xC
        public_6c2b045 : nop
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x6c2b020)
    }
}

#undef public_6c2b045
