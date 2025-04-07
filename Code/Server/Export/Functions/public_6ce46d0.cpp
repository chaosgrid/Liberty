#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce46d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5750);
CLANG_FORWARD_PROC_SYMBOL(public_6d572a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce46f4 _public_6ce46f4
#define public_6ce4712 _public_6ce4712
#define public_6ce471d _public_6ce471d
#define public_6ce4726 _public_6ce4726
#define public_6ce4731 _public_6ce4731
#define public_6ce474d _public_6ce474d
#define public_6ce4764 _public_6ce4764
#define public_6ce4771 _public_6ce4771
#define public_6ce477c _public_6ce477c
#define public_6ce477f _public_6ce477f
#define public_6ce4797 _public_6ce4797
#define public_6ce47a2 _public_6ce47a2
#define public_6ce47a5 _public_6ce47a5
#define public_6ce47ba _public_6ce47ba
#define public_6ce47c5 _public_6ce47c5
#define public_6ce47d0 _public_6ce47d0
#define public_6ce47d3 _public_6ce47d3
#define public_6ce47e7 _public_6ce47e7
#define public_6ce47f3 _public_6ce47f3
#define public_6ce47ff _public_6ce47ff
#define public_6ce4802 _public_6ce4802
#define public_6ce4820 _public_6ce4820
#define public_6ce485f _public_6ce485f
#define public_6ce4872 _public_6ce4872
#define public_6ce487d _public_6ce487d
#define public_6ce4880 _public_6ce4880
#define public_6ce488b _public_6ce488b
#define public_6ce489e _public_6ce489e
#define public_6ce48c5 _public_6ce48c5
#define public_6ce48df _public_6ce48df
#define public_6ce4905 _public_6ce4905
#define public_6ce4918 _public_6ce4918
#define public_6ce4925 _public_6ce4925
#define public_6ce4927 _public_6ce4927
#define public_6ce4932 _public_6ce4932
#define public_6ce4949 _public_6ce4949
#define public_6ce4961 _public_6ce4961
#define public_6ce496e _public_6ce496e
#define public_6ce4970 _public_6ce4970
#define public_6ce497c _public_6ce497c
#define public_6ce49a6 _public_6ce49a6
#define public_6ce49be _public_6ce49be
#define public_6ce49ce _public_6ce49ce
#define public_6ce49d8 _public_6ce49d8
#define public_6ce49fb _public_6ce49fb
#define public_6ce4a0e _public_6ce4a0e
#define public_6ce4a19 _public_6ce4a19
#define public_6ce4a1c _public_6ce4a1c
#define public_6ce4a26 _public_6ce4a26
#define public_6ce4a4f _public_6ce4a4f
#define public_6ce4a62 _public_6ce4a62
#define public_6ce4a6f _public_6ce4a6f
#define public_6ce4a71 _public_6ce4a71
#define public_6ce4a74 _public_6ce4a74
#define public_6ce4a77 _public_6ce4a77
#define public_6ce4a7e _public_6ce4a7e

PROC_DECLARE(0x6ce46d0, internal_6ce46d0, public_6ce46d0);
extern "C" NAKED register_t __cdecl internal_6ce46d0()
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
        call public_6ce5750
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6ce4712
        mov eax, dword ptr ds : [esi+8]
        public_6ce46f4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6ce4797
        mov dword ptr ds : [ecx+4], eax
        jmp public_6ce47a5
        public_6ce4712 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6ce471d
        mov eax, edx
        jmp public_6ce46f4
        public_6ce471d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6ce4731
        public_6ce4726 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6ce4726
        public_6ce4731 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6ce46f4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ce474d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6ce4764
        public_6ce474d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6ce4764 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6ce4771
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ce477f
        public_6ce4771 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6ce477c
        mov dword ptr ds : [edx], ecx
        jmp public_6ce477f
        public_6ce477c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ce477f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6ce4802
        public_6ce4797 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6ce47a2
        mov dword ptr ds : [ecx], eax
        jmp public_6ce47a5
        public_6ce47a2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6ce47a5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6ce47d3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ce47ba
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ce47d0
        public_6ce47ba : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6ce47d0
        public_6ce47c5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6ce47c5
        public_6ce47d0 : nop
        mov dword ptr ss : [ebp], edx
        public_6ce47d3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6ce4802
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ce47e7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6ce47ff
        public_6ce47e7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6ce47ff
        public_6ce47f3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6ce47f3
        public_6ce47ff : nop
        mov dword ptr ss : [ebp+8], edx
        public_6ce4802 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x20]
        mov bl, 1
        cmp cl, bl
        jne public_6ce4a7e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6ce4a77
        nop 
        public_6ce4820 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_6ce4a77
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6ce48df
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6ce488b
        mov byte ptr ds : [ecx+0x20], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce485f
        mov dword ptr ds : [esi+4], ecx
        public_6ce485f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce4872
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce4880
        public_6ce4872 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ce487d
        mov dword ptr ds : [esi], edx
        jmp public_6ce4880
        public_6ce487d : nop
        mov dword ptr ds : [esi+8], edx
        public_6ce4880 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ce488b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6ce489e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_6ce4949
        public_6ce489e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6ce497c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce48c5
        mov dword ptr ds : [esi+4], ecx
        public_6ce48c5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce4961
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce4970
        public_6ce48df : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6ce4932
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce4905
        mov dword ptr ds : [esi+4], ecx
        public_6ce4905 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce4918
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce4927
        public_6ce4918 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ce4925
        mov dword ptr ds : [esi+8], edx
        jmp public_6ce4927
        public_6ce4925 : nop
        mov dword ptr ds : [esi], edx
        public_6ce4927 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6ce4932 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6ce49d8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6ce49d8
        public_6ce4949 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ce4820
        jmp public_6ce4a77
        public_6ce4961 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ce496e
        mov dword ptr ds : [esi+8], edx
        jmp public_6ce4970
        public_6ce496e : nop
        mov dword ptr ds : [esi], edx
        public_6ce4970 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6ce497c : nop
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
        je public_6ce49a6
        mov dword ptr ds : [esi+4], ecx
        public_6ce49a6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce49be
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ce4a74
        public_6ce49be : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ce49ce
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ce4a74
        public_6ce49ce : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6ce4a74
        public_6ce49d8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6ce4a26
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6ce49fb
        mov dword ptr ds : [esi+4], ecx
        public_6ce49fb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce4a0e
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce4a1c
        public_6ce4a0e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6ce4a19
        mov dword ptr ds : [esi], edx
        jmp public_6ce4a1c
        public_6ce4a19 : nop
        mov dword ptr ds : [esi+8], edx
        public_6ce4a1c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6ce4a26 : nop
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
        je public_6ce4a4f
        mov dword ptr ds : [esi+4], ecx
        public_6ce4a4f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6ce4a62
        mov dword ptr ds : [esi+4], edx
        jmp public_6ce4a71
        public_6ce4a62 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6ce4a6f
        mov dword ptr ds : [esi+8], edx
        jmp public_6ce4a71
        public_6ce4a6f : nop
        mov dword ptr ds : [esi], edx
        public_6ce4a71 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ce4a74 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ce4a77 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x20], bl
        public_6ce4a7e : nop
        lea ecx, ds:[esi+0xC]
        call public_6d572a0
        push esi
        call public_6d5ffb0
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
        UNREACHABLE_TRAP(0x6ce46d0)
    }
}

