#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b766f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b76fd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b782a0);

#define public_6b76714 _public_6b76714
#define public_6b76732 _public_6b76732
#define public_6b7673d _public_6b7673d
#define public_6b76746 _public_6b76746
#define public_6b76751 _public_6b76751
#define public_6b7676f _public_6b7676f
#define public_6b76786 _public_6b76786
#define public_6b76793 _public_6b76793
#define public_6b7679e _public_6b7679e
#define public_6b767a1 _public_6b767a1
#define public_6b767b9 _public_6b767b9
#define public_6b767c4 _public_6b767c4
#define public_6b767c7 _public_6b767c7
#define public_6b767de _public_6b767de
#define public_6b767e9 _public_6b767e9
#define public_6b767f4 _public_6b767f4
#define public_6b767f7 _public_6b767f7
#define public_6b7680d _public_6b7680d
#define public_6b76819 _public_6b76819
#define public_6b76825 _public_6b76825
#define public_6b76828 _public_6b76828
#define public_6b76843 _public_6b76843
#define public_6b76882 _public_6b76882
#define public_6b76895 _public_6b76895
#define public_6b768a0 _public_6b768a0
#define public_6b768a3 _public_6b768a3
#define public_6b768ae _public_6b768ae
#define public_6b768c1 _public_6b768c1
#define public_6b768e8 _public_6b768e8
#define public_6b76902 _public_6b76902
#define public_6b76928 _public_6b76928
#define public_6b7693b _public_6b7693b
#define public_6b76948 _public_6b76948
#define public_6b7694a _public_6b7694a
#define public_6b76955 _public_6b76955
#define public_6b7696c _public_6b7696c
#define public_6b76984 _public_6b76984
#define public_6b76991 _public_6b76991
#define public_6b76993 _public_6b76993
#define public_6b7699f _public_6b7699f
#define public_6b769c9 _public_6b769c9
#define public_6b769e1 _public_6b769e1
#define public_6b769f1 _public_6b769f1
#define public_6b769fb _public_6b769fb
#define public_6b76a1e _public_6b76a1e
#define public_6b76a31 _public_6b76a31
#define public_6b76a3c _public_6b76a3c
#define public_6b76a3f _public_6b76a3f
#define public_6b76a49 _public_6b76a49
#define public_6b76a72 _public_6b76a72
#define public_6b76a85 _public_6b76a85
#define public_6b76a92 _public_6b76a92
#define public_6b76a94 _public_6b76a94
#define public_6b76a97 _public_6b76a97
#define public_6b76a9e _public_6b76a9e
#define public_6b76aa1 _public_6b76aa1
#define public_6b76abe _public_6b76abe
#define public_6b76acd _public_6b76acd
#define public_6b76ad3 _public_6b76ad3

