#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f56c20);
CLANG_FORWARD_PROC_SYMBOL(public_6f56e70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f56c89 _public_6f56c89
#define public_6f56c9d _public_6f56c9d
#define public_6f56ca3 _public_6f56ca3
#define public_6f56cb1 _public_6f56cb1
#define public_6f56cf2 _public_6f56cf2
#define public_6f56d0b _public_6f56d0b
#define public_6f56d1e _public_6f56d1e
#define public_6f56d29 _public_6f56d29
#define public_6f56d2c _public_6f56d2c
#define public_6f56d31 _public_6f56d31
#define public_6f56d5a _public_6f56d5a
#define public_6f56d73 _public_6f56d73
#define public_6f56d86 _public_6f56d86
#define public_6f56d90 _public_6f56d90
#define public_6f56db3 _public_6f56db3
#define public_6f56dcb _public_6f56dcb
#define public_6f56dde _public_6f56dde
#define public_6f56deb _public_6f56deb
#define public_6f56ded _public_6f56ded
#define public_6f56df3 _public_6f56df3
#define public_6f56e1c _public_6f56e1c
#define public_6f56e2f _public_6f56e2f
#define public_6f56e3a _public_6f56e3a
#define public_6f56e3d _public_6f56e3d
#define public_6f56e3f _public_6f56e3f
#define public_6f56e42 _public_6f56e42
#define public_6f56e4e _public_6f56e4e

PROC_DECLARE(0x6f56c20, internal_6f56c20, public_6f56c20);
extern "C" NAKED register_t __cdecl internal_6f56c20()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x24
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x20], 0
        mov byte ptr ds : [ebx+0x21], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f56e70
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f56c89
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f56c89
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f56c89
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f56ca3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f56ca3
        public_6f56c89 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f56c9d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f56ca3
        public_6f56c9d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f56ca3
        mov dword ptr ds : [eax], ebx
        public_6f56ca3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f56e4e
        public_6f56cb1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f56e4e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f56d90
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6f56cf2
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f56e42
        public_6f56cf2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f56d31
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f56d0b
        mov dword ptr ds : [edx+4], eax
        public_6f56d0b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f56d1e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f56d2c
        public_6f56d1e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f56d29
        mov dword ptr ds : [edx], ecx
        jmp public_6f56d2c
        public_6f56d29 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f56d2c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f56d31 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f56d5a
        mov dword ptr ds : [edi+4], ecx
        public_6f56d5a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f56d73
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f56e3f
        public_6f56d73 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f56d86
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f56e3f
        public_6f56d86 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f56e3f
        public_6f56d90 : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6f56db3
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f56e42
        public_6f56db3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f56df3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f56dcb
        mov dword ptr ds : [edx+4], eax
        public_6f56dcb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f56dde
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f56ded
        public_6f56dde : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f56deb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f56ded
        public_6f56deb : nop
        mov dword ptr ds : [edx], ecx
        public_6f56ded : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f56df3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f56e1c
        mov dword ptr ds : [edi+4], ecx
        public_6f56e1c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f56e2f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f56e3d
        public_6f56e2f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f56e3a
        mov dword ptr ds : [edi], edx
        jmp public_6f56e3d
        public_6f56e3a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f56e3d : nop
        mov dword ptr ds : [edx], ecx
        public_6f56e3f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f56e42 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f56cb1
        public_6f56e4e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f56c20)
    }
}

#undef public_6f56c89
#undef public_6f56c9d
#undef public_6f56ca3
#undef public_6f56cb1
#undef public_6f56cf2
#undef public_6f56d0b
#undef public_6f56d1e
#undef public_6f56d29
#undef public_6f56d2c
#undef public_6f56d31
#undef public_6f56d5a
#undef public_6f56d73
#undef public_6f56d86
#undef public_6f56d90
#undef public_6f56db3
#undef public_6f56dcb
#undef public_6f56dde
#undef public_6f56deb
#undef public_6f56ded
#undef public_6f56df3
#undef public_6f56e1c
#undef public_6f56e2f
#undef public_6f56e3a
#undef public_6f56e3d
#undef public_6f56e3f
#undef public_6f56e42
#undef public_6f56e4e
