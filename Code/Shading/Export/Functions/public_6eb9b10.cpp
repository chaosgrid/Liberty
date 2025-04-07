#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7550);
CLANG_FORWARD_PROC_SYMBOL(public_6eb9b10);

#define public_6eb9b40 _public_6eb9b40
#define public_6eb9b67 _public_6eb9b67
#define public_6eb9b90 _public_6eb9b90
#define public_6eb9bb7 _public_6eb9bb7
#define public_6eb9c70 _public_6eb9c70
#define public_6eb9ca2 _public_6eb9ca2
#define public_6eb9ca4 _public_6eb9ca4
#define public_6eb9ce3 _public_6eb9ce3
#define public_6eb9d31 _public_6eb9d31
#define public_6eb9d33 _public_6eb9d33
#define public_6eb9d72 _public_6eb9d72
#define public_6eb9de2 _public_6eb9de2
#define public_6eb9df0 _public_6eb9df0
#define public_6eb9e16 _public_6eb9e16
#define public_6eb9e2e _public_6eb9e2e

PROC_DECLARE(0x6eb9b10, internal_6eb9b10, public_6eb9b10);
extern "C" NAKED register_t __cdecl internal_6eb9b10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x40
        sub eax, 0
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        je public_6eb9c70
        dec eax
        jne public_6eb9e2e
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed1f3c
        mov eax, 1
        lea ebx, ds:[ebx]
        public_6eb9b40 : nop
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
        jne public_6eb9b40
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed1f04
        mov eax, 1
        public_6eb9b67 : nop
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
        jne public_6eb9b67
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed1f74
        mov eax, 1
        mov edi, edi
        public_6eb9b90 : nop
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
        jne public_6eb9b90
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed1e9c
        mov eax, 0x89
        public_6eb9bb7 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [ebx]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6eb9bb7
        mov ebx, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [ebx+0x60]
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        add ebx, 0x58
        push ecx
        push 1
        push edi
        call dword ptr ds : [eax+0x108]
        mov edx, dword ptr ds : [ebx+0x1C]
        mov ebp, dword ptr ds : [edi]
        push edx
        call public_6eb7550
        add esp, 4
        push eax
        push 0xB
        push 1
        push edi
        call dword ptr ss : [ebp+0xF8]
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
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 0x18
        push 1
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [esi+0x6C]
        mov esi, dword ptr ds : [esi+4]
        xor eax, eax
        mov ecx, 0x10
        lea edi, ss:[esp+0x10]
        rep stosd
        mov dword ptr ss : [esp+0x10], edx
        mov eax, edx
        lea edx, ss:[esp+0x10]
        push edx
        push 1
        mov dword ptr ss : [esp+0x2C], eax
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x100]
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x40
        ret 4
        public_6eb9c70 : nop
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
        jb public_6eb9ca2
        add eax, 0xFFFFFFFC
        jmp public_6eb9ca4
        public_6eb9ca2 : nop
        xor eax, eax
        public_6eb9ca4 : nop
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
        mov edi, offset public_6ed1ecc
        mov eax, 1
        public_6eb9ce3 : nop
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
        jne public_6eb9ce3
        mov al, byte ptr ds : [esi+0x7D]
        test al, al
        mov ebp, 1
        je public_6eb9de2
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
        jb public_6eb9d31
        add eax, 0xFFFFFFFC
        jmp public_6eb9d33
        public_6eb9d31 : nop
        xor eax, eax
        public_6eb9d33 : nop
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
        mov edi, offset public_6ed1f04
        mov eax, 1
        public_6eb9d72 : nop
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
        jne public_6eb9d72
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
        public_6eb9de2 : nop
        mov ebx, dword ptr ds : [esi+4]
        mov edi, offset public_6ed1f74
        mov eax, 1
        nop 
        public_6eb9df0 : nop
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
        jne public_6eb9df0
        mov esi, dword ptr ds : [esi+4]
        mov edi, offset public_6ed1e7c
        mov eax, 0x89
        public_6eb9e16 : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi]
        push ecx
        push eax
        push esi
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_6eb9e16
        public_6eb9e2e : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x40
        ret 4
        UNREACHABLE_TRAP(0x6eb9b10)
    }
}

#undef public_6eb9b40
#undef public_6eb9b67
#undef public_6eb9b90
#undef public_6eb9bb7
#undef public_6eb9c70
#undef public_6eb9ca2
#undef public_6eb9ca4
#undef public_6eb9ce3
#undef public_6eb9d31
#undef public_6eb9d33
#undef public_6eb9d72
#undef public_6eb9de2
#undef public_6eb9df0
#undef public_6eb9e16
#undef public_6eb9e2e
