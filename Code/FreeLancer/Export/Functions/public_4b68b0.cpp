#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b68b0);
CLANG_FORWARD_PROC_SYMBOL(public_4e5fc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4b6919 _public_4b6919
#define public_4b692d _public_4b692d
#define public_4b6933 _public_4b6933
#define public_4b6941 _public_4b6941
#define public_4b6982 _public_4b6982
#define public_4b699b _public_4b699b
#define public_4b69ae _public_4b69ae
#define public_4b69b9 _public_4b69b9
#define public_4b69bc _public_4b69bc
#define public_4b69c1 _public_4b69c1
#define public_4b69ea _public_4b69ea
#define public_4b6a03 _public_4b6a03
#define public_4b6a16 _public_4b6a16
#define public_4b6a20 _public_4b6a20
#define public_4b6a43 _public_4b6a43
#define public_4b6a5b _public_4b6a5b
#define public_4b6a6e _public_4b6a6e
#define public_4b6a7b _public_4b6a7b
#define public_4b6a7d _public_4b6a7d
#define public_4b6a83 _public_4b6a83
#define public_4b6aac _public_4b6aac
#define public_4b6abf _public_4b6abf
#define public_4b6aca _public_4b6aca
#define public_4b6acd _public_4b6acd
#define public_4b6acf _public_4b6acf
#define public_4b6ad2 _public_4b6ad2
#define public_4b6ade _public_4b6ade

PROC_DECLARE(0x4b68b0, internal_4b68b0, public_4b68b0);
extern "C" NAKED register_t __cdecl internal_4b68b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_5b7e84
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
        call public_4e5fc0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_4b6919
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_4b6919
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_4b6919
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_4b6933
        mov dword ptr ds : [eax+8], ebx
        jmp public_4b6933
        public_4b6919 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_4b692d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_4b6933
        public_4b692d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_4b6933
        mov dword ptr ds : [eax], ebx
        public_4b6933 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_4b6ade
        public_4b6941 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_4b6ade
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_4b6a20
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_4b6982
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_4b6ad2
        public_4b6982 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_4b69c1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_4b699b
        mov dword ptr ds : [edx+4], eax
        public_4b699b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4b69ae
        mov dword ptr ds : [edx+4], ecx
        jmp public_4b69bc
        public_4b69ae : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_4b69b9
        mov dword ptr ds : [edx], ecx
        jmp public_4b69bc
        public_4b69b9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_4b69bc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_4b69c1 : nop
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
        je public_4b69ea
        mov dword ptr ds : [edi+4], ecx
        public_4b69ea : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_4b6a03
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4b6acf
        public_4b6a03 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4b6a16
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4b6acf
        public_4b6a16 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4b6acf
        public_4b6a20 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_4b6a43
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_4b6ad2
        public_4b6a43 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_4b6a83
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_4b6a5b
        mov dword ptr ds : [edx+4], eax
        public_4b6a5b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4b6a6e
        mov dword ptr ds : [edx+4], ecx
        jmp public_4b6a7d
        public_4b6a6e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_4b6a7b
        mov dword ptr ds : [edx+8], ecx
        jmp public_4b6a7d
        public_4b6a7b : nop
        mov dword ptr ds : [edx], ecx
        public_4b6a7d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_4b6a83 : nop
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
        je public_4b6aac
        mov dword ptr ds : [edi+4], ecx
        public_4b6aac : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_4b6abf
        mov dword ptr ds : [edi+4], edx
        jmp public_4b6acd
        public_4b6abf : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_4b6aca
        mov dword ptr ds : [edi], edx
        jmp public_4b6acd
        public_4b6aca : nop
        mov dword ptr ds : [edi+8], edx
        public_4b6acd : nop
        mov dword ptr ds : [edx], ecx
        public_4b6acf : nop
        mov dword ptr ds : [ecx+4], edx
        public_4b6ad2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_4b6941
        public_4b6ade : nop
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
        UNREACHABLE_TRAP(0x4b68b0)
    }
}

#undef public_4b6919
#undef public_4b692d
#undef public_4b6933
#undef public_4b6941
#undef public_4b6982
#undef public_4b699b
#undef public_4b69ae
#undef public_4b69b9
#undef public_4b69bc
#undef public_4b69c1
#undef public_4b69ea
#undef public_4b6a03
#undef public_4b6a16
#undef public_4b6a20
#undef public_4b6a43
#undef public_4b6a5b
#undef public_4b6a6e
#undef public_4b6a7b
#undef public_4b6a7d
#undef public_4b6a83
#undef public_4b6aac
#undef public_4b6abf
#undef public_4b6aca
#undef public_4b6acd
#undef public_4b6acf
#undef public_4b6ad2
#undef public_4b6ade
