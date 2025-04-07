#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f36be0);
CLANG_FORWARD_PROC_SYMBOL(public_6f37a40);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f36c49 _public_6f36c49
#define public_6f36c5d _public_6f36c5d
#define public_6f36c63 _public_6f36c63
#define public_6f36c71 _public_6f36c71
#define public_6f36cb2 _public_6f36cb2
#define public_6f36ccb _public_6f36ccb
#define public_6f36cde _public_6f36cde
#define public_6f36ce9 _public_6f36ce9
#define public_6f36cec _public_6f36cec
#define public_6f36cf1 _public_6f36cf1
#define public_6f36d1a _public_6f36d1a
#define public_6f36d33 _public_6f36d33
#define public_6f36d46 _public_6f36d46
#define public_6f36d50 _public_6f36d50
#define public_6f36d73 _public_6f36d73
#define public_6f36d8b _public_6f36d8b
#define public_6f36d9e _public_6f36d9e
#define public_6f36dab _public_6f36dab
#define public_6f36dad _public_6f36dad
#define public_6f36db3 _public_6f36db3
#define public_6f36ddc _public_6f36ddc
#define public_6f36def _public_6f36def
#define public_6f36dfa _public_6f36dfa
#define public_6f36dfd _public_6f36dfd
#define public_6f36dff _public_6f36dff
#define public_6f36e02 _public_6f36e02
#define public_6f36e0e _public_6f36e0e

PROC_DECLARE(0x6f36be0, internal_6f36be0, public_6f36be0);
extern "C" NAKED register_t __cdecl internal_6f36be0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x20
        mov esi, ecx
        call public_6f57e9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x1C], 0
        mov byte ptr ds : [ebx+0x1D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f37a40
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f36c49
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f36c49
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f36c49
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f36c63
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f36c63
        public_6f36c49 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f36c5d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f36c63
        public_6f36c5d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f36c63
        mov dword ptr ds : [eax], ebx
        public_6f36c63 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f36e0e
        public_6f36c71 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f36e0e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f36d50
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_6f36cb2
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f36e02
        public_6f36cb2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f36cf1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f36ccb
        mov dword ptr ds : [edx+4], eax
        public_6f36ccb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f36cde
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f36cec
        public_6f36cde : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f36ce9
        mov dword ptr ds : [edx], ecx
        jmp public_6f36cec
        public_6f36ce9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f36cec : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f36cf1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f36d1a
        mov dword ptr ds : [edi+4], ecx
        public_6f36d1a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f36d33
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f36dff
        public_6f36d33 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f36d46
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f36dff
        public_6f36d46 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f36dff
        public_6f36d50 : nop
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_6f36d73
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f36e02
        public_6f36d73 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f36db3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f36d8b
        mov dword ptr ds : [edx+4], eax
        public_6f36d8b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f36d9e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f36dad
        public_6f36d9e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f36dab
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f36dad
        public_6f36dab : nop
        mov dword ptr ds : [edx], ecx
        public_6f36dad : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f36db3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f36ddc
        mov dword ptr ds : [edi+4], ecx
        public_6f36ddc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f36def
        mov dword ptr ds : [edi+4], edx
        jmp public_6f36dfd
        public_6f36def : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f36dfa
        mov dword ptr ds : [edi], edx
        jmp public_6f36dfd
        public_6f36dfa : nop
        mov dword ptr ds : [edi+8], edx
        public_6f36dfd : nop
        mov dword ptr ds : [edx], ecx
        public_6f36dff : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f36e02 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f36c71
        public_6f36e0e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f36be0)
    }
}

#undef public_6f36c49
#undef public_6f36c5d
#undef public_6f36c63
#undef public_6f36c71
#undef public_6f36cb2
#undef public_6f36ccb
#undef public_6f36cde
#undef public_6f36ce9
#undef public_6f36cec
#undef public_6f36cf1
#undef public_6f36d1a
#undef public_6f36d33
#undef public_6f36d46
#undef public_6f36d50
#undef public_6f36d73
#undef public_6f36d8b
#undef public_6f36d9e
#undef public_6f36dab
#undef public_6f36dad
#undef public_6f36db3
#undef public_6f36ddc
#undef public_6f36def
#undef public_6f36dfa
#undef public_6f36dfd
#undef public_6f36dff
#undef public_6f36e02
#undef public_6f36e0e
