#include "FLMaterials-PCH.h"


#define public_66f8960 _public_66f8960
#define public_66f89be _public_66f89be
#define public_66f89c0 _public_66f89c0
#define public_66f8a10 _public_66f8a10
#define public_66f8a2e _public_66f8a2e
#define public_66f8a49 _public_66f8a49
#define public_66f8a4b _public_66f8a4b
#define public_66f8a96 _public_66f8a96
#define public_66f8ada _public_66f8ada
#define public_66f8adc _public_66f8adc
#define public_66f8b9b _public_66f8b9b
#define public_66f8bb0 _public_66f8bb0

PROC_DECLARE(0x66f8940, internal_66f8940, public_66f8940);
extern "C" NAKED register_t __cdecl internal_66f8940()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebx, dword ptr ds : [esi+4]
        push edi
        mov dword ptr ds : [esi+0x84], 0
        mov edi, offset public_6702094
        mov eax, 0x89
        mov edi, edi
        public_66f8960 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_66f8960
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push ebp
        push 1
        push 0x8D
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov al, byte ptr ds : [esi+0x71]
        test al, al
        mov ebp, dword ptr ds : [esi+0x18]
        mov edi, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [esi+0x84]
        jne public_66f8a2e
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [edi]
        push eax
        push ebx
        push edi
        call dword ptr ds : [edx+0x108]
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, 4
        jb public_66f89be
        add eax, 0xFFFFFFFC
        jmp public_66f89c0
        public_66f89be : nop
        xor eax, eax
        public_66f89c0 : nop
        mov ecx, dword ptr ds : [edi]
        push eax
        push 0xB
        push ebx
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ss : [ebp+0x20]
        mov edx, dword ptr ds : [edi]
        inc eax
        push eax
        push 0xD
        push ebx
        push edi
        call dword ptr ds : [edx+0xF8]
        mov edx, dword ptr ss : [ebp+0x24]
        mov ecx, dword ptr ds : [edi]
        inc edx
        push edx
        push 0xE
        push ebx
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov ebp, dword ptr ds : [esi+0x84]
        mov ebx, dword ptr ds : [esi+4]
        lea eax, ss:[ebp+1]
        mov dword ptr ds : [esi+0x84], eax
        mov edi, offset public_67020c4
        mov eax, 1
        nop 
        lea esp, ss:[esp]
        public_66f8a10 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebp
        push ebx
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_66f8a10
        jmp public_66f8b9b
        public_66f8a2e : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edi]
        push ecx
        push ebx
        push edi
        call dword ptr ds : [eax+0x108]
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, 4
        jb public_66f8a49
        add eax, 0xFFFFFFFC
        jmp public_66f8a4b
        public_66f8a49 : nop
        xor eax, eax
        public_66f8a4b : nop
        mov edx, dword ptr ds : [edi]
        push eax
        push 0xB
        push ebx
        push edi
        call dword ptr ds : [edx+0xF8]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov eax, dword ptr ds : [edi]
        inc ecx
        push ecx
        push 0xD
        push ebx
        push edi
        call dword ptr ds : [eax+0xF8]
        mov eax, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ds : [edi]
        inc eax
        push eax
        push 0xE
        push ebx
        push edi
        call dword ptr ds : [edx+0xF8]
        mov ebx, dword ptr ds : [esi+0x84]
        mov ebp, dword ptr ds : [esi+4]
        lea ecx, ds:[ebx+1]
        mov dword ptr ds : [esi+0x84], ecx
        mov edi, offset public_67020c4
        mov eax, 1
        public_66f8a96 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ss : [ebp]
        push ecx
        push eax
        push ebx
        push ebp
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_66f8a96
        mov ebx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [ebx+0x34]
        mov ebp, dword ptr ds : [esi+0x84]
        mov edi, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edi]
        add ebx, 0x2C
        push eax
        push ebp
        push edi
        call dword ptr ds : [edx+0x108]
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, 4
        jb public_66f8ada
        add eax, 0xFFFFFFFC
        jmp public_66f8adc
        public_66f8ada : nop
        xor eax, eax
        public_66f8adc : nop
        mov ecx, dword ptr ds : [edi]
        push eax
        push 0xB
        push ebp
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ds : [edi]
        inc eax
        push eax
        push 0xD
        push ebp
        push edi
        call dword ptr ds : [edx+0xF8]
        mov edx, dword ptr ds : [ebx+0x24]
        mov ecx, dword ptr ds : [edi]
        inc edx
        push edx
        push 0xE
        push ebp
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 7
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 2
        push edx
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 3
        push edx
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 4
        push 4
        push edx
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 5
        push edx
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 6
        push edx
        push eax
        call dword ptr ds : [ecx+0xF8]
        inc dword ptr ds : [esi+0x84]
        public_66f8b9b : nop
        mov ebx, dword ptr ds : [esi+0x84]
        mov esi, dword ptr ds : [esi+4]
        mov edi, offset public_67020fc
        mov eax, 1
        pop ebp
        nop 
        public_66f8bb0 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [esi]
        push edx
        push eax
        push ebx
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_66f8bb0
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x66f8940)
    }
}

#undef public_66f8960
#undef public_66f89be
#undef public_66f89c0
#undef public_66f8a10
#undef public_66f8a2e
#undef public_66f8a49
#undef public_66f8a4b
#undef public_66f8a96
#undef public_66f8ada
#undef public_66f8adc
#undef public_66f8b9b
#undef public_66f8bb0
