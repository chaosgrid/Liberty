#include "THORN-PCH.h"


#define public_6f426a6 _public_6f426a6
#define public_6f426bc _public_6f426bc
#define public_6f426cc _public_6f426cc
#define public_6f426e2 _public_6f426e2

PROC_DECLARE(0x6f42690, internal_6f42690, public_6f42690);
extern "C" NAKED register_t __cdecl internal_6f42690()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        xor ebx, ebx
        cmp eax, ebx
        je public_6f426a6
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10], ebx
        public_6f426a6 : nop
        mov eax, dword ptr ds : [esi+0xE8]
        cmp eax, ebx
        je public_6f426bc
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0xE8], ebx
        public_6f426bc : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_6f426cc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x14], ebx
        public_6f426cc : nop
        mov eax, dword ptr ds : [esi+0xEC]
        cmp eax, ebx
        je public_6f426e2
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0xEC], ebx
        public_6f426e2 : nop
        mov byte ptr ds : [esi+0x6C], bl
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f42690)
    }
}

#undef public_6f426a6
#undef public_6f426bc
#undef public_6f426cc
#undef public_6f426e2
