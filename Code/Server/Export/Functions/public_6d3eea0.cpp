#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3eea0);
CLANG_FORWARD_PROC_SYMBOL(public_6d40910);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d3ef0b _public_6d3ef0b
#define public_6d3ef1f _public_6d3ef1f
#define public_6d3ef25 _public_6d3ef25
#define public_6d3ef33 _public_6d3ef33
#define public_6d3ef74 _public_6d3ef74
#define public_6d3ef8d _public_6d3ef8d
#define public_6d3efa0 _public_6d3efa0
#define public_6d3efab _public_6d3efab
#define public_6d3efae _public_6d3efae
#define public_6d3efb3 _public_6d3efb3
#define public_6d3efdc _public_6d3efdc
#define public_6d3eff5 _public_6d3eff5
#define public_6d3f008 _public_6d3f008
#define public_6d3f012 _public_6d3f012
#define public_6d3f035 _public_6d3f035
#define public_6d3f04d _public_6d3f04d
#define public_6d3f060 _public_6d3f060
#define public_6d3f06d _public_6d3f06d
#define public_6d3f06f _public_6d3f06f
#define public_6d3f075 _public_6d3f075
#define public_6d3f09e _public_6d3f09e
#define public_6d3f0b1 _public_6d3f0b1
#define public_6d3f0bc _public_6d3f0bc
#define public_6d3f0bf _public_6d3f0bf
#define public_6d3f0c1 _public_6d3f0c1
#define public_6d3f0c4 _public_6d3f0c4
#define public_6d3f0d0 _public_6d3f0d0

PROC_DECLARE(0x6d3eea0, internal_6d3eea0, public_6d3eea0);
extern "C" NAKED register_t __cdecl internal_6d3eea0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x2C
        mov esi, ecx
        call public_6d60012
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x28], 0
        mov byte ptr ds : [ebx+0x29], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6d40910
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6d3ef0b
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6d3ef0b
        mov cx, word ptr ss : [ebp]
        cmp cx, word ptr ds : [edi+0xC]
        jb public_6d3ef0b
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6d3ef25
        mov dword ptr ds : [eax+8], ebx
        jmp public_6d3ef25
        public_6d3ef0b : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6d3ef1f
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6d3ef25
        public_6d3ef1f : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6d3ef25
        mov dword ptr ds : [eax], ebx
        public_6d3ef25 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6d3f0d0
        public_6d3ef33 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6d3f0d0
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6d3f012
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x28], 0
        jne public_6d3ef74
        mov byte ptr ds : [ecx+0x28], 1
        mov byte ptr ds : [edx+0x28], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6d3f0c4
        public_6d3ef74 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d3efb3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6d3ef8d
        mov dword ptr ds : [edx+4], eax
        public_6d3ef8d : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d3efa0
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d3efae
        public_6d3efa0 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6d3efab
        mov dword ptr ds : [edx], ecx
        jmp public_6d3efae
        public_6d3efab : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d3efae : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6d3efb3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6d3efdc
        mov dword ptr ds : [edi+4], ecx
        public_6d3efdc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6d3eff5
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d3f0c1
        public_6d3eff5 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d3f008
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d3f0c1
        public_6d3f008 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d3f0c1
        public_6d3f012 : nop
        cmp byte ptr ds : [edx+0x28], 0
        jne public_6d3f035
        mov byte ptr ds : [ecx+0x28], 1
        mov byte ptr ds : [edx+0x28], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x28], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6d3f0c4
        public_6d3f035 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6d3f075
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6d3f04d
        mov dword ptr ds : [edx+4], eax
        public_6d3f04d : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d3f060
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d3f06f
        public_6d3f060 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d3f06d
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d3f06f
        public_6d3f06d : nop
        mov dword ptr ds : [edx], ecx
        public_6d3f06f : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6d3f075 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6d3f09e
        mov dword ptr ds : [edi+4], ecx
        public_6d3f09e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6d3f0b1
        mov dword ptr ds : [edi+4], edx
        jmp public_6d3f0bf
        public_6d3f0b1 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6d3f0bc
        mov dword ptr ds : [edi], edx
        jmp public_6d3f0bf
        public_6d3f0bc : nop
        mov dword ptr ds : [edi+8], edx
        public_6d3f0bf : nop
        mov dword ptr ds : [edx], ecx
        public_6d3f0c1 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6d3f0c4 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6d3ef33
        public_6d3f0d0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x28], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6d3eea0)
    }
}

#undef public_6d3ef0b
#undef public_6d3ef1f
#undef public_6d3ef25
#undef public_6d3ef33
#undef public_6d3ef74
#undef public_6d3ef8d
#undef public_6d3efa0
#undef public_6d3efab
#undef public_6d3efae
#undef public_6d3efb3
#undef public_6d3efdc
#undef public_6d3eff5
#undef public_6d3f008
#undef public_6d3f012
#undef public_6d3f035
#undef public_6d3f04d
#undef public_6d3f060
#undef public_6d3f06d
#undef public_6d3f06f
#undef public_6d3f075
#undef public_6d3f09e
#undef public_6d3f0b1
#undef public_6d3f0bc
#undef public_6d3f0bf
#undef public_6d3f0c1
#undef public_6d3f0c4
#undef public_6d3f0d0
