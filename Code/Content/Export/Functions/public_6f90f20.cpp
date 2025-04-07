#include "Content-PCH.h"


#define public_6f90f31 _public_6f90f31
#define public_6f90f4c _public_6f90f4c

PROC_DECLARE(0x6f90f20, internal_6f90f20, public_6f90f20);
extern "C" NAKED register_t __cdecl internal_6f90f20()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edi+0x54]
        cmp esi, dword ptr ds : [edi+0x58]
        mov ebx, ecx
        je public_6f90f4c
        public_6f90f31 : nop
        mov eax, dword ptr ds : [edi+0x48]
        mov dword ptr ds : [esi+0x48], eax
        mov edx, dword ptr ds : [ebx]
        push esi
        mov ecx, ebx
        call dword ptr ds : [edx+0x64]
        mov eax, dword ptr ds : [edi+0x58]
        add esi, 0x108
        cmp esi, eax
        jne public_6f90f31
        public_6f90f4c : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f90f20)
    }
}

#undef public_6f90f31
#undef public_6f90f4c
