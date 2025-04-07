#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f416b0);

#define public_6f41801 _public_6f41801
#define public_6f41811 _public_6f41811
#define public_6f41821 _public_6f41821
#define public_6f41837 _public_6f41837

PROC_DECLARE(0x6f417e0, internal_6f417e0, public_6f417e0);
extern "C" NAKED register_t __cdecl internal_6f417e0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        call public_6f416b0
        mov eax, dword ptr ds : [esi+0xE4]
        xor ebx, ebx
        cmp eax, ebx
        je public_6f41801
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0xE4], ebx
        public_6f41801 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, ebx
        je public_6f41811
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x10], ebx
        public_6f41811 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_6f41821
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x14], ebx
        public_6f41821 : nop
        mov eax, dword ptr ds : [esi+0xE8]
        cmp eax, ebx
        je public_6f41837
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0xE8], ebx
        public_6f41837 : nop
        mov byte ptr ds : [esi+0x6C], bl
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f417e0)
    }
}

#undef public_6f41801
#undef public_6f41811
#undef public_6f41821
#undef public_6f41837