PROC_DECLARE(0x6b766f0, internal_6b766f0, public_6b766f0);
extern "C" NAKED register_t __cdecl internal_6b766f0()
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
        call public_6b76fd0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6b76732
        mov eax, dword ptr ds : [esi+8]
        public_6b76714 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6b767b9
        mov dword ptr ds : [ecx+4], eax
        jmp public_6b767c7
        public_6b76732 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6b7673d
        mov eax, edx
        jmp public_6b76714
        public_6b7673d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        jne public_6b76751
        public_6b76746 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x25]
        test bl, bl
        je public_6b76746
        public_6b76751 : nop
        mov eax, dword ptr ds : [ecx+8]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6b76714
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [esi+8]
        cmp ecx, edx
        jne public_6b7676f
        mov dword ptr ds : [eax+4], ecx
        jmp public_6b76786
        public_6b7676f : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6b76786 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6b76793
        mov dword ptr ds : [edx+4], ecx
        jmp public_6b767a1
        public_6b76793 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6b7679e
        mov dword ptr ds : [edx], ecx
        jmp public_6b767a1
        public_6b7679e : nop
        mov dword ptr ds : [edx+8], ecx
        public_6b767a1 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x24]
        mov dl, byte ptr ds : [ecx+0x24]
        mov byte ptr ds : [ecx+0x24], bl
        mov byte ptr ds : [esi+0x24], dl
        jmp public_6b76828
        public_6b767b9 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6b767c4
        mov dword ptr ds : [ecx], eax
        jmp public_6b767c7
        public_6b767c4 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6b767c7 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6b767f7
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_6b767de
        mov edx, dword ptr ds : [esi+4]
        jmp public_6b767f4
        public_6b767de : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        jne public_6b767f4
        public_6b767e9 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_6b767e9
        public_6b767f4 : nop
        mov dword ptr ss : [ebp], edx
        public_6b767f7 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6b76828
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_6b7680d
        mov edx, dword ptr ds : [esi+4]
        jmp public_6b76825
        public_6b7680d : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        jne public_6b76825
        public_6b76819 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_6b76819
        public_6b76825 : nop
        mov dword ptr ss : [ebp+8], edx
        public_6b76828 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov bl, 1
        cmp byte ptr ss : [ebp+0x24], bl
        jne public_6b76aa1
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6b76a9e
        public_6b76843 : nop
        cmp byte ptr ds : [eax+0x24], bl
        jne public_6b76a9e
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6b76902
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6b768ae
        mov byte ptr ds : [ecx+0x24], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b76882
        mov dword ptr ds : [esi+4], ecx
        public_6b76882 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b76895
        mov dword ptr ds : [esi+4], edx
        jmp public_6b768a3
        public_6b76895 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6b768a0
        mov dword ptr ds : [esi], edx
        jmp public_6b768a3
        public_6b768a0 : nop
        mov dword ptr ds : [esi+8], edx
        public_6b768a3 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6b768ae : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6b768c1
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        je public_6b7696c
        public_6b768c1 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6b7699f
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b768e8
        mov dword ptr ds : [esi+4], ecx
        public_6b768e8 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b76984
        mov dword ptr ds : [esi+4], edx
        jmp public_6b76993
        public_6b76902 : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6b76955
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b76928
        mov dword ptr ds : [esi+4], ecx
        public_6b76928 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b7693b
        mov dword ptr ds : [esi+4], edx
        jmp public_6b7694a
        public_6b7693b : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6b76948
        mov dword ptr ds : [esi+8], edx
        jmp public_6b7694a
        public_6b76948 : nop
        mov dword ptr ds : [esi], edx
        public_6b7694a : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6b76955 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6b769fb
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6b769fb
        public_6b7696c : nop
        mov byte ptr ds : [ecx+0x24], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6b76843
        jmp public_6b76a9e
        public_6b76984 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6b76991
        mov dword ptr ds : [esi+8], edx
        jmp public_6b76993
        public_6b76991 : nop
        mov dword ptr ds : [esi], edx
        public_6b76993 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6b7699f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b769c9
        mov dword ptr ds : [esi+4], ecx
        public_6b769c9 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b769e1
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6b76a97
        public_6b769e1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6b769f1
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6b76a97
        public_6b769f1 : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6b76a97
        public_6b769fb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x24], bl
        jne public_6b76a49
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x24], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x24], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b76a1e
        mov dword ptr ds : [esi+4], ecx
        public_6b76a1e : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b76a31
        mov dword ptr ds : [esi+4], edx
        jmp public_6b76a3f
        public_6b76a31 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6b76a3c
        mov dword ptr ds : [esi], edx
        jmp public_6b76a3f
        public_6b76a3c : nop
        mov dword ptr ds : [esi+8], edx
        public_6b76a3f : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6b76a49 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x24]
        mov byte ptr ds : [ecx+0x24], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x24], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x24], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b76a72
        mov dword ptr ds : [esi+4], ecx
        public_6b76a72 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b76a85
        mov dword ptr ds : [esi+4], edx
        jmp public_6b76a94
        public_6b76a85 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6b76a92
        mov dword ptr ds : [esi+8], edx
        jmp public_6b76a94
        public_6b76a92 : nop
        mov dword ptr ds : [esi], edx
        public_6b76a94 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6b76a97 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], edx
        public_6b76a9e : nop
        mov byte ptr ds : [eax+0x24], bl
        public_6b76aa1 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        xor esi, esi
        cmp eax, esi
        je public_6b76acd
        mov eax, dword ptr ss : [ebp+0x18]
        cmp eax, esi
        je public_6b76abe
        push eax
        call dword ptr ds : [public_6b79010]
        mov dword ptr ss : [ebp+0x18], esi
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b76abe : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        call dword ptr ds : [public_6b79014]
        mov dword ptr ss : [ebp+0x14], esi
        jmp public_6b76ad3
        public_6b76acd : nop
        mov dword ptr ss : [ebp+0x18], esi
        mov dword ptr ss : [ebp+0x1C], esi
        public_6b76ad3 : nop
        push ebp
        call public_6b782a0
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
        UNREACHABLE_TRAP(0x6b766f0)
    }
}

#undef public_6b76714
#undef public_6b76732
#undef public_6b7673d
#undef public_6b76746
#undef public_6b76751
#undef public_6b7676f
#undef public_6b76786
#undef public_6b76793
#undef public_6b7679e
#undef public_6b767a1
#undef public_6b767b9
#undef public_6b767c4
#undef public_6b767c7
#undef public_6b767de
#undef public_6b767e9
#undef public_6b767f4
#undef public_6b767f7
#undef public_6b7680d
#undef public_6b76819
#undef public_6b76825
#undef public_6b76828
#undef public_6b76843
#undef public_6b76882
#undef public_6b76895
#undef public_6b768a0
#undef public_6b768a3
#undef public_6b768ae
#undef public_6b768c1
#undef public_6b768e8
#undef public_6b76902
#undef public_6b76928
#undef public_6b7693b
#undef public_6b76948
#undef public_6b7694a
#undef public_6b76955
#undef public_6b7696c
#undef public_6b76984
#undef public_6b76991
#undef public_6b76993
#undef public_6b7699f
#undef public_6b769c9
#undef public_6b769e1
#undef public_6b769f1
#undef public_6b769fb
#undef public_6b76a1e
#undef public_6b76a31
#undef public_6b76a3c
#undef public_6b76a3f
#undef public_6b76a49
#undef public_6b76a72
#undef public_6b76a85
#undef public_6b76a92
#undef public_6b76a94
#undef public_6b76a97
#undef public_6b76a9e
#undef public_6b76aa1
#undef public_6b76abe
#undef public_6b76acd
#undef public_6b76ad3
