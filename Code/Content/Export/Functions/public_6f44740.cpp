#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f03670);
CLANG_FORWARD_PROC_SYMBOL(public_6f44740);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f44764 _public_6f44764
#define public_6f44782 _public_6f44782
#define public_6f4478d _public_6f4478d
#define public_6f44796 _public_6f44796
#define public_6f447a1 _public_6f447a1
#define public_6f447bd _public_6f447bd
#define public_6f447d4 _public_6f447d4
#define public_6f447e1 _public_6f447e1
#define public_6f447ec _public_6f447ec
#define public_6f447ef _public_6f447ef
#define public_6f44807 _public_6f44807
#define public_6f44812 _public_6f44812
#define public_6f44815 _public_6f44815
#define public_6f4482a _public_6f4482a
#define public_6f44835 _public_6f44835
#define public_6f44840 _public_6f44840
#define public_6f44843 _public_6f44843
#define public_6f44857 _public_6f44857
#define public_6f44863 _public_6f44863
#define public_6f4486f _public_6f4486f
#define public_6f44872 _public_6f44872
#define public_6f44890 _public_6f44890
#define public_6f448cf _public_6f448cf
#define public_6f448e2 _public_6f448e2
#define public_6f448ed _public_6f448ed
#define public_6f448f0 _public_6f448f0
#define public_6f448fb _public_6f448fb
#define public_6f4490e _public_6f4490e
#define public_6f44935 _public_6f44935
#define public_6f4494f _public_6f4494f
#define public_6f44975 _public_6f44975
#define public_6f44988 _public_6f44988
#define public_6f44995 _public_6f44995
#define public_6f44997 _public_6f44997
#define public_6f449a2 _public_6f449a2
#define public_6f449b9 _public_6f449b9
#define public_6f449d1 _public_6f449d1
#define public_6f449de _public_6f449de
#define public_6f449e0 _public_6f449e0
#define public_6f449ec _public_6f449ec
#define public_6f44a16 _public_6f44a16
#define public_6f44a2e _public_6f44a2e
#define public_6f44a3e _public_6f44a3e
#define public_6f44a48 _public_6f44a48
#define public_6f44a6b _public_6f44a6b
#define public_6f44a7e _public_6f44a7e
#define public_6f44a89 _public_6f44a89
#define public_6f44a8c _public_6f44a8c
#define public_6f44a96 _public_6f44a96
#define public_6f44abf _public_6f44abf
#define public_6f44ad2 _public_6f44ad2
#define public_6f44adf _public_6f44adf
#define public_6f44ae1 _public_6f44ae1
#define public_6f44ae4 _public_6f44ae4
#define public_6f44ae7 _public_6f44ae7
#define public_6f44aea _public_6f44aea

