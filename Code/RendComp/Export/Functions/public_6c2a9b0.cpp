#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c2a9d2 _public_6c2a9d2
#define public_6c2a9e7 _public_6c2a9e7
#define public_6c2a9fa _public_6c2a9fa
#define public_6c2aa03 _public_6c2aa03
#define public_6c2aa1d _public_6c2aa1d
#define public_6c2aa25 _public_6c2aa25

PROC_DECLARE(0x6c2a9b0, internal_6c2a9b0, public_6c2a9b0);
extern "C" NAKED register_t __cdecl internal_6c2a9b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        push edi
        mov dword ptr ds : [esi+0xC], 0xBF800000
        je public_6c2a9fa
        mov eax, dword ptr ds : [esi+8]
        xor edi, edi
        test eax, eax
        jbe public_6c2a9e7
        push ebx
        mov ebx, dword ptr ds : [public_6c3603c]
        public_6c2a9d2 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+edi*4]
        push ecx
        call ebx
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        inc edi
        cmp edi, eax
        jb public_6c2a9d2
        pop ebx
        public_6c2a9e7 : nop
        mov edx, dword ptr ds : [esi+0x14]
        push edx
        call public_6c34ea0
        add esp, 4
        mov dword ptr ds : [esi+0x14], 0
        public_6c2a9fa : nop
        mov eax, dword ptr ds : [esi+8]
        xor edi, edi
        test eax, eax
        jbe public_6c2aa25
        public_6c2aa03 : nop
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax+edi*4]
        test eax, eax
        je public_6c2aa1d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+edi*4], 0
        public_6c2aa1d : nop
        mov eax, dword ptr ds : [esi+8]
        inc edi
        cmp edi, eax
        jb public_6c2aa03
        public_6c2aa25 : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6c34ea0
        add esp, 4
        pop edi
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi+8], 0
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6c2a9b0)
    }
}

#undef public_6c2a9d2
#undef public_6c2a9e7
#undef public_6c2a9fa
#undef public_6c2aa03
#undef public_6c2aa1d
#undef public_6c2aa25
