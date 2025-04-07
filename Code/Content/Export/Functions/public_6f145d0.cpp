#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efba30);
CLANG_FORWARD_PROC_SYMBOL(public_6f145d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15710);
CLANG_FORWARD_PROC_SYMBOL(public_6f15e20);
CLANG_FORWARD_PROC_SYMBOL(public_6f227e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f229c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f34b70);
CLANG_FORWARD_PROC_SYMBOL(public_6f57840);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f145f0 _public_6f145f0
#define public_6f14602 _public_6f14602
#define public_6f14614 _public_6f14614
#define public_6f14629 _public_6f14629
#define public_6f14635 _public_6f14635
#define public_6f14644 _public_6f14644
#define public_6f14651 _public_6f14651
#define public_6f14673 _public_6f14673
#define public_6f1467d _public_6f1467d
#define public_6f14690 _public_6f14690
#define public_6f146c4 _public_6f146c4
#define public_6f146d5 _public_6f146d5
#define public_6f146e0 _public_6f146e0
#define public_6f146f0 _public_6f146f0
#define public_6f14727 _public_6f14727
#define public_6f14734 _public_6f14734
#define public_6f1476b _public_6f1476b

PROC_DECLARE(0x6f145d0, internal_6f145d0, public_6f145d0);
extern "C" NAKED register_t __cdecl internal_6f145d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x12C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f14629
        mov bl, byte ptr ss : [esp+0x14]
        or ebp, 0xFFFFFFFF
        lea esp, ss:[esp]
        public_6f145f0 : nop
        test bl, bl
        jne public_6f14614
        mov eax, dword ptr ds : [esi+0xF4]
        cmp eax, dword ptr ds : [esi+0xF8]
        je public_6f14614
        public_6f14602 : nop
        mov dword ptr ds : [eax+0x7C], ebp
        mov ecx, dword ptr ds : [esi+0xF8]
        add eax, 0x88
        cmp eax, ecx
        jne public_6f14602
        public_6f14614 : nop
        lea eax, ds:[esi+8]
        push eax
        mov ecx, edi
        call public_6f15e20
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x12C]
        jne public_6f145f0
        public_6f14629 : nop
        mov eax, dword ptr ds : [edi+0x90]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f1467d
        public_6f14635 : nop
        mov ecx, dword ptr ds : [edi+0x9C]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f14673
        mov edx, dword ptr ds : [esi+8]
        public_6f14644 : nop
        cmp edx, dword ptr ds : [eax+0x30]
        je public_6f14651
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f14644
        jmp public_6f14673
        public_6f14651 : nop
        mov ecx, dword ptr ds : [esi+0x6C]
        push 0
        push ecx
        lea edx, ds:[esi+0x50]
        push edx
        lea ecx, ds:[esi+0x44]
        push ecx
        mov ecx, dword ptr ds : [esi+0x40]
        lea edx, ds:[esi+0x5C]
        push edx
        push ecx
        mov ecx, dword ptr ds : [eax+0x44]
        lea edx, ds:[esi+0x10]
        push edx
        call public_6efba30
        public_6f14673 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x90]
        jne public_6f14635
        public_6f1467d : nop
        mov eax, dword ptr ds : [edi+0x12C]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_6f146e0
        lea esp, ss:[esp]
        public_6f14690 : nop
        mov ebx, dword ptr ss : [ebp+0xF4]
        cmp ebx, dword ptr ss : [ebp+0xF8]
        je public_6f146d5
        lea eax, ds:[ebx+4]
        push eax
        mov ecx, edi
        call public_6f15710
        mov esi, eax
        test esi, esi
        je public_6f146d5
        mov eax, dword ptr ds : [ebx+0x68]
        test eax, eax
        mov ecx, esi
        je public_6f146c4
        push 1
        push 1
        push eax
        call public_6f34b70
        jmp public_6f146d5
        public_6f146c4 : nop
        call public_6f57c80
        push eax
        add ebx, 0x58
        push ebx
        mov ecx, esi
        call public_6f57840
        public_6f146d5 : nop
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [edi+0x12C]
        jne public_6f14690
        public_6f146e0 : nop
        mov ebp, dword ptr ds : [edi+0x12C]
        mov ebx, dword ptr ss : [ebp]
        cmp ebx, ebp
        je public_6f14727
        lea ecx, ds:[ecx]
        public_6f146f0 : nop
        mov esi, ebx
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [ebx]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        push 0
        lea ecx, ds:[esi+8]
        call public_6f227e0
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+0x130]
        add esp, 4
        dec ecx
        cmp ebx, ebp
        mov dword ptr ds : [edi+0x130], ecx
        jne public_6f146f0
        public_6f14727 : nop
        mov ebp, dword ptr ds : [edi+0x90]
        mov ebx, dword ptr ss : [ebp]
        cmp ebx, ebp
        je public_6f1476b
        public_6f14734 : nop
        mov esi, ebx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [ebx]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        push 0
        lea ecx, ds:[esi+8]
        call public_6f229c0
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+0x94]
        add esp, 4
        dec ecx
        cmp ebx, ebp
        mov dword ptr ds : [edi+0x94], ecx
        jne public_6f14734
        public_6f1476b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f145d0)
    }
}

#undef public_6f145f0
#undef public_6f14602
#undef public_6f14614
#undef public_6f14629
#undef public_6f14635
#undef public_6f14644
#undef public_6f14651
#undef public_6f14673
#undef public_6f1467d
#undef public_6f14690
#undef public_6f146c4
#undef public_6f146d5
#undef public_6f146e0
#undef public_6f146f0
#undef public_6f14727
#undef public_6f14734
#undef public_6f1476b
