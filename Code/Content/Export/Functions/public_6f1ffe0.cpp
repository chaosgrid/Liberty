#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1ffe0);
CLANG_FORWARD_PROC_SYMBOL(public_6f224f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f20049 _public_6f20049
#define public_6f2005d _public_6f2005d
#define public_6f20063 _public_6f20063
#define public_6f20071 _public_6f20071
#define public_6f200b2 _public_6f200b2
#define public_6f200cb _public_6f200cb
#define public_6f200de _public_6f200de
#define public_6f200e9 _public_6f200e9
#define public_6f200ec _public_6f200ec
#define public_6f200f1 _public_6f200f1
#define public_6f2011a _public_6f2011a
#define public_6f20133 _public_6f20133
#define public_6f20146 _public_6f20146
#define public_6f20150 _public_6f20150
#define public_6f20173 _public_6f20173
#define public_6f2018b _public_6f2018b
#define public_6f2019e _public_6f2019e
#define public_6f201ab _public_6f201ab
#define public_6f201ad _public_6f201ad
#define public_6f201b3 _public_6f201b3
#define public_6f201dc _public_6f201dc
#define public_6f201ef _public_6f201ef
#define public_6f201fa _public_6f201fa
#define public_6f201fd _public_6f201fd
#define public_6f201ff _public_6f201ff
#define public_6f20202 _public_6f20202
#define public_6f2020e _public_6f2020e

PROC_DECLARE(0x6f1ffe0, internal_6f1ffe0, public_6f1ffe0);
extern "C" NAKED register_t __cdecl internal_6f1ffe0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x20
        mov esi, ecx
        call public_6fa912a
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
        call public_6f224f0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f20049
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f20049
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f20049
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f20063
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f20063
        public_6f20049 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f2005d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f20063
        public_6f2005d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f20063
        mov dword ptr ds : [eax], ebx
        public_6f20063 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f2020e
        public_6f20071 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f2020e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f20150
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_6f200b2
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f20202
        public_6f200b2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f200f1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f200cb
        mov dword ptr ds : [edx+4], eax
        public_6f200cb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f200de
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f200ec
        public_6f200de : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f200e9
        mov dword ptr ds : [edx], ecx
        jmp public_6f200ec
        public_6f200e9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f200ec : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f200f1 : nop
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
        je public_6f2011a
        mov dword ptr ds : [edi+4], ecx
        public_6f2011a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f20133
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f201ff
        public_6f20133 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f20146
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f201ff
        public_6f20146 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f201ff
        public_6f20150 : nop
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_6f20173
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f20202
        public_6f20173 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f201b3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f2018b
        mov dword ptr ds : [edx+4], eax
        public_6f2018b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f2019e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f201ad
        public_6f2019e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f201ab
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f201ad
        public_6f201ab : nop
        mov dword ptr ds : [edx], ecx
        public_6f201ad : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f201b3 : nop
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
        je public_6f201dc
        mov dword ptr ds : [edi+4], ecx
        public_6f201dc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f201ef
        mov dword ptr ds : [edi+4], edx
        jmp public_6f201fd
        public_6f201ef : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f201fa
        mov dword ptr ds : [edi], edx
        jmp public_6f201fd
        public_6f201fa : nop
        mov dword ptr ds : [edi+8], edx
        public_6f201fd : nop
        mov dword ptr ds : [edx], ecx
        public_6f201ff : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f20202 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f20071
        public_6f2020e : nop
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
        UNREACHABLE_TRAP(0x6f1ffe0)
    }
}

#undef public_6f20049
#undef public_6f2005d
#undef public_6f20063
#undef public_6f20071
#undef public_6f200b2
#undef public_6f200cb
#undef public_6f200de
#undef public_6f200e9
#undef public_6f200ec
#undef public_6f200f1
#undef public_6f2011a
#undef public_6f20133
#undef public_6f20146
#undef public_6f20150
#undef public_6f20173
#undef public_6f2018b
#undef public_6f2019e
#undef public_6f201ab
#undef public_6f201ad
#undef public_6f201b3
#undef public_6f201dc
#undef public_6f201ef
#undef public_6f201fa
#undef public_6f201fd
#undef public_6f201ff
#undef public_6f20202
#undef public_6f2020e
