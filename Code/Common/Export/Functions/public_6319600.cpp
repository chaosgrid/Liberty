#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6319600);
CLANG_FORWARD_PROC_SYMBOL(public_631a340);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6319669 _public_6319669
#define public_631967d _public_631967d
#define public_6319683 _public_6319683
#define public_6319691 _public_6319691
#define public_63196d2 _public_63196d2
#define public_63196eb _public_63196eb
#define public_63196fe _public_63196fe
#define public_6319709 _public_6319709
#define public_631970c _public_631970c
#define public_6319711 _public_6319711
#define public_631973a _public_631973a
#define public_6319753 _public_6319753
#define public_6319766 _public_6319766
#define public_6319770 _public_6319770
#define public_6319793 _public_6319793
#define public_63197ab _public_63197ab
#define public_63197be _public_63197be
#define public_63197cb _public_63197cb
#define public_63197cd _public_63197cd
#define public_63197d3 _public_63197d3
#define public_63197fc _public_63197fc
#define public_631980f _public_631980f
#define public_631981a _public_631981a
#define public_631981d _public_631981d
#define public_631981f _public_631981f
#define public_6319822 _public_6319822
#define public_631982e _public_631982e

PROC_DECLARE(0x6319600, internal_6319600, public_6319600);
extern "C" NAKED register_t __cdecl internal_6319600()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x78
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x74], 0
        mov byte ptr ds : [ebx+0x75], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_631a340
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6319669
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6319669
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6319669
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6319683
        mov dword ptr ds : [eax+8], ebx
        jmp public_6319683
        public_6319669 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_631967d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6319683
        public_631967d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6319683
        mov dword ptr ds : [eax], ebx
        public_6319683 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_631982e
        public_6319691 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x74]
        test dl, dl
        jne public_631982e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6319770
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x74], 0
        jne public_63196d2
        mov byte ptr ds : [ecx+0x74], 1
        mov byte ptr ds : [edx+0x74], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x74], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6319822
        public_63196d2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6319711
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_63196eb
        mov dword ptr ds : [edx+4], eax
        public_63196eb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_63196fe
        mov dword ptr ds : [edx+4], ecx
        jmp public_631970c
        public_63196fe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6319709
        mov dword ptr ds : [edx], ecx
        jmp public_631970c
        public_6319709 : nop
        mov dword ptr ds : [edx+8], ecx
        public_631970c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6319711 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x74], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x74], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_631973a
        mov dword ptr ds : [edi+4], ecx
        public_631973a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6319753
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_631981f
        public_6319753 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6319766
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_631981f
        public_6319766 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_631981f
        public_6319770 : nop
        cmp byte ptr ds : [edx+0x74], 0
        jne public_6319793
        mov byte ptr ds : [ecx+0x74], 1
        mov byte ptr ds : [edx+0x74], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x74], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6319822
        public_6319793 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_63197d3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_63197ab
        mov dword ptr ds : [edx+4], eax
        public_63197ab : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_63197be
        mov dword ptr ds : [edx+4], ecx
        jmp public_63197cd
        public_63197be : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_63197cb
        mov dword ptr ds : [edx+8], ecx
        jmp public_63197cd
        public_63197cb : nop
        mov dword ptr ds : [edx], ecx
        public_63197cd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_63197d3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x74], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x74], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_63197fc
        mov dword ptr ds : [edi+4], ecx
        public_63197fc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_631980f
        mov dword ptr ds : [edi+4], edx
        jmp public_631981d
        public_631980f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_631981a
        mov dword ptr ds : [edi], edx
        jmp public_631981d
        public_631981a : nop
        mov dword ptr ds : [edi+8], edx
        public_631981d : nop
        mov dword ptr ds : [edx], ecx
        public_631981f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6319822 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6319691
        public_631982e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x74], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6319600)
    }
}

#undef public_6319669
#undef public_631967d
#undef public_6319683
#undef public_6319691
#undef public_63196d2
#undef public_63196eb
#undef public_63196fe
#undef public_6319709
#undef public_631970c
#undef public_6319711
#undef public_631973a
#undef public_6319753
#undef public_6319766
#undef public_6319770
#undef public_6319793
#undef public_63197ab
#undef public_63197be
#undef public_63197cb
#undef public_63197cd
#undef public_63197d3
#undef public_63197fc
#undef public_631980f
#undef public_631981a
#undef public_631981d
#undef public_631981f
#undef public_6319822
#undef public_631982e
