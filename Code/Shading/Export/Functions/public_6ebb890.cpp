#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7120);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7550);
CLANG_FORWARD_PROC_SYMBOL(public_6ebb890);

#define public_6ebb8d4 _public_6ebb8d4
#define public_6ebb8d6 _public_6ebb8d6
#define public_6ebb915 _public_6ebb915
#define public_6ebb940 _public_6ebb940
#define public_6ebb967 _public_6ebb967
#define public_6ebb98a _public_6ebb98a
#define public_6ebb9b0 _public_6ebb9b0
#define public_6ebb9d7 _public_6ebb9d7
#define public_6ebba00 _public_6ebba00
#define public_6ebba85 _public_6ebba85
#define public_6ebbab7 _public_6ebbab7
#define public_6ebbab9 _public_6ebbab9
#define public_6ebbb50 _public_6ebbb50
#define public_6ebbb77 _public_6ebbb77
#define public_6ebbba0 _public_6ebbba0
#define public_6ebbbc7 _public_6ebbbc7
#define public_6ebbc30 _public_6ebbc30

PROC_DECLARE(0x6ebb890, internal_6ebb890, public_6ebb890);
extern "C" NAKED register_t __cdecl internal_6ebb890()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+0x78], 1
        push edi
        jne public_6ebb98a
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov ebx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        push ecx
        push 0
        push edi
        call dword ptr ds : [eax+0x108]
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, 4
        jb public_6ebb8d4
        add eax, 0xFFFFFFFC
        jmp public_6ebb8d6
        public_6ebb8d4 : nop
        xor eax, eax
        public_6ebb8d6 : nop
        mov edx, dword ptr ds : [edi]
        push eax
        push 0xB
        push 0
        push edi
        call dword ptr ds : [edx+0xF8]
        mov ecx, dword ptr ds : [ebx+0x20]
        mov eax, dword ptr ds : [edi]
        inc ecx
        push ecx
        push 0xD
        push 0
        push edi
        call dword ptr ds : [eax+0xF8]
        mov eax, dword ptr ds : [ebx+0x24]
        mov edx, dword ptr ds : [edi]
        inc eax
        push eax
        push 0xE
        push 0
        push edi
        call dword ptr ds : [edx+0xF8]
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed225c
        mov eax, 1
        public_6ebb915 : nop
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
        jne public_6ebb915
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed22cc
        mov eax, 1
        lea esp, ss:[esp]
        public_6ebb940 : nop
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
        jne public_6ebb940
        mov esi, dword ptr ds : [esi+4]
        mov edi, offset public_6ed220c
        mov eax, 0x89
        public_6ebb967 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [esi]
        push edx
        push eax
        push esi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6ebb967
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x40
        ret 4
        public_6ebb98a : nop
        mov eax, dword ptr ss : [esp+0x50]
        sub eax, 0
        je public_6ebba85
        dec eax
        jne public_6ebbc30
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed2294
        mov eax, 1
        nop 
        lea esp, ss:[esp]
        public_6ebb9b0 : nop
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
        jne public_6ebb9b0
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed22cc
        mov eax, 1
        public_6ebb9d7 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push 2
        push ebx
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6ebb9d7
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed222c
        mov eax, 0x89
        mov edi, edi
        public_6ebba00 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6ebba00
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+0x18]
        push 1
        push eax
        add ecx, 0x58
        call public_6eb7120
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
        lea edi, ss:[esp+0xC]
        rep stosd
        mov eax, dword ptr ds : [esi+0x6C]
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], eax
        mov ecx, eax
        lea eax, ss:[esp+0xC]
        push eax
        push 1
        mov dword ptr ss : [esp+0x28], ecx
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x100]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x40
        ret 4
        public_6ebba85 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0xAC]
        mov ebx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [ebx+8]
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        push ecx
        push 0
        push edi
        call dword ptr ds : [eax+0x108]
        mov eax, dword ptr ds : [ebx+0x1C]
        cmp eax, 4
        jb public_6ebbab7
        add eax, 0xFFFFFFFC
        jmp public_6ebbab9
        public_6ebbab7 : nop
        xor eax, eax
        public_6ebbab9 : nop
        mov edx, dword ptr ds : [edi]
        push ebp
        push eax
        push 0xB
        push 0
        push edi
        call dword ptr ds : [edx+0xF8]
        mov ecx, dword ptr ds : [ebx+0x20]
        mov eax, dword ptr ds : [edi]
        inc ecx
        push ecx
        push 0xD
        push 0
        push edi
        call dword ptr ds : [eax+0xF8]
        mov eax, dword ptr ds : [ebx+0x24]
        mov edx, dword ptr ds : [edi]
        inc eax
        push eax
        push 0xE
        push 0
        push edi
        call dword ptr ds : [edx+0xF8]
        mov ebx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [ebx+0x34]
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        add ebx, 0x2C
        push edx
        push 1
        push edi
        call dword ptr ds : [ecx+0x108]
        mov eax, dword ptr ds : [ebx+0x1C]
        mov ebp, dword ptr ds : [edi]
        push eax
        call public_6eb7550
        add esp, 4
        push eax
        push 0xB
        push 1
        push edi
        call dword ptr ss : [ebp+0xF8]
        mov edx, dword ptr ds : [ebx+0x20]
        mov ecx, dword ptr ds : [edi]
        inc edx
        push edx
        push 0xD
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov ecx, dword ptr ds : [ebx+0x24]
        mov eax, dword ptr ds : [edi]
        inc ecx
        push ecx
        push 0xE
        push 1
        push edi
        call dword ptr ds : [eax+0xF8]
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed225c
        mov eax, 1
        pop ebp
        public_6ebbb50 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ebx]
        push ecx
        push eax
        push 0
        push ebx
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6ebbb50
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed2294
        mov eax, 1
        public_6ebbb77 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ebx]
        push ecx
        push eax
        push 1
        push ebx
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6ebbb77
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed22cc
        mov eax, 1
        mov edi, edi
        public_6ebbba0 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ebx]
        push ecx
        push eax
        push 2
        push ebx
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6ebbba0
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed220c
        mov eax, 0x89
        public_6ebbbc7 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [ebx]
        push ecx
        push eax
        push ebx
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6ebbbc7
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax]
        push 0
        push 0xB
        push 1
        push eax
        call dword ptr ds : [edx+0xF8]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 0x18
        push 1
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [esi+0x68]
        mov esi, dword ptr ds : [esi+4]
        xor eax, eax
        mov ecx, 0x10
        lea edi, ss:[esp+0xC]
        rep stosd
        mov dword ptr ss : [esp+0xC], edx
        mov eax, edx
        lea edx, ss:[esp+0xC]
        push edx
        push 1
        mov dword ptr ss : [esp+0x28], eax
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x100]
        public_6ebbc30 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x40
        ret 4
        UNREACHABLE_TRAP(0x6ebb890)
    }
}

#undef public_6ebb8d4
#undef public_6ebb8d6
#undef public_6ebb915
#undef public_6ebb940
#undef public_6ebb967
#undef public_6ebb98a
#undef public_6ebb9b0
#undef public_6ebb9d7
#undef public_6ebba00
#undef public_6ebba85
#undef public_6ebbab7
#undef public_6ebbab9
#undef public_6ebbb50
#undef public_6ebbb77
#undef public_6ebbba0
#undef public_6ebbbc7
#undef public_6ebbc30
