#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628fd80);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_63167e0);
CLANG_FORWARD_PROC_SYMBOL(public_6319070);
CLANG_FORWARD_PROC_SYMBOL(public_6319090);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_6316800 _public_6316800
#define public_6316813 _public_6316813
#define public_6316816 _public_6316816
#define public_631681a _public_631681a
#define public_6316879 _public_6316879
#define public_6316891 _public_6316891
#define public_631689b _public_631689b
#define public_631689f _public_631689f
#define public_63168b0 _public_63168b0
#define public_63168eb _public_63168eb
#define public_63168fa _public_63168fa
#define public_631691b _public_631691b
#define public_631693c _public_631693c
#define public_631694a _public_631694a
#define public_6316969 _public_6316969
#define public_6316975 _public_6316975
#define public_6316991 _public_6316991
#define public_63169ac _public_63169ac
#define public_63169b3 _public_63169b3
#define public_63169d6 _public_63169d6

PROC_DECLARE(0x63167e0, internal_63167e0, public_63167e0);
extern "C" NAKED register_t __cdecl internal_63167e0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_631681a
        lea esp, ss:[esp]
        public_6316800 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6316813
        mov ebp, dword ptr ss : [ebp]
        jmp public_6316816
        public_6316813 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6316816 : nop
        cmp ebp, edx
        jne public_6316800
        public_631681a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6316991
        push 0
        push esi
        mov ecx, edi
        call public_6319070
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_630cd00
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6316879
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6316879
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6316879
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_631689f
        mov dword ptr ds : [eax+8], ebx
        jmp public_631689f
        public_6316879 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6316891
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_631689b
        public_6316891 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_631689b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_631689b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_631689f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6316975
        lea ecx, ds:[ecx]
        public_63168b0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x10]
        test cl, cl
        jne public_6316975
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_631691b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_63168eb
        mov byte ptr ds : [eax+0x10], 1
        mov byte ptr ds : [ecx+0x10], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6316969
        public_63168eb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_63168fa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_63168fa : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x10], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x10], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_6316969
        public_631691b : nop
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_631693c
        mov byte ptr ds : [eax+0x10], 1
        mov byte ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x10], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6316969
        public_631693c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_631694a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_631694a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x10], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_6316969 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_63168b0
        public_6316975 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x10], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6316991 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_63169ac
        cmp esi, dword ptr ds : [ecx]
        je public_63169b3
        lea ecx, ss:[esp+0x10]
        call public_6319090
        mov edx, dword ptr ss : [esp+0x10]
        public_63169ac : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_63169d6
        public_63169b3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_628fd80
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_63169d6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x63167e0)
    }
}

#undef public_6316800
#undef public_6316813
#undef public_6316816
#undef public_631681a
#undef public_6316879
#undef public_6316891
#undef public_631689b
#undef public_631689f
#undef public_63168b0
#undef public_63168eb
#undef public_63168fa
#undef public_631691b
#undef public_631693c
#undef public_631694a
#undef public_6316969
#undef public_6316975
#undef public_6316991
#undef public_63169ac
#undef public_63169b3
#undef public_63169d6