PROC_DECLARE(0x6f44740, internal_6f44740, public_6f44740);
extern "C" NAKED register_t __cdecl internal_6f44740()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_6f03670
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f44782
        mov eax, dword ptr ds : [esi+8]
        public_6f44764 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f44807
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f44815
        public_6f44782 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f4478d
        mov eax, edx
        jmp public_6f44764
        public_6f4478d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6f447a1
        public_6f44796 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6f44796
        public_6f447a1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f44764
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f447bd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f447d4
        public_6f447bd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f447d4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f447e1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f447ef
        public_6f447e1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f447ec
        mov dword ptr ds : [edx], ecx
        jmp public_6f447ef
        public_6f447ec : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f447ef : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f44872
        public_6f44807 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f44812
        mov dword ptr ds : [ecx], eax
        jmp public_6f44815
        public_6f44812 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f44815 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f44843
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f4482a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f44840
        public_6f4482a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6f44840
        public_6f44835 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6f44835
        public_6f44840 : nop
        mov dword ptr ss : [ebp], edx
        public_6f44843 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f44872
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f44857
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f4486f
        public_6f44857 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6f4486f
        public_6f44863 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6f44863
        public_6f4486f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f44872 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x20]
        mov bl, 1
        cmp dl, bl
        jne public_6f44aea
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f44ae7
        nop 
        public_6f44890 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_6f44ae7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f4494f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f448fb
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f448cf
        mov dword ptr ds : [esi+4], ecx
        public_6f448cf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f448e2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f448f0
        public_6f448e2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f448ed
        mov dword ptr ds : [esi], edx
        jmp public_6f448f0
        public_6f448ed : nop
        mov dword ptr ds : [esi+8], edx
        public_6f448f0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f448fb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f4490e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_6f449b9
        public_6f4490e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f449ec
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f44935
        mov dword ptr ds : [esi+4], ecx
        public_6f44935 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f449d1
        mov dword ptr ds : [esi+4], edx
        jmp public_6f449e0
        public_6f4494f : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f449a2
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f44975
        mov dword ptr ds : [esi+4], ecx
        public_6f44975 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f44988
        mov dword ptr ds : [esi+4], edx
        jmp public_6f44997
        public_6f44988 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f44995
        mov dword ptr ds : [esi+8], edx
        jmp public_6f44997
        public_6f44995 : nop
        mov dword ptr ds : [esi], edx
        public_6f44997 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f449a2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f44a48
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f44a48
        public_6f449b9 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f44890
        jmp public_6f44ae7
        public_6f449d1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f449de
        mov dword ptr ds : [esi+8], edx
        jmp public_6f449e0
        public_6f449de : nop
        mov dword ptr ds : [esi], edx
        public_6f449e0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f449ec : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f44a16
        mov dword ptr ds : [esi+4], ecx
        public_6f44a16 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f44a2e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f44ae4
        public_6f44a2e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f44a3e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f44ae4
        public_6f44a3e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f44ae4
        public_6f44a48 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6f44a96
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f44a6b
        mov dword ptr ds : [esi+4], ecx
        public_6f44a6b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f44a7e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f44a8c
        public_6f44a7e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f44a89
        mov dword ptr ds : [esi], edx
        jmp public_6f44a8c
        public_6f44a89 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f44a8c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f44a96 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f44abf
        mov dword ptr ds : [esi+4], ecx
        public_6f44abf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f44ad2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f44ae1
        public_6f44ad2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f44adf
        mov dword ptr ds : [esi+8], edx
        jmp public_6f44ae1
        public_6f44adf : nop
        mov dword ptr ds : [esi], edx
        public_6f44ae1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f44ae4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f44ae7 : nop
        mov byte ptr ds : [eax+0x20], bl
        public_6f44aea : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f44740)
    }
}

#undef public_6f44764
#undef public_6f44782
#undef public_6f4478d
#undef public_6f44796
#undef public_6f447a1
#undef public_6f447bd
#undef public_6f447d4
#undef public_6f447e1
#undef public_6f447ec
#undef public_6f447ef
#undef public_6f44807
#undef public_6f44812
#undef public_6f44815
#undef public_6f4482a
#undef public_6f44835
#undef public_6f44840
#undef public_6f44843
#undef public_6f44857
#undef public_6f44863
#undef public_6f4486f
#undef public_6f44872
#undef public_6f44890
#undef public_6f448cf
#undef public_6f448e2
#undef public_6f448ed
#undef public_6f448f0
#undef public_6f448fb
#undef public_6f4490e
#undef public_6f44935
#undef public_6f4494f
#undef public_6f44975
#undef public_6f44988
#undef public_6f44995
#undef public_6f44997
#undef public_6f449a2
#undef public_6f449b9
#undef public_6f449d1
#undef public_6f449de
#undef public_6f449e0
#undef public_6f449ec
#undef public_6f44a16
#undef public_6f44a2e
#undef public_6f44a3e
#undef public_6f44a48
#undef public_6f44a6b
#undef public_6f44a7e
#undef public_6f44a89
#undef public_6f44a8c
#undef public_6f44a96
#undef public_6f44abf
#undef public_6f44ad2
#undef public_6f44adf
#undef public_6f44ae1
#undef public_6f44ae4
#undef public_6f44ae7
#undef public_6f44aea
