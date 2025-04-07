#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63225b0);
CLANG_FORWARD_PROC_SYMBOL(public_6322fa0);
CLANG_FORWARD_PROC_SYMBOL(public_63239c0);
CLANG_FORWARD_PROC_SYMBOL(public_63239e0);
CLANG_FORWARD_PROC_SYMBOL(public_6323ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6340ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6342930);

#define public_63225d0 _public_63225d0
#define public_63225e3 _public_63225e3
#define public_63225e6 _public_63225e6
#define public_63225ea _public_63225ea
#define public_6322649 _public_6322649
#define public_6322661 _public_6322661
#define public_632266b _public_632266b
#define public_632266f _public_632266f
#define public_6322680 _public_6322680
#define public_63226bb _public_63226bb
#define public_63226ca _public_63226ca
#define public_63226eb _public_63226eb
#define public_632270c _public_632270c
#define public_632271a _public_632271a
#define public_6322739 _public_6322739
#define public_6322745 _public_6322745
#define public_6322761 _public_6322761
#define public_632277c _public_632277c
#define public_6322783 _public_6322783
#define public_63227a6 _public_63227a6

PROC_DECLARE(0x63225b0, internal_63225b0, public_63225b0);
extern "C" NAKED register_t __cdecl internal_63225b0()
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
        je public_63225ea
        lea esp, ss:[esp]
        public_63225d0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_63225e3
        mov ebp, dword ptr ss : [ebp]
        jmp public_63225e6
        public_63225e3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_63225e6 : nop
        cmp ebp, edx
        jne public_63225d0
        public_63225ea : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6322761
        push 0
        push esi
        mov ecx, edi
        call public_63239c0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6323ee0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6322649
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6322649
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6322649
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_632266f
        mov dword ptr ds : [eax+8], ebx
        jmp public_632266f
        public_6322649 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6322661
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_632266b
        public_6322661 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_632266b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_632266b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_632266f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6322745
        lea ecx, ds:[ecx]
        public_6322680 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x44]
        test cl, cl
        jne public_6322745
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_63226eb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_63226bb
        mov byte ptr ds : [eax+0x44], 1
        mov byte ptr ds : [ecx+0x44], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6322739
        public_63226bb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_63226ca
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6340ca0
        public_63226ca : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x44], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x44], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6342930
        jmp public_6322739
        public_63226eb : nop
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_632270c
        mov byte ptr ds : [eax+0x44], 1
        mov byte ptr ds : [ecx+0x44], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x44], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6322739
        public_632270c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_632271a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6342930
        public_632271a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x44], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6340ca0
        public_6322739 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6322680
        public_6322745 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x44], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6322761 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_632277c
        cmp esi, dword ptr ds : [ecx]
        je public_6322783
        lea ecx, ss:[esp+0x10]
        call public_63239e0
        mov edx, dword ptr ss : [esp+0x10]
        public_632277c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_63227a6
        public_6322783 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6322fa0
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
        public_63227a6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x63225b0)
    }
}

#undef public_63225d0
#undef public_63225e3
#undef public_63225e6
#undef public_63225ea
#undef public_6322649
#undef public_6322661
#undef public_632266b
#undef public_632266f
#undef public_6322680
#undef public_63226bb
#undef public_63226ca
#undef public_63226eb
#undef public_632270c
#undef public_632271a
#undef public_6322739
#undef public_6322745
#undef public_6322761
#undef public_632277c
#undef public_6322783
#undef public_63227a6
