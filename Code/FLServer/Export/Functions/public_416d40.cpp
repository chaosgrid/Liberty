#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_416d40);
CLANG_FORWARD_PROC_SYMBOL(public_4170c0);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_416da9 _public_416da9
#define public_416dbd _public_416dbd
#define public_416dc3 _public_416dc3
#define public_416dd1 _public_416dd1
#define public_416e12 _public_416e12
#define public_416e2b _public_416e2b
#define public_416e3e _public_416e3e
#define public_416e49 _public_416e49
#define public_416e4c _public_416e4c
#define public_416e51 _public_416e51
#define public_416e7a _public_416e7a
#define public_416e93 _public_416e93
#define public_416ea6 _public_416ea6
#define public_416eb0 _public_416eb0
#define public_416ed3 _public_416ed3
#define public_416eeb _public_416eeb
#define public_416efe _public_416efe
#define public_416f0b _public_416f0b
#define public_416f0d _public_416f0d
#define public_416f13 _public_416f13
#define public_416f3c _public_416f3c
#define public_416f4f _public_416f4f
#define public_416f5a _public_416f5a
#define public_416f5d _public_416f5d
#define public_416f5f _public_416f5f
#define public_416f62 _public_416f62
#define public_416f6e _public_416f6e

PROC_DECLARE(0x416d40, internal_416d40, public_416d40);
extern "C" NAKED register_t __cdecl internal_416d40()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_418a9e
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
        call public_4170c0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_416da9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_416da9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jl public_416da9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_416dc3
        mov dword ptr ds : [eax+8], ebx
        jmp public_416dc3
        public_416da9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_416dbd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_416dc3
        public_416dbd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_416dc3
        mov dword ptr ds : [eax], ebx
        public_416dc3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_416f6e
        public_416dd1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_416f6e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_416eb0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_416e12
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_416f62
        public_416e12 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_416e51
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_416e2b
        mov dword ptr ds : [edx+4], eax
        public_416e2b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_416e3e
        mov dword ptr ds : [edx+4], ecx
        jmp public_416e4c
        public_416e3e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_416e49
        mov dword ptr ds : [edx], ecx
        jmp public_416e4c
        public_416e49 : nop
        mov dword ptr ds : [edx+8], ecx
        public_416e4c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_416e51 : nop
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
        je public_416e7a
        mov dword ptr ds : [edi+4], ecx
        public_416e7a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_416e93
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_416f5f
        public_416e93 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_416ea6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_416f5f
        public_416ea6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_416f5f
        public_416eb0 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_416ed3
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_416f62
        public_416ed3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_416f13
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_416eeb
        mov dword ptr ds : [edx+4], eax
        public_416eeb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_416efe
        mov dword ptr ds : [edx+4], ecx
        jmp public_416f0d
        public_416efe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_416f0b
        mov dword ptr ds : [edx+8], ecx
        jmp public_416f0d
        public_416f0b : nop
        mov dword ptr ds : [edx], ecx
        public_416f0d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_416f13 : nop
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
        je public_416f3c
        mov dword ptr ds : [edi+4], ecx
        public_416f3c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_416f4f
        mov dword ptr ds : [edi+4], edx
        jmp public_416f5d
        public_416f4f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_416f5a
        mov dword ptr ds : [edi], edx
        jmp public_416f5d
        public_416f5a : nop
        mov dword ptr ds : [edi+8], edx
        public_416f5d : nop
        mov dword ptr ds : [edx], ecx
        public_416f5f : nop
        mov dword ptr ds : [ecx+4], edx
        public_416f62 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_416dd1
        public_416f6e : nop
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
        UNREACHABLE_TRAP(0x416d40)
    }
}

#undef public_416da9
#undef public_416dbd
#undef public_416dc3
#undef public_416dd1
#undef public_416e12
#undef public_416e2b
#undef public_416e3e
#undef public_416e49
#undef public_416e4c
#undef public_416e51
#undef public_416e7a
#undef public_416e93
#undef public_416ea6
#undef public_416eb0
#undef public_416ed3
#undef public_416eeb
#undef public_416efe
#undef public_416f0b
#undef public_416f0d
#undef public_416f13
#undef public_416f3c
#undef public_416f4f
#undef public_416f5a
#undef public_416f5d
#undef public_416f5f
#undef public_416f62
#undef public_416f6e
