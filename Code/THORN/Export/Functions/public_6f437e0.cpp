#include "THORN-PCH.h"


#define public_6f437f6 _public_6f437f6
#define public_6f4380c _public_6f4380c
#define public_6f4381c _public_6f4381c

PROC_DECLARE(0x6f437e0, internal_6f437e0, public_6f437e0);
extern "C" NAKED register_t __cdecl internal_6f437e0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp eax, ebx
        je public_6f437f6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10], ebx
        public_6f437f6 : nop
        mov eax, dword ptr ds : [esi+0xCC]
        cmp eax, ebx
        je public_6f4380c
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0xCC], ebx
        public_6f4380c : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_6f4381c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x14], ebx
        public_6f4381c : nop
        mov byte ptr ds : [esi+0x6C], bl
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f437e0)
    }
}

#undef public_6f437f6
#undef public_6f4380c
#undef public_6f4381c
