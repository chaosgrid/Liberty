#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623eb40);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_623eb4d _public_623eb4d
#define public_623eb5e _public_623eb5e
#define public_623eb6b _public_623eb6b
#define public_623eb7c _public_623eb7c
#define public_623eb91 _public_623eb91
#define public_623eba3 _public_623eba3

PROC_DECLARE(0x623eb40, internal_623eb40, public_623eb40);
extern "C" NAKED register_t __cdecl internal_623eb40()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        je public_623eb5e
        public_623eb4d : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x14], ecx
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax+4], edi
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, edi
        jne public_623eb4d
        public_623eb5e : nop
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+0x18], edi
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, edi
        je public_623eb7c
        public_623eb6b : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x1C], edx
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax+4], edi
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, edi
        jne public_623eb6b
        public_623eb7c : nop
        mov dword ptr ds : [esi+0x1C], edi
        mov dword ptr ds : [esi+0x20], edi
        mov eax, dword ptr ds : [esi]
        cmp eax, edi
        je public_623eb91
        push eax
        call public_62460e0
        add esp, 4
        public_623eb91 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], edi
        cmp eax, edi
        je public_623eba3
        push eax
        call public_62460e0
        add esp, 4
        public_623eba3 : nop
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+8], edi
        mov dword ptr ds : [esi+0x10], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x623eb40)
    }
}

#undef public_623eb4d
#undef public_623eb5e
#undef public_623eb6b
#undef public_623eb7c
#undef public_623eb91
#undef public_623eba3
