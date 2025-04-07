#include "Shading-PCH.h"


#define public_6eb8222 _public_6eb8222
#define public_6eb8246 _public_6eb8246
#define public_6eb8248 _public_6eb8248
#define public_6eb8287 _public_6eb8287
#define public_6eb82d5 _public_6eb82d5
#define public_6eb82d7 _public_6eb82d7
#define public_6eb8316 _public_6eb8316
#define public_6eb8386 _public_6eb8386
#define public_6eb8393 _public_6eb8393
#define public_6eb83c0 _public_6eb83c0

PROC_DECLARE(0x6eb81e0, internal_6eb81e0, public_6eb81e0);
extern "C" NAKED register_t __cdecl internal_6eb81e0()
{
    __asm
    {
        sub esp, 0x40
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edi
        lea edx, ds:[esi+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov eax, dword ptr ss : [esp+0x50]
        test eax, eax
        je public_6eb8222
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6eb8222
        mov ecx, dword ptr ds : [eax+0x2C]
        test ecx, ecx
        je public_6eb8222
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x8D
        push eax
        call dword ptr ds : [ecx+0xF0]
        public_6eb8222 : nop
        mov edi, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [edi]
        push ebx
        mov ebx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [ebx+8]
        push ebp
        push eax
        push 0
        push edi
        call dword ptr ds : [edx+0x108]
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, 4
        jb public_6eb8246
        add eax, 0xFFFFFFFC
        jmp public_6eb8248
        public_6eb8246 : nop
        xor eax, eax
        public_6eb8248 : nop
        mov ecx, dword ptr ds : [edi]
        push eax
        push 0xB
        push 0
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [ebx+0x20]
        mov edx, dword ptr ds : [edi]
        inc eax
        push eax
        push 0xD
        push 0
        push edi
        call dword ptr ds : [edx+0xF8]
        mov edx, dword ptr ds : [ebx+0x24]
        mov ecx, dword ptr ds : [edi]
        inc edx
        push edx
        push 0xE
        push 0
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed1abc
        mov eax, 1
        public_6eb8287 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push 0
        push ebx
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6eb8287
        mov al, byte ptr ds : [esi+0x75]
        test al, al
        mov ebp, 1
        je public_6eb8386
        mov ebx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [ebx+0x34]
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        add ebx, 0x2C
        push ecx
        push ebp
        push edi
        call dword ptr ds : [eax+0x108]
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, 4
        jb public_6eb82d5
        add eax, 0xFFFFFFFC
        jmp public_6eb82d7
        public_6eb82d5 : nop
        xor eax, eax
        public_6eb82d7 : nop
        mov edx, dword ptr ds : [edi]
        push eax
        push 0xB
        push 1
        push edi
        call dword ptr ds : [edx+0xF8]
        mov ecx, dword ptr ds : [ebx+0x20]
        mov eax, dword ptr ds : [edi]
        inc ecx
        push ecx
        push 0xD
        push 1
        push edi
        call dword ptr ds : [eax+0xF8]
        mov eax, dword ptr ds : [ebx+0x24]
        mov edx, dword ptr ds : [edi]
        inc eax
        push eax
        push 0xE
        push 1
        push edi
        call dword ptr ds : [edx+0xF8]
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed1af4
        mov eax, 1
        public_6eb8316 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push 1
        push ebx
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6eb8316
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xB
        push 1
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 2
        push 0x18
        push 1
        push eax
        call dword ptr ds : [edx+0xF8]
        xor eax, eax
        mov ecx, 0x10
        lea edi, ss:[esp+0x10]
        rep stosd
        mov eax, dword ptr ds : [esi+0x68]
        mov ecx, eax
        mov dword ptr ss : [esp+0x24], ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 1
        push eax
        call dword ptr ds : [edx+0x100]
        mov ebp, 2
        public_6eb8386 : nop
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed1b2c
        mov eax, 1
        public_6eb8393 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ebx]
        push ecx
        push eax
        push ebp
        push ebx
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6eb8393
        mov esi, dword ptr ds : [esi+4]
        pop ebp
        mov edi, offset public_6ed1a9c
        mov eax, 0x89
        pop ebx
        nop 
        lea esp, ss:[esp]
        public_6eb83c0 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi]
        push ecx
        push eax
        push esi
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6eb83c0
        pop edi
        pop esi
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x6eb81e0)
    }
}

#undef public_6eb8222
#undef public_6eb8246
#undef public_6eb8248
#undef public_6eb8287
#undef public_6eb82d5
#undef public_6eb82d7
#undef public_6eb8316
#undef public_6eb8386
#undef public_6eb8393
#undef public_6eb83c0
