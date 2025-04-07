#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6490);
CLANG_FORWARD_PROC_SYMBOL(public_62e6c60);
CLANG_FORWARD_PROC_SYMBOL(public_62e9500);
CLANG_FORWARD_PROC_SYMBOL(public_62e9990);
CLANG_FORWARD_PROC_SYMBOL(public_62eb9d0);
CLANG_FORWARD_PROC_SYMBOL(public_62ed620);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62e64a8 _public_62e64a8
#define public_62e64aa _public_62e64aa
#define public_62e64b6 _public_62e64b6
#define public_62e64c8 _public_62e64c8
#define public_62e64ca _public_62e64ca
#define public_62e64f2 _public_62e64f2
#define public_62e64f4 _public_62e64f4
#define public_62e6505 _public_62e6505
#define public_62e6507 _public_62e6507
#define public_62e652f _public_62e652f
#define public_62e6580 _public_62e6580
#define public_62e6582 _public_62e6582
#define public_62e6592 _public_62e6592
#define public_62e65d0 _public_62e65d0
#define public_62e65e8 _public_62e65e8
#define public_62e6613 _public_62e6613
#define public_62e6627 _public_62e6627
#define public_62e6653 _public_62e6653
#define public_62e6655 _public_62e6655
#define public_62e666b _public_62e666b
#define public_62e6697 _public_62e6697
#define public_62e6699 _public_62e6699
#define public_62e66a2 _public_62e66a2

