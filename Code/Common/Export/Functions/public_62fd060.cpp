#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_62fd060);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62fd0c9 _public_62fd0c9
#define public_62fd0dd _public_62fd0dd
#define public_62fd0e3 _public_62fd0e3
#define public_62fd0f1 _public_62fd0f1
#define public_62fd132 _public_62fd132
#define public_62fd14b _public_62fd14b
#define public_62fd15e _public_62fd15e
#define public_62fd169 _public_62fd169
#define public_62fd16c _public_62fd16c
#define public_62fd171 _public_62fd171
#define public_62fd19a _public_62fd19a
#define public_62fd1b3 _public_62fd1b3
#define public_62fd1c6 _public_62fd1c6
#define public_62fd1d0 _public_62fd1d0
#define public_62fd1f3 _public_62fd1f3
#define public_62fd20b _public_62fd20b
#define public_62fd21e _public_62fd21e
#define public_62fd22b _public_62fd22b
#define public_62fd22d _public_62fd22d
#define public_62fd233 _public_62fd233
#define public_62fd25c _public_62fd25c
#define public_62fd26f _public_62fd26f
#define public_62fd27a _public_62fd27a
#define public_62fd27d _public_62fd27d
#define public_62fd27f _public_62fd27f
#define public_62fd282 _public_62fd282
#define public_62fd28e _public_62fd28e

PROC_DECLARE(0x62fd060, internal_62fd060, public_62fd060);
extern "C" NAKED register_t __cdecl internal_62fd060()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_62bee40
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_62fd0c9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_62fd0c9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_62fd0c9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_62fd0e3
        mov dword ptr ds : [eax+8], ebx
        jmp public_62fd0e3
        public_62fd0c9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_62fd0dd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_62fd0e3
        public_62fd0dd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_62fd0e3
        mov dword ptr ds : [eax], ebx
        public_62fd0e3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_62fd28e
        public_62fd0f1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_62fd28e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_62fd1d0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_62fd132
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_62fd282
        public_62fd132 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_62fd171
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_62fd14b
        mov dword ptr ds : [edx+4], eax
        public_62fd14b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_62fd15e
        mov dword ptr ds : [edx+4], ecx
        jmp public_62fd16c
        public_62fd15e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_62fd169
        mov dword ptr ds : [edx], ecx
        jmp public_62fd16c
        public_62fd169 : nop
        mov dword ptr ds : [edx+8], ecx
        public_62fd16c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_62fd171 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_62fd19a
        mov dword ptr ds : [edi+4], ecx
        public_62fd19a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_62fd1b3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_62fd27f
        public_62fd1b3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62fd1c6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_62fd27f
        public_62fd1c6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_62fd27f
        public_62fd1d0 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_62fd1f3
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_62fd282
        public_62fd1f3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_62fd233
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_62fd20b
        mov dword ptr ds : [edx+4], eax
        public_62fd20b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_62fd21e
        mov dword ptr ds : [edx+4], ecx
        jmp public_62fd22d
        public_62fd21e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_62fd22b
        mov dword ptr ds : [edx+8], ecx
        jmp public_62fd22d
        public_62fd22b : nop
        mov dword ptr ds : [edx], ecx
        public_62fd22d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_62fd233 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_62fd25c
        mov dword ptr ds : [edi+4], ecx
        public_62fd25c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_62fd26f
        mov dword ptr ds : [edi+4], edx
        jmp public_62fd27d
        public_62fd26f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_62fd27a
        mov dword ptr ds : [edi], edx
        jmp public_62fd27d
        public_62fd27a : nop
        mov dword ptr ds : [edi+8], edx
        public_62fd27d : nop
        mov dword ptr ds : [edx], ecx
        public_62fd27f : nop
        mov dword ptr ds : [ecx+4], edx
        public_62fd282 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_62fd0f1
        public_62fd28e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x62fd060)
    }
}

#undef public_62fd0c9
#undef public_62fd0dd
#undef public_62fd0e3
#undef public_62fd0f1
#undef public_62fd132
#undef public_62fd14b
#undef public_62fd15e
#undef public_62fd169
#undef public_62fd16c
#undef public_62fd171
#undef public_62fd19a
#undef public_62fd1b3
#undef public_62fd1c6
#undef public_62fd1d0
#undef public_62fd1f3
#undef public_62fd20b
#undef public_62fd21e
#undef public_62fd22b
#undef public_62fd22d
#undef public_62fd233
#undef public_62fd25c
#undef public_62fd26f
#undef public_62fd27a
#undef public_62fd27d
#undef public_62fd27f
#undef public_62fd282
#undef public_62fd28e
