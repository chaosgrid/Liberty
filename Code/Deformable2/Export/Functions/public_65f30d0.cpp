#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f30d0);
CLANG_FORWARD_PROC_SYMBOL(public_65f3520);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f3139 _public_65f3139
#define public_65f314d _public_65f314d
#define public_65f3153 _public_65f3153
#define public_65f3161 _public_65f3161
#define public_65f31a2 _public_65f31a2
#define public_65f31bb _public_65f31bb
#define public_65f31ce _public_65f31ce
#define public_65f31d9 _public_65f31d9
#define public_65f31dc _public_65f31dc
#define public_65f31e1 _public_65f31e1
#define public_65f320a _public_65f320a
#define public_65f3223 _public_65f3223
#define public_65f3236 _public_65f3236
#define public_65f3240 _public_65f3240
#define public_65f3263 _public_65f3263
#define public_65f327b _public_65f327b
#define public_65f328e _public_65f328e
#define public_65f329b _public_65f329b
#define public_65f329d _public_65f329d
#define public_65f32a3 _public_65f32a3
#define public_65f32cc _public_65f32cc
#define public_65f32df _public_65f32df
#define public_65f32ea _public_65f32ea
#define public_65f32ed _public_65f32ed
#define public_65f32ef _public_65f32ef
#define public_65f32f2 _public_65f32f2
#define public_65f32fe _public_65f32fe

PROC_DECLARE(0x65f30d0, internal_65f30d0, public_65f30d0);
extern "C" NAKED register_t __cdecl internal_65f30d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6600bb6
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
        call public_65f3520
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_65f3139
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_65f3139
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_65f3139
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_65f3153
        mov dword ptr ds : [eax+8], ebx
        jmp public_65f3153
        public_65f3139 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_65f314d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_65f3153
        public_65f314d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_65f3153
        mov dword ptr ds : [eax], ebx
        public_65f3153 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_65f32fe
        public_65f3161 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_65f32fe
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_65f3240
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_65f31a2
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_65f32f2
        public_65f31a2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_65f31e1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_65f31bb
        mov dword ptr ds : [edx+4], eax
        public_65f31bb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_65f31ce
        mov dword ptr ds : [edx+4], ecx
        jmp public_65f31dc
        public_65f31ce : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_65f31d9
        mov dword ptr ds : [edx], ecx
        jmp public_65f31dc
        public_65f31d9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_65f31dc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_65f31e1 : nop
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
        je public_65f320a
        mov dword ptr ds : [edi+4], ecx
        public_65f320a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_65f3223
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_65f32ef
        public_65f3223 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_65f3236
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_65f32ef
        public_65f3236 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_65f32ef
        public_65f3240 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_65f3263
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_65f32f2
        public_65f3263 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_65f32a3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_65f327b
        mov dword ptr ds : [edx+4], eax
        public_65f327b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_65f328e
        mov dword ptr ds : [edx+4], ecx
        jmp public_65f329d
        public_65f328e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_65f329b
        mov dword ptr ds : [edx+8], ecx
        jmp public_65f329d
        public_65f329b : nop
        mov dword ptr ds : [edx], ecx
        public_65f329d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_65f32a3 : nop
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
        je public_65f32cc
        mov dword ptr ds : [edi+4], ecx
        public_65f32cc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_65f32df
        mov dword ptr ds : [edi+4], edx
        jmp public_65f32ed
        public_65f32df : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_65f32ea
        mov dword ptr ds : [edi], edx
        jmp public_65f32ed
        public_65f32ea : nop
        mov dword ptr ds : [edi+8], edx
        public_65f32ed : nop
        mov dword ptr ds : [edx], ecx
        public_65f32ef : nop
        mov dword ptr ds : [ecx+4], edx
        public_65f32f2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_65f3161
        public_65f32fe : nop
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
        UNREACHABLE_TRAP(0x65f30d0)
    }
}

#undef public_65f3139
#undef public_65f314d
#undef public_65f3153
#undef public_65f3161
#undef public_65f31a2
#undef public_65f31bb
#undef public_65f31ce
#undef public_65f31d9
#undef public_65f31dc
#undef public_65f31e1
#undef public_65f320a
#undef public_65f3223
#undef public_65f3236
#undef public_65f3240
#undef public_65f3263
#undef public_65f327b
#undef public_65f328e
#undef public_65f329b
#undef public_65f329d
#undef public_65f32a3
#undef public_65f32cc
#undef public_65f32df
#undef public_65f32ea
#undef public_65f32ed
#undef public_65f32ef
#undef public_65f32f2
#undef public_65f32fe
