#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6eb8c62 _public_6eb8c62
#define public_6eb8c82 _public_6eb8c82
#define public_6eb8c86 _public_6eb8c86
#define public_6eb8c8b _public_6eb8c8b
#define public_6eb8d12 _public_6eb8d12
#define public_6eb8d29 _public_6eb8d29
#define public_6eb8d41 _public_6eb8d41
#define public_6eb8d48 _public_6eb8d48
#define public_6eb8d5a _public_6eb8d5a
#define public_6eb8d6c _public_6eb8d6c

PROC_DECLARE(0x6eb8c40, internal_6eb8c40, public_6eb8c40);
extern "C" NAKED register_t __cdecl internal_6eb8c40()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        push esi
        xor ebx, ebx
        xor ecx, ecx
        cmp eax, 0x14
        push edi
        jne public_6eb8d5a
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [ebp+4]
        public_6eb8c62 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_6eb8c86
        cmp al, bl
        je public_6eb8c82
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_6eb8c86
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_6eb8c62
        public_6eb8c82 : nop
        xor eax, eax
        jmp public_6eb8c8b
        public_6eb8c86 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6eb8c8b : nop
        cmp eax, ebx
        jne public_6eb8d5a
        push 0x78
        call public_6ed0c5c
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_6eb8d48
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov byte ptr ds : [esi+0x64], bl
        mov byte ptr ds : [esi+0x65], bl
        lea edx, ds:[esi+0x20]
        xor eax, eax
        mov ecx, 0x11
        mov edi, edx
        rep stosd
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x30], eax
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ds : [esi+0x38], eax
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        lea eax, ds:[esi+0x6C]
        mov dword ptr ds : [eax], offset public_6ed1e1c
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [esi], offset public_6ed1da8
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0x68], ecx
        jne public_6eb8d41
        mov dword ptr ds : [esi+0x68], eax
        public_6eb8d12 : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        mov edi, eax
        cmp edi, ebx
        je public_6eb8d6c
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_6eb8d29
        mov dword ptr ds : [eax], ebx
        public_6eb8d29 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6eb8d41 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        jmp public_6eb8d12
        public_6eb8d48 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], ebx
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 0xC
        public_6eb8d5a : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 0xC
        public_6eb8d6c : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eb8c40)
    }
}

#undef public_6eb8c62
#undef public_6eb8c82
#undef public_6eb8c86
#undef public_6eb8c8b
#undef public_6eb8d12
#undef public_6eb8d29
#undef public_6eb8d41
#undef public_6eb8d48
#undef public_6eb8d5a
#undef public_6eb8d6c
