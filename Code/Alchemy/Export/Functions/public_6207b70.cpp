#include "Alchemy-PCH.h"


#define public_6207b9d _public_6207b9d
#define public_6207ba9 _public_6207ba9

PROC_DECLARE(0x6207b70, internal_6207b70, public_6207b70);
extern "C" NAKED register_t __cdecl internal_6207b70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ecx+edx*8+4]
        mov edi, dword ptr ss : [esp+0x14]
        lea esi, ds:[ecx+edx*8+4]
        cmp eax, edi
        je public_6207ba9
        test eax, eax
        je public_6207b9d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6207b9d : nop
        test edi, edi
        mov dword ptr ds : [esi], edi
        je public_6207ba9
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_6207ba9 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6207b70)
    }
}

#undef public_6207b9d
#undef public_6207ba9
