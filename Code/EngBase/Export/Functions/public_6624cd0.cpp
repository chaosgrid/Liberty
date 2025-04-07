#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6624cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6625340);
CLANG_FORWARD_PROC_SYMBOL(public_66254b0);

#define public_6624d3d _public_6624d3d
#define public_6624d51 _public_6624d51
#define public_6624d57 _public_6624d57
#define public_6624d65 _public_6624d65
#define public_6624da6 _public_6624da6
#define public_6624dbf _public_6624dbf
#define public_6624dd2 _public_6624dd2
#define public_6624ddd _public_6624ddd
#define public_6624de0 _public_6624de0
#define public_6624de5 _public_6624de5
#define public_6624e0e _public_6624e0e
#define public_6624e27 _public_6624e27
#define public_6624e3a _public_6624e3a
#define public_6624e44 _public_6624e44
#define public_6624e67 _public_6624e67
#define public_6624e7f _public_6624e7f
#define public_6624e92 _public_6624e92
#define public_6624e9f _public_6624e9f
#define public_6624ea1 _public_6624ea1
#define public_6624ea7 _public_6624ea7
#define public_6624ed0 _public_6624ed0
#define public_6624ee3 _public_6624ee3
#define public_6624eee _public_6624eee
#define public_6624ef1 _public_6624ef1
#define public_6624ef3 _public_6624ef3
#define public_6624ef6 _public_6624ef6
#define public_6624f02 _public_6624f02

PROC_DECLARE(0x6624cd0, internal_6624cd0, public_6624cd0);
extern "C" NAKED register_t __cdecl internal_6624cd0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6625340
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ebx, eax
        push ebp
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        mov dword ptr ds : [ebx+8], ecx
        push edx
        call public_66254b0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6624d3d
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        jne public_6624d3d
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edi+0xC]
        cmp ecx, eax
        jl public_6624d3d
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6624d57
        mov dword ptr ds : [eax+8], ebx
        jmp public_6624d57
        public_6624d3d : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6624d51
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6624d57
        public_6624d51 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6624d57
        mov dword ptr ds : [eax], ebx
        public_6624d57 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, ebx
        cmp ebx, dword ptr ds : [ecx+4]
        je public_6624f02
        public_6624d65 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6624f02
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6624e44
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6624da6
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6624ef6
        public_6624da6 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6624de5
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6624dbf
        mov dword ptr ds : [edx+4], eax
        public_6624dbf : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6624dd2
        mov dword ptr ds : [edx+4], ecx
        jmp public_6624de0
        public_6624dd2 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6624ddd
        mov dword ptr ds : [edx], ecx
        jmp public_6624de0
        public_6624ddd : nop
        mov dword ptr ds : [edx+8], ecx
        public_6624de0 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6624de5 : nop
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
        je public_6624e0e
        mov dword ptr ds : [edi+4], ecx
        public_6624e0e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6624e27
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6624ef3
        public_6624e27 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6624e3a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6624ef3
        public_6624e3a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6624ef3
        public_6624e44 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6624e67
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6624ef6
        public_6624e67 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6624ea7
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6624e7f
        mov dword ptr ds : [edx+4], eax
        public_6624e7f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6624e92
        mov dword ptr ds : [edx+4], ecx
        jmp public_6624ea1
        public_6624e92 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6624e9f
        mov dword ptr ds : [edx+8], ecx
        jmp public_6624ea1
        public_6624e9f : nop
        mov dword ptr ds : [edx], ecx
        public_6624ea1 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6624ea7 : nop
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
        je public_6624ed0
        mov dword ptr ds : [edi+4], ecx
        public_6624ed0 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6624ee3
        mov dword ptr ds : [edi+4], edx
        jmp public_6624ef1
        public_6624ee3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6624eee
        mov dword ptr ds : [edi], edx
        jmp public_6624ef1
        public_6624eee : nop
        mov dword ptr ds : [edi+8], edx
        public_6624ef1 : nop
        mov dword ptr ds : [edx], ecx
        public_6624ef3 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6624ef6 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6624d65
        public_6624f02 : nop
        mov edx, dword ptr ds : [esi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6624cd0)
    }
}

#undef public_6624d3d
#undef public_6624d51
#undef public_6624d57
#undef public_6624d65
#undef public_6624da6
#undef public_6624dbf
#undef public_6624dd2
#undef public_6624ddd
#undef public_6624de0
#undef public_6624de5
#undef public_6624e0e
#undef public_6624e27
#undef public_6624e3a
#undef public_6624e44
#undef public_6624e67
#undef public_6624e7f
#undef public_6624e92
#undef public_6624e9f
#undef public_6624ea1
#undef public_6624ea7
#undef public_6624ed0
#undef public_6624ee3
#undef public_6624eee
#undef public_6624ef1
#undef public_6624ef3
#undef public_6624ef6
#undef public_6624f02
