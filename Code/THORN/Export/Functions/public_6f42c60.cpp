#include "THORN-PCH.h"


#define public_6f42c7c _public_6f42c7c
#define public_6f42c8c _public_6f42c8c
#define public_6f42c9c _public_6f42c9c

PROC_DECLARE(0x6f42c60, internal_6f42c60, public_6f42c60);
extern "C" NAKED register_t __cdecl internal_6f42c60()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xD0]
        xor ebx, ebx
        cmp eax, ebx
        je public_6f42c7c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xD0], ebx
        public_6f42c7c : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        je public_6f42c8c
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x10], ebx
        public_6f42c8c : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_6f42c9c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x14], ebx
        public_6f42c9c : nop
        mov byte ptr ds : [esi+0x6C], bl
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f42c60)
    }
}

#undef public_6f42c7c
#undef public_6f42c8c
#undef public_6f42c9c