PROC_DECLARE(0x62e6490, internal_62e6490, public_62e6490);
extern "C" NAKED register_t __cdecl internal_62e6490()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        xor ebp, ebp
        cmp eax, ebp
        mov esi, ecx
        push edi
        lea ebx, ds:[esi+8]
        je public_62e64a8
        add eax, 8
        jmp public_62e64aa
        public_62e64a8 : nop
        xor eax, eax
        public_62e64aa : nop
        cmp eax, dword ptr ds : [ebx]
        je public_62e64b6
        push eax
        mov ecx, ebx
        call public_6341610
        public_62e64b6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+4], eax
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebp
        je public_62e64c8
        lea ecx, ds:[eax-8]
        jmp public_62e64ca
        public_62e64c8 : nop
        xor ecx, ecx
        public_62e64ca : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        push esi
        lea ecx, ds:[esi+0x34]
        mov dword ptr ds : [esi], eax
        call public_62e6c60
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebp
        je public_62e652f
        add eax, 0xFFFFFFF8
        cmp eax, ebp
        je public_62e652f
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebp
        je public_62e64f2
        lea ecx, ds:[eax-8]
        jmp public_62e64f4
        public_62e64f2 : nop
        xor ecx, ecx
        public_62e64f4 : nop
        mov eax, dword ptr ds : [esi+0x38]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        cmp eax, ebp
        je public_62e6505
        add eax, 0xFFFFFFF8
        jmp public_62e6507
        public_62e6505 : nop
        xor eax, eax
        public_62e6507 : nop
        mov dword ptr ds : [esi+0x157C], eax
        mov dword ptr ds : [esi+0x1580], ecx
        mov byte ptr ds : [esi+0x1579], 0
        mov byte ptr ds : [esi+0x1578], 0
        mov byte ptr ds : [esi+0x157A], 0
        mov byte ptr ds : [esi+0x157B], 0
        public_62e652f : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebp
        je public_62e6592
        add eax, 0xFFFFFFF8
        cmp eax, ebp
        je public_62e6592
        mov dword ptr ds : [esi+0x18], esi
        mov byte ptr ds : [esi+0x2F], 1
        mov byte ptr ds : [esi+0x30], 1
        mov byte ptr ds : [esi+0x2E], 0
        mov byte ptr ds : [esi+0x2C], 0
        mov dword ptr ds : [esi+0x1C], 0x40A00000
        mov dword ptr ds : [esi+0x20], ebp
        mov dword ptr ds : [esi+0x24], ebp
        mov dword ptr ds : [esi+0x28], ebp
        mov ecx, dword ptr ds : [esi+0x18]
        mov byte ptr ds : [esi+0x2D], 1
        mov eax, dword ptr ds : [ecx+8]
        cmp eax, ebp
        je public_62e6592
        add eax, 0xFFFFFFF8
        cmp eax, ebp
        je public_62e6592
        mov ecx, dword ptr ds : [ecx+8]
        cmp ecx, ebp
        je public_62e6580
        add ecx, 0xFFFFFFF8
        jmp public_62e6582
        public_62e6580 : nop
        xor ecx, ecx
        public_62e6582 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xBC]
        test al, al
        je public_62e6592
        mov byte ptr ds : [esi+0x30], 0
        public_62e6592 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, ebp
        lea edi, ds:[esi+0x12C]
        je public_62e6613
        add eax, 0xFFFFFFF8
        cmp eax, ebp
        je public_62e6613
        mov ecx, edi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+0x830], ebp
        mov dword ptr ds : [edi+0x834], 0xFFFFFFFF
        call public_62e9990
        cmp dword ptr ds : [edi+0x830], ebp
        jle public_62e65e8
        lea ebx, ds:[edi+0x30]
        lea ebx, ds:[ebx]
        public_62e65d0 : nop
        push ebx
        mov ecx, edi
        call public_62e9500
        mov eax, dword ptr ds : [edi+0x830]
        inc ebp
        add ebx, 0x20
        cmp ebp, eax
        jl public_62e65d0
        xor ebp, ebp
        public_62e65e8 : nop
        fld dword ptr ds : [public_63a07a4]
        fstp dword ptr ds : [edi+0x2C]
        mov ecx, dword ptr ds : [edi+0x2C]
        mov dword ptr ss : [esp+0x18], ecx
        call dword ptr ds : [public_6399308]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_63997d0]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [edi+0x28]
        public_62e6613 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        je public_62e6627
        add eax, 0xFFFFFFF8
        cmp eax, ebp
        je public_62e6627
        mov dword ptr ds : [esi+0x136C], esi
        public_62e6627 : nop
        push esi
        lea ecx, ds:[esi+0x142C]
        call public_62ed620
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        je public_62e666b
        add eax, 0xFFFFFFF8
        cmp eax, ebp
        je public_62e666b
        mov dword ptr ds : [esi+0x1498], esi
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        je public_62e6653
        lea ecx, ds:[eax-8]
        jmp public_62e6655
        public_62e6653 : nop
        xor ecx, ecx
        public_62e6655 : nop
        mov edx, dword ptr ds : [ecx]
        push 0x100000
        push 1
        lea eax, ds:[esi+0x14A4]
        push eax
        call dword ptr ds : [edx+0x114]
        public_62e666b : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebp
        lea eax, ds:[esi+0x14A8]
        je public_62e66a2
        add ecx, 0xFFFFFFF8
        cmp ecx, ebp
        je public_62e66a2
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [eax+0x50], ebp
        mov dword ptr ds : [eax+0x18], ebp
        mov dword ptr ds : [eax+0x3C], ebp
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebp
        je public_62e6697
        add ecx, 0xFFFFFFF8
        jmp public_62e6699
        public_62e6697 : nop
        xor ecx, ecx
        public_62e6699 : nop
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xA4]
        public_62e66a2 : nop
        push esi
        lea ecx, ds:[esi+0x1344]
        call public_62eb9d0
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62e6490)
    }
}

#undef public_62e64a8
#undef public_62e64aa
#undef public_62e64b6
#undef public_62e64c8
#undef public_62e64ca
#undef public_62e64f2
#undef public_62e64f4
#undef public_62e6505
#undef public_62e6507
#undef public_62e652f
#undef public_62e6580
#undef public_62e6582
#undef public_62e6592
#undef public_62e65d0
#undef public_62e65e8
#undef public_62e6613
#undef public_62e6627
#undef public_62e6653
#undef public_62e6655
#undef public_62e666b
#undef public_62e6697
#undef public_62e6699
#undef public_62e66a2