#undef public_6ce46f4
#undef public_6ce4712
#undef public_6ce471d
#undef public_6ce4726
#undef public_6ce4731
#undef public_6ce474d
#undef public_6ce4764
#undef public_6ce4771
#undef public_6ce477c
#undef public_6ce477f
#undef public_6ce4797
#undef public_6ce47a2
#undef public_6ce47a5
#undef public_6ce47ba
#undef public_6ce47c5
#undef public_6ce47d0
#undef public_6ce47d3
#undef public_6ce47e7
#undef public_6ce47f3
#undef public_6ce47ff
#undef public_6ce4802
#undef public_6ce4820
#undef public_6ce485f
#undef public_6ce4872
#undef public_6ce487d
#undef public_6ce4880
#undef public_6ce488b
#undef public_6ce489e
#undef public_6ce48c5
#undef public_6ce48df
#undef public_6ce4905
#undef public_6ce4918
#undef public_6ce4925
#undef public_6ce4927
#undef public_6ce4932
#undef public_6ce4949
#undef public_6ce4961
#undef public_6ce496e
#undef public_6ce4970
#undef public_6ce497c
#undef public_6ce49a6
#undef public_6ce49be
#undef public_6ce49ce
#undef public_6ce49d8
#undef public_6ce49fb
#undef public_6ce4a0e
#undef public_6ce4a19
#undef public_6ce4a1c
#undef public_6ce4a26
#undef public_6ce4a4f
#undef public_6ce4a62
#undef public_6ce4a6f
#undef public_6ce4a71
#undef public_6ce4a74
#undef public_6ce4a77
#undef public_6ce4a7e
