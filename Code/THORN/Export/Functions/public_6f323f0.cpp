#include "THORN-PCH.h"


#define public_6f3241a _public_6f3241a

PROC_DECLARE(0x6f323f0, internal_6f323f0, public_6f323f0);
extern "C" NAKED register_t __cdecl internal_6f323f0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, offset public_6f5fea4
        mov ecx, 0x17
        xor eax, eax
        mov dword ptr ds : [edx], 0
        repe cmpsb
        pop edi
        pop esi
        je public_6f3241a
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_6f3241a : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6f323f0)
    }
}

#undef public_6f3241a
