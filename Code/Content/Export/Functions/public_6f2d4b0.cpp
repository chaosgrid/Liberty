#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d4b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ef20);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);

#define public_6f2d4d0 _public_6f2d4d0
#define public_6f2d4e3 _public_6f2d4e3
#define public_6f2d4e6 _public_6f2d4e6
#define public_6f2d4ea _public_6f2d4ea
#define public_6f2d549 _public_6f2d549
#define public_6f2d561 _public_6f2d561
#define public_6f2d56b _public_6f2d56b
#define public_6f2d56f _public_6f2d56f
#define public_6f2d580 _public_6f2d580
#define public_6f2d5bb _public_6f2d5bb
#define public_6f2d5ca _public_6f2d5ca
#define public_6f2d5eb _public_6f2d5eb
#define public_6f2d60c _public_6f2d60c
#define public_6f2d61a _public_6f2d61a
#define public_6f2d639 _public_6f2d639
#define public_6f2d645 _public_6f2d645
#define public_6f2d661 _public_6f2d661
#define public_6f2d67c _public_6f2d67c
#define public_6f2d683 _public_6f2d683
#define public_6f2d6a6 _public_6f2d6a6

PROC_DECLARE(0x6f2d4b0, internal_6f2d4b0, public_6f2d4b0);
extern "C" NAKED register_t __cdecl internal_6f2d4b0()
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
        je public_6f2d4ea
        lea esp, ss:[esp]
        public_6f2d4d0 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6f2d4e3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6f2d4e6
        public_6f2d4e3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6f2d4e6 : nop
        cmp ebp, edx
        jne public_6f2d4d0
        public_6f2d4ea : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6f2d661
        push 0
        push esi
        mov ecx, edi
        call public_6f6a2c0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6f2f270
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6f2d549
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6f2d549
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f2d549
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f2d56f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f2d56f
        public_6f2d549 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6f2d561
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2d56b
        public_6f2d561 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f2d56b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6f2d56b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6f2d56f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6f2d645
        lea ecx, ds:[ecx]
        public_6f2d580 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        jne public_6f2d645
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f2d5eb
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f2d5bb
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6f2d639
        public_6f2d5bb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f2d5ca
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6f2d5ca : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x1C], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6f2d639
        public_6f2d5eb : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f2d60c
        mov byte ptr ds : [eax+0x1C], 1
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x1C], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6f2d639
        public_6f2d60c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6f2d61a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6f2d61a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x1C], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6f2d639 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6f2d580
        public_6f2d645 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6f2d661 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6f2d67c
        cmp esi, dword ptr ds : [ecx]
        je public_6f2d683
        lea ecx, ss:[esp+0x10]
        call public_6f2ef20
        mov edx, dword ptr ss : [esp+0x10]
        public_6f2d67c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6f2d6a6
        public_6f2d683 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6f2e2f0
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
        public_6f2d6a6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f2d4b0)
    }
}

#undef public_6f2d4d0
#undef public_6f2d4e3
#undef public_6f2d4e6
#undef public_6f2d4ea
#undef public_6f2d549
#undef public_6f2d561
#undef public_6f2d56b
#undef public_6f2d56f
#undef public_6f2d580
#undef public_6f2d5bb
#undef public_6f2d5ca
#undef public_6f2d5eb
#undef public_6f2d60c
#undef public_6f2d61a
#undef public_6f2d639
#undef public_6f2d645
#undef public_6f2d661
#undef public_6f2d67c
#undef public_6f2d683
#undef public_6f2d6a6
