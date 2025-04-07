#include "Alchemy-PCH.h"


#define public_621f865 _public_621f865
#define public_621f879 _public_621f879

PROC_DECLARE(0x621f850, internal_621f850, public_621f850);
extern "C" NAKED register_t __cdecl internal_621f850()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ds : [eax+0x10]
        mov esi, dword ptr ds : [eax+0xC]
        cmp esi, edi
        je public_621f879
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        public_621f865 : nop
        mov eax, dword ptr ds : [esi]
        push ebx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x88]
        add esi, 0x10
        cmp esi, edi
        jne public_621f865
        pop ebx
        public_621f879 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x621f850)
    }
}

#undef public_621f865
#undef public_621f879
