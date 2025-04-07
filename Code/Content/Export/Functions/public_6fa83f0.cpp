#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e0c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f971e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa83f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa8446 _public_6fa8446
#define public_6fa8448 _public_6fa8448
#define public_6fa8450 _public_6fa8450
#define public_6fa8465 _public_6fa8465
#define public_6fa8472 _public_6fa8472
#define public_6fa8493 _public_6fa8493
#define public_6fa84ab _public_6fa84ab
#define public_6fa84b5 _public_6fa84b5
#define public_6fa84d5 _public_6fa84d5
#define public_6fa84ee _public_6fa84ee
#define public_6fa84f2 _public_6fa84f2
#define public_6fa8505 _public_6fa8505
#define public_6fa8510 _public_6fa8510
#define public_6fa851e _public_6fa851e
#define public_6fa855a _public_6fa855a
#define public_6fa8589 _public_6fa8589
#define public_6fa85c5 _public_6fa85c5
#define public_6fa85d0 _public_6fa85d0
#define public_6fa85e7 _public_6fa85e7
#define public_6fa8610 _public_6fa8610
#define public_6fa8620 _public_6fa8620
#define public_6fa8632 _public_6fa8632
#define public_6fa8674 _public_6fa8674
#define public_6fa868a _public_6fa868a
#define public_6fa86a5 _public_6fa86a5
#define public_6fa86c1 _public_6fa86c1
#define public_6fa86d0 _public_6fa86d0
#define public_6fa8719 _public_6fa8719
#define public_6fa8724 _public_6fa8724
#define public_6fa873b _public_6fa873b
#define public_6fa873e _public_6fa873e

