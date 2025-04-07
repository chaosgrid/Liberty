#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ece6e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ece716 _public_6ece716
#define public_6ece718 _public_6ece718
#define public_6ece720 _public_6ece720
#define public_6ece725 _public_6ece725
#define public_6ece731 _public_6ece731
#define public_6ece752 _public_6ece752
#define public_6ece75a _public_6ece75a
#define public_6ece764 _public_6ece764
#define public_6ece770 _public_6ece770
#define public_6ece77c _public_6ece77c
#define public_6ece782 _public_6ece782
#define public_6ece7a0 _public_6ece7a0
#define public_6ece7a8 _public_6ece7a8
#define public_6ece7b2 _public_6ece7b2
#define public_6ece7ee _public_6ece7ee
#define public_6ece80b _public_6ece80b
#define public_6ece830 _public_6ece830
#define public_6ece83c _public_6ece83c
#define public_6ece846 _public_6ece846
#define public_6ece858 _public_6ece858
#define public_6ece860 _public_6ece860
#define public_6ece866 _public_6ece866
#define public_6ece870 _public_6ece870
#define public_6ece87b _public_6ece87b
#define public_6ece888 _public_6ece888
#define public_6ece8a0 _public_6ece8a0
#define public_6ece8a8 _public_6ece8a8
#define public_6ece8b2 _public_6ece8b2
#define public_6ece8c0 _public_6ece8c0
#define public_6ece8cf _public_6ece8cf
#define public_6ece8e0 _public_6ece8e0
#define public_6ece8eb _public_6ece8eb
#define public_6ece8ee _public_6ece8ee

PROC_DECLARE(0x6ece6e0, internal_6ece6e0, public_6ece6e0);
extern "C" NAKED register_t __cdecl internal_6ece6e0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_6ece80b
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_6ece716
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ebp, ecx
        jb public_6ece718
        public_6ece716 : nop
        mov ecx, ebp
        public_6ece718 : nop
        test edx, edx
        jne public_6ece720
        xor eax, eax
        jmp public_6ece725
        public_6ece720 : nop
        sub eax, edx
        sar eax, 2
        public_6ece725 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6ece731
        xor eax, eax
        public_6ece731 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6ed0c5c
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6ece764
        public_6ece752 : nop
        test ecx, ecx
        je public_6ece75a
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_6ece75a : nop
        add eax, 4
        add ecx, 4
        cmp eax, ebx
        jne public_6ece752
        public_6ece764 : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_6ece782
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_6ece770 : nop
        test eax, eax
        je public_6ece77c
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6ece77c : nop
        add eax, 4
        dec edx
        jne public_6ece770
        public_6ece782 : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*4]
        lea edx, ds:[esi+ecx]
        je public_6ece7b2
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        nop 
        lea esp, ss:[esp]
        public_6ece7a0 : nop
        test edx, edx
        je public_6ece7a8
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_6ece7a8 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_6ece7a0
        public_6ece7b2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6ed0c50
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6ece7ee
        xor eax, eax
        mov eax, ebp
        pop edi
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6ece7ee : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        add eax, ebp
        pop edi
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6ece80b : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, ebp
        jae public_6ece888
        cmp edx, eax
        lea ebx, ds:[ebp*4]
        lea esi, ds:[ebx+edx]
        je public_6ece846
        mov ecx, esi
        sub ecx, ebx
        lea esp, ss:[esp]
        public_6ece830 : nop
        test esi, esi
        je public_6ece83c
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6ece83c : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6ece830
        public_6ece846 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        sub ebp, ecx
        je public_6ece866
        public_6ece858 : nop
        test eax, eax
        je public_6ece860
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_6ece860 : nop
        add eax, 4
        dec ebp
        jne public_6ece858
        public_6ece866 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp edx, ecx
        mov eax, edx
        je public_6ece87b
        nop 
        public_6ece870 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6ece870
        public_6ece87b : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6ece888 : nop
        test ebp, ebp
        jbe public_6ece8ee
        shl ebp, 2
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov esi, eax
        je public_6ece8b2
        lea esp, ss:[esp]
        public_6ece8a0 : nop
        test esi, esi
        je public_6ece8a8
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], ebx
        public_6ece8a8 : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6ece8a0
        public_6ece8b2 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        je public_6ece8cf
        lea ecx, ds:[ecx]
        public_6ece8c0 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edx
        mov dword ptr ds : [ecx], esi
        jne public_6ece8c0
        public_6ece8cf : nop
        lea ecx, ds:[edx+ebp]
        cmp edx, ecx
        mov eax, edx
        je public_6ece8eb
        mov edx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6ece8e0 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_6ece8e0
        public_6ece8eb : nop
        add dword ptr ds : [edi+8], ebp
        public_6ece8ee : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6ece6e0)
    }
}

#undef public_6ece716
#undef public_6ece718
#undef public_6ece720
#undef public_6ece725
#undef public_6ece731
#undef public_6ece752
#undef public_6ece75a
#undef public_6ece764
#undef public_6ece770
#undef public_6ece77c
#undef public_6ece782
#undef public_6ece7a0
#undef public_6ece7a8
#undef public_6ece7b2
#undef public_6ece7ee
#undef public_6ece80b
#undef public_6ece830
#undef public_6ece83c
#undef public_6ece846
#undef public_6ece858
#undef public_6ece860
#undef public_6ece866
#undef public_6ece870
#undef public_6ece87b
#undef public_6ece888
#undef public_6ece8a0
#undef public_6ece8a8
#undef public_6ece8b2
#undef public_6ece8c0
#undef public_6ece8cf
#undef public_6ece8e0
#undef public_6ece8eb
#undef public_6ece8ee
