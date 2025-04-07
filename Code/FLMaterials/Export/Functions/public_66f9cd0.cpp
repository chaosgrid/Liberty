#include "FLMaterials-PCH.h"


#define public_66f9d11 _public_66f9d11
#define public_66f9d35 _public_66f9d35
#define public_66f9d37 _public_66f9d37
#define public_66f9d76 _public_66f9d76
#define public_66f9da0 _public_66f9da0
#define public_66f9dd0 _public_66f9dd0
#define public_66f9dea _public_66f9dea
#define public_66f9df0 _public_66f9df0
#define public_66f9e08 _public_66f9e08
#define public_66f9e44 _public_66f9e44

PROC_DECLARE(0x66f9cd0, internal_66f9cd0, public_66f9cd0);
extern "C" NAKED register_t __cdecl internal_66f9cd0()
{
    __asm
    {
        sub esp, 0x40
        push edi
        mov edi, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[edi+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ss : [esp+0x4C]
        test eax, eax
        je public_66f9d11
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_66f9d11
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_66f9d11
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x8D
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_66f9d11 : nop
        push ebx
        mov ebx, dword ptr ds : [edi+0x18]
        mov eax, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi]
        push eax
        push 0
        push esi
        call dword ptr ds : [edx+0x108]
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, 4
        jb public_66f9d35
        add eax, 0xFFFFFFFC
        jmp public_66f9d37
        public_66f9d35 : nop
        xor eax, eax
        public_66f9d37 : nop
        mov ecx, dword ptr ds : [esi]
        push eax
        push 0xB
        push 0
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ds : [esi]
        inc eax
        push eax
        push 0xD
        push 0
        push esi
        call dword ptr ds : [edx+0xF8]
        mov edx, dword ptr ds : [ebx+0x24]
        mov ecx, dword ptr ds : [esi]
        inc edx
        push edx
        push 0xE
        push 0
        push esi
        call dword ptr ds : [ecx+0xF8]
        mov ebx, dword ptr ds : [edi+4]
        mov esi, offset public_6702344
        mov eax, 1
        public_66f9d76 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push 0
        push ebx
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_66f9d76
        mov ebx, dword ptr ds : [edi+4]
        mov esi, offset public_670237c
        mov eax, 1
        lea ecx, ds:[ecx]
        public_66f9da0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push 1
        push ebx
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_66f9da0
        mov al, byte ptr ds : [edi+0x64]
        mov ebx, dword ptr ds : [edi+4]
        test al, al
        mov eax, 0x89
        je public_66f9dea
        mov esi, offset public_6702314
        mov edi, edi
        public_66f9dd0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_66f9dd0
        jmp public_66f9e08
        public_66f9dea : nop
        mov esi, offset public_67022f4
        nop 
        public_66f9df0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_66f9df0
        public_66f9e08 : nop
        mov ecx, dword ptr ds : [edi+0x68]
        test ecx, ecx
        pop esi
        pop ebx
        je public_66f9e44
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+4]
        push edx
        call dword ptr ds : [eax+0x18]
        test al, al
        je public_66f9e44
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 0x18
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edi, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+4]
        push eax
        push 0
        push edi
        call dword ptr ds : [edx+0x100]
        public_66f9e44 : nop
        xor eax, eax
        pop edi
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x66f9cd0)
    }
}

#undef public_66f9d11
#undef public_66f9d35
#undef public_66f9d37
#undef public_66f9d76
#undef public_66f9da0
#undef public_66f9dd0
#undef public_66f9dea
#undef public_66f9df0
#undef public_66f9e08
#undef public_66f9e44
