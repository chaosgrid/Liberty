#include "Shading-PCH.h"


#define public_6eb5140 _public_6eb5140
#define public_6eb5150 _public_6eb5150
#define public_6eb518a _public_6eb518a
#define public_6eb518c _public_6eb518c
#define public_6eb51d0 _public_6eb51d0
#define public_6eb521a _public_6eb521a
#define public_6eb521c _public_6eb521c
#define public_6eb5260 _public_6eb5260
#define public_6eb527a _public_6eb527a
#define public_6eb5288 _public_6eb5288

PROC_DECLARE(0x6eb5100, internal_6eb5100, public_6eb5100);
extern "C" NAKED register_t __cdecl internal_6eb5100()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push esi
        lea edx, ds:[ebx+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_6eb5140
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6eb5140
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_6eb5140
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x8D
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_6eb5140 : nop
        push edi
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed1484
        mov eax, 0x89
        mov edi, edi
        public_6eb5150 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edi]
        push ecx
        push eax
        push edi
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6eb5150
        mov edi, dword ptr ds : [ebx+0x18]
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [esi]
        push eax
        push 0
        push esi
        call dword ptr ds : [edx+0x108]
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, 4
        jb public_6eb518a
        add eax, 0xFFFFFFFC
        jmp public_6eb518c
        public_6eb518a : nop
        xor eax, eax
        public_6eb518c : nop
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
        mov ebp, 1
        mov esi, offset public_6ed14a4
        mov eax, ebp
        lea ecx, ds:[ecx]
        public_6eb51d0 : nop
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
        jne public_6eb51d0
        mov al, byte ptr ds : [ebx+0x69]
        test al, al
        je public_6eb527a
        mov edi, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [edi+0x34]
        mov esi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [esi]
        add edi, 0x2C
        push ecx
        push 1
        push esi
        call dword ptr ds : [eax+0x108]
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, 4
        jb public_6eb521a
        add eax, 0xFFFFFFFC
        jmp public_6eb521c
        public_6eb521a : nop
        xor eax, eax
        public_6eb521c : nop
        mov edx, dword ptr ds : [esi]
        push eax
        push 0xB
        push 1
        push esi
        call dword ptr ds : [edx+0xF8]
        mov ecx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [esi]
        inc ecx
        push ecx
        push 0xD
        push 1
        push esi
        call dword ptr ds : [eax+0xF8]
        mov eax, dword ptr ds : [edi+0x24]
        mov edx, dword ptr ds : [esi]
        inc eax
        push eax
        push 0xE
        push 1
        push esi
        call dword ptr ds : [edx+0xF8]
        mov edi, dword ptr ds : [ebx+4]
        mov ebp, 2
        mov esi, offset public_6ed14dc
        mov eax, 1
        public_6eb5260 : nop
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
        jne public_6eb5260
        public_6eb527a : nop
        mov ebx, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed1514
        mov eax, 1
        pop edi
        public_6eb5288 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebp
        push ebx
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6eb5288
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eb5100)
    }
}

#undef public_6eb5140
#undef public_6eb5150
#undef public_6eb518a
#undef public_6eb518c
#undef public_6eb51d0
#undef public_6eb521a
#undef public_6eb521c
#undef public_6eb5260
#undef public_6eb527a
#undef public_6eb5288
