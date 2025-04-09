#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4be390);

#define public_55b913 _public_55b913
#define public_55b93d _public_55b93d

PROC_DECLARE(0x55b900, internal_55b900, public_55b900);
extern "C" NAKED register_t __cdecl internal_55b900()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xCC]
        test eax, eax
        push edi
        je public_55b913
        call public_4be390
        public_55b913 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_55b93d
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov edi, eax
        test edi, edi
        je public_55b93d
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
        public_55b93d : nop
        mov al, byte ptr ds : [esi+0x330]
        and al, 0xFE
        pop edi
        mov byte ptr ds : [esi+0x330], al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x55b900)
    }
}

#undef public_55b913
#undef public_55b93d
