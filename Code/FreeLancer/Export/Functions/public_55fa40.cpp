#include "Freelancer-PCH.h"


#define public_55fa75 _public_55fa75

PROC_DECLARE(0x55fa40, internal_55fa40, public_55fa40);
extern "C" NAKED register_t __cdecl internal_55fa40()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push edi
        mov byte ptr ds : [esi+0x349], 0
        je public_55fa75
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edi, eax
        test edi, edi
        je public_55fa75
        mov edx, dword ptr ds : [esi]
        push ebx
        mov ebx, dword ptr ds : [edi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+8]
        push eax
        push 0x2D
        mov ecx, edi
        call dword ptr ds : [ebx+0xA8]
        pop ebx
        public_55fa75 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x55fa40)
    }
}

#undef public_55fa75
