#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f36f00);
CLANG_FORWARD_PROC_SYMBOL(public_6f37a70);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f36f69 _public_6f36f69
#define public_6f36f7d _public_6f36f7d
#define public_6f36f83 _public_6f36f83
#define public_6f36f91 _public_6f36f91
#define public_6f36fd2 _public_6f36fd2
#define public_6f36feb _public_6f36feb
#define public_6f36ffe _public_6f36ffe
#define public_6f37009 _public_6f37009
#define public_6f3700c _public_6f3700c
#define public_6f37011 _public_6f37011
#define public_6f3703a _public_6f3703a
#define public_6f37053 _public_6f37053
#define public_6f37066 _public_6f37066
#define public_6f37070 _public_6f37070
#define public_6f37093 _public_6f37093
#define public_6f370ab _public_6f370ab
#define public_6f370be _public_6f370be
#define public_6f370cb _public_6f370cb
#define public_6f370cd _public_6f370cd
#define public_6f370d3 _public_6f370d3
#define public_6f370fc _public_6f370fc
#define public_6f3710f _public_6f3710f
#define public_6f3711a _public_6f3711a
#define public_6f3711d _public_6f3711d
#define public_6f3711f _public_6f3711f
#define public_6f37122 _public_6f37122
#define public_6f3712e _public_6f3712e

PROC_DECLARE(0x6f36f00, internal_6f36f00, public_6f36f00);
extern "C" NAKED register_t __cdecl internal_6f36f00()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x24
        mov esi, ecx
        call public_6f57e9c
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
        call public_6f37a70
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f36f69
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f36f69
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f36f69
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f36f83
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f36f83
        public_6f36f69 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f36f7d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f36f83
        public_6f36f7d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f36f83
        mov dword ptr ds : [eax], ebx
        public_6f36f83 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f3712e
        public_6f36f91 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f3712e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f37070
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6f36fd2
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f37122
        public_6f36fd2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f37011
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f36feb
        mov dword ptr ds : [edx+4], eax
        public_6f36feb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f36ffe
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f3700c
        public_6f36ffe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f37009
        mov dword ptr ds : [edx], ecx
        jmp public_6f3700c
        public_6f37009 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f3700c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f37011 : nop
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
        je public_6f3703a
        mov dword ptr ds : [edi+4], ecx
        public_6f3703a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f37053
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3711f
        public_6f37053 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f37066
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3711f
        public_6f37066 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3711f
        public_6f37070 : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6f37093
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f37122
        public_6f37093 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f370d3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f370ab
        mov dword ptr ds : [edx+4], eax
        public_6f370ab : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f370be
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f370cd
        public_6f370be : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f370cb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f370cd
        public_6f370cb : nop
        mov dword ptr ds : [edx], ecx
        public_6f370cd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f370d3 : nop
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
        je public_6f370fc
        mov dword ptr ds : [edi+4], ecx
        public_6f370fc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f3710f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f3711d
        public_6f3710f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f3711a
        mov dword ptr ds : [edi], edx
        jmp public_6f3711d
        public_6f3711a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f3711d : nop
        mov dword ptr ds : [edx], ecx
        public_6f3711f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f37122 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f36f91
        public_6f3712e : nop
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
        UNREACHABLE_TRAP(0x6f36f00)
    }
}

#undef public_6f36f69
#undef public_6f36f7d
#undef public_6f36f83
#undef public_6f36f91
#undef public_6f36fd2
#undef public_6f36feb
#undef public_6f36ffe
#undef public_6f37009
#undef public_6f3700c
#undef public_6f37011
#undef public_6f3703a
#undef public_6f37053
#undef public_6f37066
#undef public_6f37070
#undef public_6f37093
#undef public_6f370ab
#undef public_6f370be
#undef public_6f370cb
#undef public_6f370cd
#undef public_6f370d3
#undef public_6f370fc
#undef public_6f3710f
#undef public_6f3711a
#undef public_6f3711d
#undef public_6f3711f
#undef public_6f37122
#undef public_6f3712e
