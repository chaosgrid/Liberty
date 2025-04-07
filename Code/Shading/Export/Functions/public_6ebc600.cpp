#include "Shading-PCH.h"


#define public_6ebc63f _public_6ebc63f
#define public_6ebc662 _public_6ebc662
#define public_6ebc664 _public_6ebc664
#define public_6ebc6a3 _public_6ebc6a3
#define public_6ebc6d0 _public_6ebc6d0
#define public_6ebc6f8 _public_6ebc6f8

PROC_DECLARE(0x6ebc600, internal_6ebc600, public_6ebc600);
extern "C" NAKED register_t __cdecl internal_6ebc600()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push esi
        lea edx, ds:[ebx+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6ebc63f
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6ebc63f
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_6ebc63f
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x8D
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_6ebc63f : nop
        mov esi, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ds : [edi+8]
        push eax
        push 0
        push esi
        call dword ptr ds : [edx+0x108]
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, 4
        jb public_6ebc662
        add eax, 0xFFFFFFFC
        jmp public_6ebc664
        public_6ebc662 : nop
        xor eax, eax
        public_6ebc664 : nop
        mov ecx, dword ptr ds : [esi]
        push eax
        push 0xB
        push 0
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+0x20]
        mov edx, dword ptr ds : [esi]
        inc eax
        push eax
        push 0xD
        push 0
        push esi
        call dword ptr ds : [edx+0xF8]
        mov edx, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [esi]
        inc edx
        push edx
        push 0xE
        push 0
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed23fc
        mov eax, 1
        public_6ebc6a3 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 0
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6ebc6a3
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed2434
        mov eax, 1
        lea ebx, ds:[ebx]
        public_6ebc6d0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6ebc6d0
        mov ebx, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed23cc
        mov eax, 0x89
        pop edi
        public_6ebc6f8 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6ebc6f8
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ebc600)
    }
}

#undef public_6ebc63f
#undef public_6ebc662
#undef public_6ebc664
#undef public_6ebc6a3
#undef public_6ebc6d0
#undef public_6ebc6f8
