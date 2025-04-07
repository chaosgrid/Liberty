#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_633f580);
CLANG_FORWARD_PROC_SYMBOL(public_633fc90);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_633f5a4 _public_633f5a4
#define public_633f5c2 _public_633f5c2
#define public_633f5cd _public_633f5cd
#define public_633f5e0 _public_633f5e0
#define public_633f5ee _public_633f5ee
#define public_633f60a _public_633f60a
#define public_633f621 _public_633f621
#define public_633f62e _public_633f62e
#define public_633f639 _public_633f639
#define public_633f63c _public_633f63c
#define public_633f660 _public_633f660
#define public_633f66b _public_633f66b
#define public_633f66e _public_633f66e
#define public_633f683 _public_633f683
#define public_633f691 _public_633f691
#define public_633f69f _public_633f69f
#define public_633f6a2 _public_633f6a2
#define public_633f6b6 _public_633f6b6
#define public_633f6c5 _public_633f6c5
#define public_633f6d4 _public_633f6d4
#define public_633f6d7 _public_633f6d7
#define public_633f6f7 _public_633f6f7
#define public_633f742 _public_633f742
#define public_633f755 _public_633f755
#define public_633f760 _public_633f760
#define public_633f763 _public_633f763
#define public_633f76e _public_633f76e
#define public_633f787 _public_633f787
#define public_633f7b7 _public_633f7b7
#define public_633f7d1 _public_633f7d1
#define public_633f800 _public_633f800
#define public_633f813 _public_633f813
#define public_633f820 _public_633f820
#define public_633f822 _public_633f822
#define public_633f82d _public_633f82d
#define public_633f84a _public_633f84a
#define public_633f865 _public_633f865
#define public_633f872 _public_633f872
#define public_633f874 _public_633f874
#define public_633f880 _public_633f880
#define public_633f8b6 _public_633f8b6
#define public_633f8ce _public_633f8ce
#define public_633f8de _public_633f8de
#define public_633f8e8 _public_633f8e8
#define public_633f914 _public_633f914
#define public_633f927 _public_633f927
#define public_633f932 _public_633f932
#define public_633f935 _public_633f935
#define public_633f93f _public_633f93f
#define public_633f974 _public_633f974
#define public_633f987 _public_633f987
#define public_633f994 _public_633f994
#define public_633f996 _public_633f996
#define public_633f999 _public_633f999
#define public_633f99c _public_633f99c
#define public_633f9a6 _public_633f9a6

