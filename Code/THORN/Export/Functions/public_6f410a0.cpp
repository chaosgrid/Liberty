#include "THORN-PCH.h"


#define public_6f410b6 _public_6f410b6
#define public_6f410cc _public_6f410cc
#define public_6f410e2 _public_6f410e2
#define public_6f410f2 _public_6f410f2
#define public_6f41108 _public_6f41108

PROC_DECLARE(0x6f410a0, internal_6f410a0, public_6f410a0);
extern "C" NAKED register_t __cdecl internal_6f410a0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp eax, ebx
        je public_6f410b6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10], ebx
        public_6f410b6 : nop
        mov eax, dword ptr ds : [esi+0xD0]
        cmp eax, ebx
        je public_6f410cc
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0xD0], ebx
        public_6f410cc : nop
        mov eax, dword ptr ds : [esi+0xCC]
        cmp eax, ebx
        je public_6f410e2
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xCC], ebx
        public_6f410e2 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_6f410f2
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x14], ebx
        public_6f410f2 : nop
        mov eax, dword ptr ds : [esi+0xD4]
        cmp eax, ebx
        je public_6f41108
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xD4], ebx
        public_6f41108 : nop
        mov byte ptr ds : [esi+0x6C], bl
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f410a0)
    }
}

#undef public_6f410b6
#undef public_6f410cc
#undef public_6f410e2
#undef public_6f410f2
#undef public_6f41108
