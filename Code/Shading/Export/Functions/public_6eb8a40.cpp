#include "Shading-PCH.h"


#define public_6eb8a7f _public_6eb8a7f
#define public_6eb8aa2 _public_6eb8aa2
#define public_6eb8aa4 _public_6eb8aa4
#define public_6eb8ae3 _public_6eb8ae3
#define public_6eb8b10 _public_6eb8b10
#define public_6eb8b38 _public_6eb8b38

PROC_DECLARE(0x6eb8a40, internal_6eb8a40, public_6eb8a40);
extern "C" NAKED register_t __cdecl internal_6eb8a40()
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
        je public_6eb8a7f
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6eb8a7f
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_6eb8a7f
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x8D
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_6eb8a7f : nop
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
        jb public_6eb8aa2
        add eax, 0xFFFFFFFC
        jmp public_6eb8aa4
        public_6eb8aa2 : nop
        xor eax, eax
        public_6eb8aa4 : nop
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
        mov esi, offset public_6ed1c84
        mov eax, 1
        public_6eb8ae3 : nop
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
        jne public_6eb8ae3
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed1cbc
        mov eax, 1
        lea ebx, ds:[ebx]
        public_6eb8b10 : nop
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
        jne public_6eb8b10
        mov ebx, dword ptr ds : [ebx+4]
        mov esi, offset public_6ed1c54
        mov eax, 0x89
        pop edi
        public_6eb8b38 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_6eb8b38
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6eb8a40)
    }
}

#undef public_6eb8a7f
#undef public_6eb8aa2
#undef public_6eb8aa4
#undef public_6eb8ae3
#undef public_6eb8b10
#undef public_6eb8b38