PROC_DECLARE(0x633f580, internal_633f580, public_633f580);
extern "C" NAKED register_t __cdecl internal_633f580()
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
        call public_633fc90
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_633f5c2
        mov eax, dword ptr ds : [esi+8]
        public_633f5a4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_633f660
        mov dword ptr ds : [ecx+4], eax
        jmp public_633f66e
        public_633f5c2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_633f5cd
        mov eax, edx
        jmp public_633f5a4
        public_633f5cd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0xA9]
        test bl, bl
        jne public_633f5ee
        lea esp, ss:[esp]
        public_633f5e0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0xA9]
        test bl, bl
        je public_633f5e0
        public_633f5ee : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_633f5a4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_633f60a
        mov dword ptr ds : [eax+4], ecx
        jmp public_633f621
        public_633f60a : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_633f621 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_633f62e
        mov dword ptr ds : [edx+4], ecx
        jmp public_633f63c
        public_633f62e : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_633f639
        mov dword ptr ds : [edx], ecx
        jmp public_633f63c
        public_633f639 : nop
        mov dword ptr ds : [edx+8], ecx
        public_633f63c : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0xA8]
        mov dl, byte ptr ds : [ecx+0xA8]
        mov byte ptr ds : [ecx+0xA8], bl
        mov byte ptr ds : [esi+0xA8], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_633f6d7
        public_633f660 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_633f66b
        mov dword ptr ds : [ecx], eax
        jmp public_633f66e
        public_633f66b : nop
        mov dword ptr ds : [ecx+8], eax
        public_633f66e : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_633f6a2
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_633f683
        mov edx, dword ptr ds : [esi+4]
        jmp public_633f69f
        public_633f683 : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0xA9]
        test bl, bl
        mov edx, eax
        jne public_633f69f
        public_633f691 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0xA9]
        test bl, bl
        je public_633f691
        public_633f69f : nop
        mov dword ptr ss : [ebp], edx
        public_633f6a2 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_633f6d7
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_633f6b6
        mov edx, dword ptr ds : [esi+4]
        jmp public_633f6d4
        public_633f6b6 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0xA9]
        test bl, bl
        mov edx, eax
        jne public_633f6d4
        public_633f6c5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0xA9]
        test bl, bl
        je public_633f6c5
        public_633f6d4 : nop
        mov dword ptr ss : [ebp+8], edx
        public_633f6d7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0xA8]
        mov bl, 1
        cmp cl, bl
        jne public_633f9a6
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_633f99c
        public_633f6f7 : nop
        cmp byte ptr ds : [eax+0xA8], bl
        jne public_633f99c
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_633f7d1
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0xA8]
        test dl, dl
        jne public_633f76e
        mov byte ptr ds : [ecx+0xA8], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xA8], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_633f742
        mov dword ptr ds : [esi+4], ecx
        public_633f742 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_633f755
        mov dword ptr ds : [esi+4], edx
        jmp public_633f763
        public_633f755 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_633f760
        mov dword ptr ds : [esi], edx
        jmp public_633f763
        public_633f760 : nop
        mov dword ptr ds : [esi+8], edx
        public_633f763 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_633f76e : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xA8], bl
        jne public_633f787
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xA8], bl
        je public_633f84a
        public_633f787 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xA8], bl
        jne public_633f880
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0xA8], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0xA8], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_633f7b7
        mov dword ptr ds : [esi+4], ecx
        public_633f7b7 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_633f865
        mov dword ptr ds : [esi+4], edx
        jmp public_633f874
        public_633f7d1 : nop
        mov dl, byte ptr ds : [ecx+0xA8]
        test dl, dl
        jne public_633f82d
        mov byte ptr ds : [ecx+0xA8], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xA8], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_633f800
        mov dword ptr ds : [esi+4], ecx
        public_633f800 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_633f813
        mov dword ptr ds : [esi+4], edx
        jmp public_633f822
        public_633f813 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_633f820
        mov dword ptr ds : [esi+8], edx
        jmp public_633f822
        public_633f820 : nop
        mov dword ptr ds : [esi], edx
        public_633f822 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_633f82d : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0xA8], bl
        jne public_633f8e8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xA8], bl
        jne public_633f8e8
        public_633f84a : nop
        mov byte ptr ds : [ecx+0xA8], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_633f6f7
        jmp public_633f99c
        public_633f865 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_633f872
        mov dword ptr ds : [esi+8], edx
        jmp public_633f874
        public_633f872 : nop
        mov dword ptr ds : [esi], edx
        public_633f874 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_633f880 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0xA8]
        mov byte ptr ds : [ecx+0xA8], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xA8], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0xA8], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_633f8b6
        mov dword ptr ds : [esi+4], ecx
        public_633f8b6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_633f8ce
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_633f999
        public_633f8ce : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_633f8de
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_633f999
        public_633f8de : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_633f999
        public_633f8e8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0xA8], bl
        jne public_633f93f
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0xA8], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0xA8], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_633f914
        mov dword ptr ds : [esi+4], ecx
        public_633f914 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_633f927
        mov dword ptr ds : [esi+4], edx
        jmp public_633f935
        public_633f927 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_633f932
        mov dword ptr ds : [esi], edx
        jmp public_633f935
        public_633f932 : nop
        mov dword ptr ds : [esi+8], edx
        public_633f935 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_633f93f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0xA8]
        mov byte ptr ds : [ecx+0xA8], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0xA8], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0xA8], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_633f974
        mov dword ptr ds : [esi+4], ecx
        public_633f974 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_633f987
        mov dword ptr ds : [esi+4], edx
        jmp public_633f996
        public_633f987 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_633f994
        mov dword ptr ds : [esi+8], edx
        jmp public_633f996
        public_633f994 : nop
        mov dword ptr ds : [esi], edx
        public_633f996 : nop
        mov dword ptr ds : [edx+8], ecx
        public_633f999 : nop
        mov dword ptr ds : [ecx+4], edx
        public_633f99c : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0xA8], bl
        public_633f9a6 : nop
        lea ecx, ds:[esi+0xC]
        call public_633bbf0
        push esi
        call public_6391d5a
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x633f580)
    }
}

#undef public_633f5a4
#undef public_633f5c2
#undef public_633f5cd
#undef public_633f5e0
#undef public_633f5ee
#undef public_633f60a
#undef public_633f621
#undef public_633f62e
#undef public_633f639
#undef public_633f63c
#undef public_633f660
#undef public_633f66b
#undef public_633f66e
#undef public_633f683
#undef public_633f691
#undef public_633f69f
#undef public_633f6a2
#undef public_633f6b6
#undef public_633f6c5
#undef public_633f6d4
#undef public_633f6d7
#undef public_633f6f7
#undef public_633f742
#undef public_633f755
#undef public_633f760
#undef public_633f763
#undef public_633f76e
#undef public_633f787
#undef public_633f7b7
#undef public_633f7d1
#undef public_633f800
#undef public_633f813
#undef public_633f820
#undef public_633f822
#undef public_633f82d
#undef public_633f84a
#undef public_633f865
#undef public_633f872
#undef public_633f874
#undef public_633f880
#undef public_633f8b6
#undef public_633f8ce
#undef public_633f8de
#undef public_633f8e8
#undef public_633f914
#undef public_633f927
#undef public_633f932
#undef public_633f935
#undef public_633f93f
#undef public_633f974
#undef public_633f987
#undef public_633f994
#undef public_633f996
#undef public_633f999
#undef public_633f99c
#undef public_633f9a6
