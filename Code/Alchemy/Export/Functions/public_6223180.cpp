#include "Alchemy-PCH.h"


#define public_622319b _public_622319b

PROC_DECLARE(0x6223180, internal_6223180, public_6223180);
extern "C" NAKED register_t __cdecl internal_6223180()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0xFFFFFFFF
        je public_622319b
        mov eax, dword ptr ds : [esi]
        push ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x10]
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        public_622319b : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6223180)
    }
}

#undef public_622319b
