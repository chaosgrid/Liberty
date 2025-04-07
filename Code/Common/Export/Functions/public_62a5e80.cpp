#include "Common-PCH.h"


#define public_62a5e93 _public_62a5e93
#define public_62a5eae _public_62a5eae
#define public_62a5ec4 _public_62a5ec4
#define public_62a5ece _public_62a5ece

PROC_DECLARE(0x62a5e80, internal_62a5e80, public_62a5e80);
extern "C" NAKED register_t __cdecl internal_62a5e80()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr ss : [ebp+0x38]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_62a5eae
        mov ebx, dword ptr ss : [esp+0x14]
        public_62a5e93 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        push ebx
        call dword ptr ds : [eax]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_62a5ec4
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_62a5e93
        public_62a5eae : nop
        mov ecx, dword ptr ss : [ebp+0x28]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x7C]
        test eax, eax
        je public_62a5ece
        mov eax, dword ptr ss : [ebp+0x28]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_62a5ec4 : nop
        mov eax, dword ptr ds : [esi+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_62a5ece : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62a5e80)
    }
}

#undef public_62a5e93
#undef public_62a5eae
#undef public_62a5ec4
#undef public_62a5ece
