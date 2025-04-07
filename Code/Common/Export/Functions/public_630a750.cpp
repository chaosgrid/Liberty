#include "Common-PCH.h"


#define public_630a763 _public_630a763
#define public_630a775 _public_630a775
#define public_630a77b _public_630a77b
#define public_630a782 _public_630a782

PROC_DECLARE(0x630a750, internal_630a750, public_630a750);
extern "C" NAKED register_t __cdecl internal_630a750()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov edx, dword ptr ss : [esp+8]
        push esi
        push edi
        je public_630a77b
        mov esi, dword ptr ss : [esp+0xC]
        public_630a763 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jne public_630a775
        test edx, edx
        je public_630a782
        lea edi, ds:[eax+8]
        cmp edx, edi
        jne public_630a775
        xor edx, edx
        public_630a775 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_630a763
        public_630a77b : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        public_630a782 : nop
        pop edi
        add eax, 8
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x630a750)
    }
}

#undef public_630a763
#undef public_630a775
#undef public_630a77b
#undef public_630a782