PROC_DECLARE(0x6fa83f0, internal_6fa83f0, public_6fa83f0);
extern "C" NAKED register_t __cdecl internal_6fa83f0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx+8]
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        sub edi, esi
        mov eax, 0x92492493
        imul edi
        add edx, edi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebx
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6fa8589
        mov edi, dword ptr ds : [ecx+4]
        test edi, edi
        je public_6fa8446
        mov ecx, esi
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebx, edx
        mov ecx, edx
        jb public_6fa8448
        public_6fa8446 : nop
        mov ecx, ebx
        public_6fa8448 : nop
        test edi, edi
        jne public_6fa8450
        xor edx, edx
        jmp public_6fa8465
        public_6fa8450 : nop
        sub esi, edi
        mov eax, 0x92492493
        imul esi
        add edx, esi
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa8465 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6fa8472
        xor eax, eax
        public_6fa8472 : nop
        imul eax, 0x38
        push eax
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6fa84ab
        public_6fa8493 : nop
        push esi
        push ebp
        call public_6fa8e10
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x38
        add esp, 8
        add ebp, 0x38
        cmp esi, eax
        jne public_6fa8493
        public_6fa84ab : nop
        test ebx, ebx
        mov esi, ebp
        jbe public_6fa84d5
        mov dword ptr ss : [esp+0x24], ebx
        public_6fa84b5 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push esi
        call public_6fa8e10
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x38
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6fa84b5
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa84d5 : nop
        mov edx, ebx
        imul edx, 0x38
        lea ecx, ds:[edx+ebp]
        mov ebp, dword ptr ds : [edi+8]
        cmp eax, ebp
        mov esi, eax
        je public_6fa8505
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6fa84f2
        public_6fa84ee : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_6fa84f2 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6fa8e10
        add esi, 0x38
        add esp, 8
        cmp esi, ebp
        jne public_6fa84ee
        public_6fa8505 : nop
        mov ebp, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebp
        je public_6fa851e
        nop 
        public_6fa8510 : nop
        mov ecx, esi
        call public_6eb7d10
        add esi, 0x38
        cmp esi, ebp
        jne public_6fa8510
        public_6fa851e : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0x38
        add eax, esi
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_6fa855a
        xor edx, edx
        mov edx, ebx
        imul edx, 0x38
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa855a : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        add edx, ebx
        imul edx, 0x38
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa8589 : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, esi
        sub ebp, edi
        mov eax, 0x92492493
        imul ebp
        add edx, ebp
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebx
        jae public_6fa868a
        mov eax, ebx
        imul eax, 0x38
        mov dword ptr ss : [esp+0x24], eax
        add eax, edi
        cmp edi, esi
        mov ebp, edi
        je public_6fa85e7
        sub eax, edi
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6fa85d0
        public_6fa85c5 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_6fa85d0 : nop
        add eax, ebp
        push ebp
        push eax
        call public_6fa8e10
        add ebp, 0x38
        add esp, 8
        cmp ebp, esi
        jne public_6fa85c5
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa85e7 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, edi
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebx, edx
        je public_6fa8620
        lea esp, ss:[esp]
        public_6fa8610 : nop
        push ebp
        push esi
        call public_6fa8e10
        add esp, 8
        add esi, 0x38
        dec ebx
        jne public_6fa8610
        public_6fa8620 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        cmp edi, ecx
        mov dword ptr ss : [esp+0x20], ecx
        je public_6fa8674
        lea ebx, ds:[edi+8]
        public_6fa8632 : nop
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx-8], edx
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx-4], eax
        lea eax, ss:[ebp+8]
        push eax
        mov ecx, ebx
        call public_6f971e0
        lea edi, ds:[ebx+0x10]
        mov ecx, 6
        lea esi, ss:[ebp+0x18]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [ebx+0x28], ecx
        mov dl, byte ptr ss : [ebp+0x34]
        mov ecx, dword ptr ss : [esp+0x20]
        mov byte ptr ds : [ebx+0x2C], dl
        add ebx, 0x38
        lea eax, ds:[ebx-8]
        cmp eax, ecx
        jne public_6fa8632
        mov eax, dword ptr ss : [esp+0x10]
        public_6fa8674 : nop
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        add edx, ecx
        pop ebp
        mov dword ptr ds : [eax+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa868a : nop
        test ebx, ebx
        jbe public_6fa873e
        mov eax, ebx
        imul eax, 0x38
        mov ebx, esi
        sub ebx, eax
        cmp ebx, esi
        mov ebp, esi
        mov dword ptr ss : [esp+0x24], eax
        je public_6fa86c1
        public_6fa86a5 : nop
        push ebx
        push ebp
        call public_6fa8e10
        add ebx, 0x38
        add esp, 8
        add ebp, 0x38
        cmp ebx, esi
        jne public_6fa86a5
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa86c1 : nop
        mov ebp, dword ptr ds : [ecx+8]
        mov ebx, ebp
        sub ebx, eax
        cmp edi, ebx
        je public_6fa8719
        lea esp, ss:[esp]
        public_6fa86d0 : nop
        mov edx, dword ptr ds : [ebx-0x38]
        sub ebx, 0x38
        sub ebp, 0x38
        lea ecx, ds:[ebx+8]
        mov dword ptr ss : [ebp], edx
        mov eax, dword ptr ds : [ebx+4]
        push ecx
        lea ecx, ss:[ebp+8]
        mov dword ptr ss : [ebp+4], eax
        call public_6f971e0
        lea esi, ds:[ebx+0x18]
        lea edi, ss:[ebp+0x18]
        mov ecx, 6
        rep movsd
        mov edx, dword ptr ds : [ebx+0x30]
        mov dword ptr ss : [ebp+0x30], edx
        mov al, byte ptr ds : [ebx+0x34]
        mov byte ptr ss : [ebp+0x34], al
        mov eax, dword ptr ss : [esp+0x20]
        cmp ebx, eax
        jne public_6fa86d0
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x24]
        public_6fa8719 : nop
        lea esi, ds:[eax+edi]
        cmp edi, esi
        je public_6fa873b
        mov ebx, dword ptr ss : [esp+0x28]
        public_6fa8724 : nop
        push ebx
        mov ecx, edi
        call public_6f7e0c0
        add edi, 0x38
        cmp edi, esi
        jne public_6fa8724
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa873b : nop
        add dword ptr ds : [ecx+8], eax
        public_6fa873e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6fa83f0)
    }
}

#undef public_6fa8446
#undef public_6fa8448
#undef public_6fa8450
#undef public_6fa8465
#undef public_6fa8472
#undef public_6fa8493
#undef public_6fa84ab
#undef public_6fa84b5
#undef public_6fa84d5
#undef public_6fa84ee
#undef public_6fa84f2
#undef public_6fa8505
#undef public_6fa8510
#undef public_6fa851e
#undef public_6fa855a
#undef public_6fa8589
#undef public_6fa85c5
#undef public_6fa85d0
#undef public_6fa85e7
#undef public_6fa8610
#undef public_6fa8620
#undef public_6fa8632
#undef public_6fa8674
#undef public_6fa868a
#undef public_6fa86a5
#undef public_6fa86c1
#undef public_6fa86d0
#undef public_6fa8719
#undef public_6fa8724
#undef public_6fa873b
#undef public_6fa873e
