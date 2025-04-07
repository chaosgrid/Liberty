#include "Common-PCH.h"


#define public_630a723 _public_630a723
#define public_630a735 _public_630a735
#define public_630a73b _public_630a73b
#define public_630a742 _public_630a742

PROC_DECLARE(0x630a710, internal_630a710, public_630a710);
extern "C" NAKED register_t __cdecl internal_630a710()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        push esi
        push edi
        je public_630a73b
        mov esi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        public_630a723 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jne public_630a735
        test ecx, ecx
        je public_630a742
        lea edi, ds:[eax+8]
        cmp ecx, edi
        jne public_630a735
        xor ecx, ecx
        public_630a735 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_630a723
        public_630a73b : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        public_630a742 : nop
        pop edi
        add eax, 8
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x630a710)
    }
}

#undef public_630a723
#undef public_630a735
#undef public_630a73b
#undef public_630a742
