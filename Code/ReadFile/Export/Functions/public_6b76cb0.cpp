#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6b771e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b782ac);

#define public_6b76d1d _public_6b76d1d
#define public_6b76d31 _public_6b76d31
#define public_6b76d37 _public_6b76d37
#define public_6b76d45 _public_6b76d45
#define public_6b76d86 _public_6b76d86
#define public_6b76d9f _public_6b76d9f
#define public_6b76db2 _public_6b76db2
#define public_6b76dbd _public_6b76dbd
#define public_6b76dc0 _public_6b76dc0
#define public_6b76dc5 _public_6b76dc5
#define public_6b76dee _public_6b76dee
#define public_6b76e07 _public_6b76e07
#define public_6b76e1a _public_6b76e1a
#define public_6b76e24 _public_6b76e24
#define public_6b76e47 _public_6b76e47
#define public_6b76e5f _public_6b76e5f
#define public_6b76e72 _public_6b76e72
#define public_6b76e7f _public_6b76e7f
#define public_6b76e81 _public_6b76e81
#define public_6b76e87 _public_6b76e87
#define public_6b76eb0 _public_6b76eb0
#define public_6b76ec3 _public_6b76ec3
#define public_6b76ece _public_6b76ece
#define public_6b76ed1 _public_6b76ed1
#define public_6b76ed3 _public_6b76ed3
#define public_6b76ed6 _public_6b76ed6
#define public_6b76ee2 _public_6b76ee2

PROC_DECLARE(0x6b76cb0, internal_6b76cb0, public_6b76cb0);
extern "C" NAKED register_t __cdecl internal_6b76cb0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call public_6b782ac
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        push ebp
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x24], 0
        mov byte ptr ds : [ebx+0x25], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        mov dword ptr ds : [ebx+8], ecx
        push edx
        call public_6b771e0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6b76d1d
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        jne public_6b76d1d
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edi+0xC]
        cmp ecx, eax
        jb public_6b76d1d
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6b76d37
        mov dword ptr ds : [eax+8], ebx
        jmp public_6b76d37
        public_6b76d1d : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6b76d31
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6b76d37
        public_6b76d31 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6b76d37
        mov dword ptr ds : [eax], ebx
        public_6b76d37 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, ebx
        cmp ebx, dword ptr ds : [ecx+4]
        je public_6b76ee2
        public_6b76d45 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6b76ee2
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6b76e24
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6b76d86
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6b76ed6
        public_6b76d86 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6b76dc5
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6b76d9f
        mov dword ptr ds : [edx+4], eax
        public_6b76d9f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6b76db2
        mov dword ptr ds : [edx+4], ecx
        jmp public_6b76dc0
        public_6b76db2 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6b76dbd
        mov dword ptr ds : [edx], ecx
        jmp public_6b76dc0
        public_6b76dbd : nop
        mov dword ptr ds : [edx+8], ecx
        public_6b76dc0 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6b76dc5 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6b76dee
        mov dword ptr ds : [edi+4], ecx
        public_6b76dee : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6b76e07
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b76ed3
        public_6b76e07 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6b76e1a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b76ed3
        public_6b76e1a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b76ed3
        public_6b76e24 : nop
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6b76e47
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6b76ed6
        public_6b76e47 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6b76e87
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6b76e5f
        mov dword ptr ds : [edx+4], eax
        public_6b76e5f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6b76e72
        mov dword ptr ds : [edx+4], ecx
        jmp public_6b76e81
        public_6b76e72 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6b76e7f
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b76e81
        public_6b76e7f : nop
        mov dword ptr ds : [edx], ecx
        public_6b76e81 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6b76e87 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6b76eb0
        mov dword ptr ds : [edi+4], ecx
        public_6b76eb0 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6b76ec3
        mov dword ptr ds : [edi+4], edx
        jmp public_6b76ed1
        public_6b76ec3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6b76ece
        mov dword ptr ds : [edi], edx
        jmp public_6b76ed1
        public_6b76ece : nop
        mov dword ptr ds : [edi+8], edx
        public_6b76ed1 : nop
        mov dword ptr ds : [edx], ecx
        public_6b76ed3 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6b76ed6 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6b76d45
        public_6b76ee2 : nop
        mov edx, dword ptr ds : [esi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6b76cb0)
    }
}

#undef public_6b76d1d
#undef public_6b76d31
#undef public_6b76d37
#undef public_6b76d45
#undef public_6b76d86
#undef public_6b76d9f
#undef public_6b76db2
#undef public_6b76dbd
#undef public_6b76dc0
#undef public_6b76dc5
#undef public_6b76dee
#undef public_6b76e07
#undef public_6b76e1a
#undef public_6b76e24
#undef public_6b76e47
#undef public_6b76e5f
#undef public_6b76e72
#undef public_6b76e7f
#undef public_6b76e81
#undef public_6b76e87
#undef public_6b76eb0
#undef public_6b76ec3
#undef public_6b76ece
#undef public_6b76ed1
#undef public_6b76ed3
#undef public_6b76ed6
#undef public_6b76ee2
