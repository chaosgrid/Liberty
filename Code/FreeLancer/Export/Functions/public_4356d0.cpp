#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4356d0);
CLANG_FORWARD_PROC_SYMBOL(public_4363b0);
CLANG_FORWARD_PROC_SYMBOL(public_436bb0);
CLANG_FORWARD_PROC_SYMBOL(public_4e5fc0);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5995f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4356e8 _public_4356e8
#define public_4356f0 _public_4356f0
#define public_4356f8 _public_4356f8
#define public_435706 _public_435706
#define public_435709 _public_435709
#define public_435718 _public_435718
#define public_435720 _public_435720
#define public_43572c _public_43572c
#define public_435750 _public_435750
#define public_435764 _public_435764
#define public_435789 _public_435789
#define public_435791 _public_435791
#define public_43579e _public_43579e
#define public_4357a0 _public_4357a0
#define public_4357af _public_4357af
#define public_4357b7 _public_4357b7
#define public_435803 _public_435803
#define public_435808 _public_435808
#define public_435819 _public_435819
#define public_43589f _public_43589f
#define public_4358e0 _public_4358e0
#define public_4358fe _public_4358fe
#define public_435915 _public_435915
#define public_43592a _public_43592a
#define public_435933 _public_435933
#define public_435947 _public_435947
#define public_43594b _public_43594b
#define public_435951 _public_435951

PROC_DECLARE(0x4356d0, internal_4356d0, public_4356d0);
extern "C" NAKED register_t __cdecl internal_4356d0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        xor edi, edi
        mov esi, ecx
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x10], edi
        xor edx, edx
        public_4356e8 : nop
        test ecx, ecx
        jne public_4356f0
        xor eax, eax
        jmp public_4356f8
        public_4356f0 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 2
        public_4356f8 : nop
        cmp edx, eax
        jge public_435709
        mov eax, dword ptr ds : [ecx+edx*4]
        cmp dword ptr ds : [eax+0x38], 3
        je public_435706
        inc edi
        public_435706 : nop
        inc edx
        jmp public_4356e8
        public_435709 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], edi
        jne public_435718
        xor eax, eax
        jmp public_435720
        public_435718 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 3
        public_435720 : nop
        cmp eax, edi
        jae public_43579e
        test edi, edi
        mov eax, edi
        jge public_43572c
        xor eax, eax
        public_43572c : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_5b7e84
        mov ebp, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        je public_435764
        lea esp, ss:[esp]
        public_435750 : nop
        push edi
        push ebx
        call public_4e5fc0
        add edi, 8
        add esp, 8
        add ebx, 8
        cmp edi, ebp
        jne public_435750
        public_435764 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edx+eax*8]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_435789
        xor eax, eax
        jmp public_435791
        public_435789 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        public_435791 : nop
        mov ebp, dword ptr ss : [esp+0x24]
        lea eax, ds:[edx+eax*8]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        public_43579e : nop
        xor ebx, ebx
        public_4357a0 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], ebx
        jne public_4357af
        xor eax, eax
        jmp public_4357b7
        public_4357af : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 2
        public_4357b7 : nop
        cmp ebx, eax
        jge public_435951
        mov eax, dword ptr ds : [ecx+ebx*4]
        cmp dword ptr ds : [eax+0x38], 3
        je public_43594b
        mov edi, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, edi
        sar ecx, 3
        cmp ecx, 1
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], 0
        jae public_43589f
        mov ecx, esi
        call public_5995f0
        cmp eax, 1
        jbe public_435803
        mov ecx, esi
        call public_5995f0
        mov ebx, eax
        jmp public_435808
        public_435803 : nop
        mov ebx, 1
        public_435808 : nop
        mov ecx, esi
        call public_5995f0
        mov ebp, eax
        add ebp, ebx
        mov eax, ebp
        jns public_435819
        xor eax, eax
        public_435819 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_5b7e84
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        push ebx
        push edi
        push eax
        mov ecx, esi
        call public_4363b0
        lea ecx, ss:[esp+0x18]
        push ecx
        push 1
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], eax
        call public_436bb0
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+8]
        add edx, 8
        push edx
        push eax
        push edi
        mov ecx, esi
        call public_4363b0
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov ecx, esi
        call public_53aaa0
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_5b7e1d
        lea ecx, ds:[ebx+ebp*8]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_5995f0
        mov ebp, dword ptr ss : [esp+0x24]
        lea edx, ds:[ebx+eax*8+8]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+8], edx
        inc ebx
        jmp public_4357a0
        public_43589f : nop
        mov eax, edi
        sub eax, edi
        sar eax, 3
        cmp eax, 1
        jae public_4358fe
        lea ecx, ds:[edi+8]
        push ecx
        push edi
        push edi
        mov ecx, esi
        call public_4363b0
        mov eax, dword ptr ds : [esi+8]
        mov ecx, eax
        lea edx, ss:[esp+0x18]
        push edx
        sub ecx, edi
        sar ecx, 3
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, esi
        call public_436bb0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_435947
        public_4358e0 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edx
        add eax, 8
        cmp eax, ecx
        jne public_4358e0
        add dword ptr ds : [esi+8], 8
        inc ebx
        jmp public_4357a0
        public_4358fe : nop
        push edi
        push edi
        lea eax, ds:[edi-8]
        push eax
        mov ecx, esi
        call public_4363b0
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-8]
        cmp edi, eax
        je public_43592a
        public_435915 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_435915
        public_43592a : nop
        lea ecx, ds:[edi+8]
        cmp edi, ecx
        mov eax, edi
        je public_435947
        public_435933 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edx
        add eax, 8
        cmp eax, ecx
        jne public_435933
        public_435947 : nop
        add dword ptr ds : [esi+8], 8
        public_43594b : nop
        inc ebx
        jmp public_4357a0
        public_435951 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x4356d0)
    }
}

#undef public_4356e8
#undef public_4356f0
#undef public_4356f8
#undef public_435706
#undef public_435709
#undef public_435718
#undef public_435720
#undef public_43572c
#undef public_435750
#undef public_435764
#undef public_435789
#undef public_435791
#undef public_43579e
#undef public_4357a0
#undef public_4357af
#undef public_4357b7
#undef public_435803
#undef public_435808
#undef public_435819
#undef public_43589f
#undef public_4358e0
#undef public_4358fe
#undef public_435915
#undef public_43592a
#undef public_435933
#undef public_435947
#undef public_43594b
#undef public_435951
