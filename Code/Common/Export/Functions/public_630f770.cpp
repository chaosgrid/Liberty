#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630f770);

#define public_630f7ca _public_630f7ca
#define public_630f7d3 _public_630f7d3
#define public_630f809 _public_630f809
#define public_630f80b _public_630f80b
#define public_630f838 _public_630f838
#define public_630f841 _public_630f841
#define public_630f84a _public_630f84a
#define public_630f87e _public_630f87e
#define public_630f887 _public_630f887
#define public_630f8bc _public_630f8bc
#define public_630f8be _public_630f8be
#define public_630f8e7 _public_630f8e7
#define public_630f8f0 _public_630f8f0
#define public_630f8f4 _public_630f8f4
#define public_630f8f9 _public_630f8f9
#define public_630f910 _public_630f910

PROC_DECLARE(0x630f770, internal_630f770, public_630f770);
extern "C" NAKED register_t __cdecl internal_630f770()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x1564]
        push edi
        xor edi, edi
        test al, al
        mov eax, dword ptr ds : [public_63991c0]
        mov ebp, dword ptr ds : [eax]
        je public_630f84a
        mov ebx, dword ptr ds : [esi+0x142C]
        add esi, 0x1428
        cmp ebx, edi
        je public_630f7ca
        mov al, byte ptr ds : [ebx-1]
        test al, al
        je public_630f7ca
        cmp al, 0xFF
        je public_630f7ca
        push 1
        mov ecx, esi
        call dword ptr ds : [public_63991b8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_63991a4]
        xor edi, edi
        public_630f7ca : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        jae public_630f7d3
        mov ebp, eax
        public_630f7d3 : nop
        cmp ebp, edi
        jbe public_630f80b
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[ecx+ebp]
        push edx
        push ecx
        call dword ptr ds : [public_6399330]
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_630f809
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov byte ptr ds : [edi+eax], 0
        public_630f809 : nop
        xor edi, edi
        public_630f80b : nop
        mov eax, dword ptr ds : [esi+0x10]
        or ebp, 0xFFFFFFFF
        cmp eax, ebp
        je public_630f8f9
        cmp dword ptr ds : [esi+0x14], edi
        mov ebx, dword ptr ds : [public_639913c]
        je public_630f841
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, edi
        je public_630f838
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        public_630f838 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        push ecx
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        public_630f841 : nop
        mov edx, dword ptr ds : [esi+0x10]
        push edx
        jmp public_630f8f4
        public_630f84a : nop
        mov ebx, dword ptr ds : [esi+4]
        cmp ebx, edi
        je public_630f87e
        mov al, byte ptr ds : [ebx-1]
        test al, al
        je public_630f87e
        cmp al, 0xFF
        je public_630f87e
        push 1
        mov ecx, esi
        call dword ptr ds : [public_63991b8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        push ecx
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_63991a4]
        xor edi, edi
        public_630f87e : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        jae public_630f887
        mov ebp, eax
        public_630f887 : nop
        cmp ebp, edi
        jbe public_630f8be
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[ecx+ebp]
        push edx
        push ecx
        call dword ptr ds : [public_6399330]
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_630f8bc
        push edi
        mov ecx, esi
        call dword ptr ds : [public_63991d8]
        public_630f8bc : nop
        xor edi, edi
        public_630f8be : nop
        mov eax, dword ptr ds : [esi+0x10]
        or ebp, 0xFFFFFFFF
        cmp eax, ebp
        je public_630f8f9
        cmp dword ptr ds : [esi+0x14], edi
        mov ebx, dword ptr ds : [public_639913c]
        je public_630f8f0
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, edi
        je public_630f8e7
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [esi+0x1C], edi
        public_630f8e7 : nop
        mov eax, dword ptr ds : [esi+0x14]
        push eax
        call ebx
        mov dword ptr ds : [esi+0x14], edi
        public_630f8f0 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
        public_630f8f4 : nop
        call ebx
        mov dword ptr ds : [esi+0x10], ebp
        public_630f8f9 : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, edi
        je public_630f910
        push eax
        call dword ptr ds : [public_639932c]
        mov dword ptr ds : [esi+0x1C], edi
        add esp, 4
        mov dword ptr ds : [esi+0x18], edi
        public_630f910 : nop
        mov dword ptr ds : [esi+0x20], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x630f770)
    }
}

#undef public_630f7ca
#undef public_630f7d3
#undef public_630f809
#undef public_630f80b
#undef public_630f838
#undef public_630f841
#undef public_630f84a
#undef public_630f87e
#undef public_630f887
#undef public_630f8bc
#undef public_630f8be
#undef public_630f8e7
#undef public_630f8f0
#undef public_630f8f4
#undef public_630f8f9
#undef public_630f910
