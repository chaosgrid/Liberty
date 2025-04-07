#include "FLMaterials-PCH.h"


#define public_66f6a89 _public_66f6a89
#define public_66f6a8b _public_66f6a8b
#define public_66f6ad0 _public_66f6ad0
#define public_66f6af7 _public_66f6af7
#define public_66f6b20 _public_66f6b20

PROC_DECLARE(0x66f6a60, internal_66f6a60, public_66f6a60);
extern "C" NAKED register_t __cdecl internal_66f6a60()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        push 0
        push esi
        call dword ptr ds : [eax+0x108]
        mov eax, dword ptr ds : [edi+0x1C]
        cmp eax, 4
        jb public_66f6a89
        add eax, 0xFFFFFFFC
        jmp public_66f6a8b
        public_66f6a89 : nop
        xor eax, eax
        public_66f6a8b : nop
        mov edx, dword ptr ds : [esi]
        push eax
        push 0xB
        push 0
        push esi
        call dword ptr ds : [edx+0xF8]
        mov ecx, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [esi]
        inc ecx
        push ecx
        push 0xD
        push 0
        push esi
        call dword ptr ds : [eax+0xF8]
        mov eax, dword ptr ds : [edi+0x24]
        mov edx, dword ptr ds : [esi]
        inc eax
        push eax
        push 0xE
        push 0
        push esi
        call dword ptr ds : [edx+0xF8]
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6701be8
        mov eax, 1
        lea ebx, ds:[ebx]
        public_66f6ad0 : nop
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
        jne public_66f6ad0
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6701c20
        mov eax, 1
        public_66f6af7 : nop
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
        jne public_66f6af7
        mov edi, dword ptr ds : [ebx+4]
        mov esi, offset public_6701bb8
        mov eax, 0x89
        mov edi, edi
        public_66f6b20 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_66f6b20
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x66f6a60)
    }
}

#undef public_66f6a89
#undef public_66f6a8b
#undef public_66f6ad0
#undef public_66f6af7
#undef public_66f6b20
