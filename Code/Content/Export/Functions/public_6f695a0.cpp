#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead810);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7310);
CLANG_FORWARD_PROC_SYMBOL(public_6f5c720);
CLANG_FORWARD_PROC_SYMBOL(public_6f695a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a670);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f695df _public_6f695df
#define public_6f695e4 _public_6f695e4
#define public_6f695ec _public_6f695ec
#define public_6f695f1 _public_6f695f1
#define public_6f695fd _public_6f695fd
#define public_6f69616 _public_6f69616
#define public_6f6962a _public_6f6962a
#define public_6f6968c _public_6f6968c
#define public_6f696d1 _public_6f696d1
#define public_6f696f8 _public_6f696f8
#define public_6f69710 _public_6f69710
#define public_6f69738 _public_6f69738
#define public_6f69740 _public_6f69740
#define public_6f69763 _public_6f69763
#define public_6f69769 _public_6f69769

PROC_DECLARE(0x6f695a0, internal_6f695a0, public_6f695a0);
extern "C" NAKED register_t __cdecl internal_6f695a0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, edi
        sub ecx, eax
        sub ebp, edx
        sar ebp, 4
        sar ecx, 4
        cmp ecx, 1
        mov dword ptr ss : [esp+0x1C], ebp
        jae public_6f6968c
        test edx, edx
        je public_6f695df
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        cmp ecx, 1
        ja public_6f695e4
        public_6f695df : nop
        mov ecx, 1
        public_6f695e4 : nop
        test edx, edx
        jne public_6f695ec
        xor eax, eax
        jmp public_6f695f1
        public_6f695ec : nop
        sub eax, edx
        sar eax, 4
        public_6f695f1 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_6f695fd
        xor eax, eax
        public_6f695fd : nop
        shl eax, 4
        push eax
        call public_6fa912a
        mov ebx, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x14], eax
        mov ebp, eax
        je public_6f6962a
        public_6f69616 : nop
        push ebx
        push ebp
        call public_6f6a670
        add ebx, 0x10
        add esp, 8
        add ebp, 0x10
        cmp ebx, edi
        jne public_6f69616
        public_6f6962a : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push ebp
        call public_6f6a670
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        add ebp, 0x10
        push ebp
        push eax
        push edi
        mov ecx, esi
        call public_6eb7310
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_6ea1490
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        shl eax, 4
        add eax, edi
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_6ead810
        mov ebp, dword ptr ss : [esp+0x1C]
        inc eax
        shl eax, 4
        add eax, edi
        mov dword ptr ds : [esi+4], edi
        jmp public_6f69769
        public_6f6968c : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 4
        cmp ecx, 1
        mov ecx, esi
        jae public_6f696f8
        lea edx, ds:[edi+0x10]
        push edx
        push eax
        push edi
        call public_6eb7310
        mov eax, dword ptr ds : [esi+8]
        mov ebx, dword ptr ss : [esp+0x20]
        mov ecx, eax
        sub ecx, edi
        sar ecx, 4
        push ebx
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_6f5c720
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6f69763
        public_6f696d1 : nop
        mov edx, ebx
        mov ebp, dword ptr ds : [edx]
        mov edi, eax
        mov dword ptr ds : [edi], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+4], ebp
        mov ebp, dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+8], ebp
        mov edx, dword ptr ds : [edx+0xC]
        add eax, 0x10
        cmp eax, ecx
        mov dword ptr ds : [edi+0xC], edx
        jne public_6f696d1
        mov ebp, dword ptr ss : [esp+0x1C]
        jmp public_6f69763
        public_6f696f8 : nop
        push eax
        push eax
        add eax, 0xFFFFFFF0
        push eax
        call public_6eb7310
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-0x10]
        cmp edi, eax
        je public_6f69738
        lea ecx, ds:[ecx]
        public_6f69710 : nop
        sub eax, 0x10
        sub ecx, 0x10
        cmp eax, edi
        mov edx, eax
        mov ebp, dword ptr ds : [edx]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], ebp
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        jne public_6f69710
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6f69738 : nop
        lea eax, ds:[edi+0x10]
        cmp edi, eax
        je public_6f69763
        nop 
        public_6f69740 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [ecx]
        mov edx, edi
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebx
        mov ebx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ebx
        mov ecx, dword ptr ds : [ecx+0xC]
        add edi, 0x10
        cmp edi, eax
        mov dword ptr ds : [edx+0xC], ecx
        jne public_6f69740
        public_6f69763 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x10
        public_6f69769 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov eax, ebp
        pop esi
        shl eax, 4
        pop ebp
        add eax, ecx
        pop ebx
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6f695a0)
    }
}

#undef public_6f695df
#undef public_6f695e4
#undef public_6f695ec
#undef public_6f695f1
#undef public_6f695fd
#undef public_6f69616
#undef public_6f6962a
#undef public_6f6968c
#undef public_6f696d1
#undef public_6f696f8
#undef public_6f69710
#undef public_6f69738
#undef public_6f69740
#undef public_6f69763
#undef public_6f69769
