#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec7820);
CLANG_FORWARD_PROC_SYMBOL(public_6f93f70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa13d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa58c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa1422 _public_6fa1422
#define public_6fa1424 _public_6fa1424
#define public_6fa142c _public_6fa142c
#define public_6fa143f _public_6fa143f
#define public_6fa144c _public_6fa144c
#define public_6fa1470 _public_6fa1470
#define public_6fa148e _public_6fa148e
#define public_6fa1498 _public_6fa1498
#define public_6fa14bb _public_6fa14bb
#define public_6fa14d6 _public_6fa14d6
#define public_6fa14e0 _public_6fa14e0
#define public_6fa14f6 _public_6fa14f6
#define public_6fa1500 _public_6fa1500
#define public_6fa1511 _public_6fa1511
#define public_6fa153b _public_6fa153b
#define public_6fa1551 _public_6fa1551
#define public_6fa156b _public_6fa156b
#define public_6fa15a8 _public_6fa15a8
#define public_6fa15b0 _public_6fa15b0
#define public_6fa15ca _public_6fa15ca
#define public_6fa15f0 _public_6fa15f0
#define public_6fa1603 _public_6fa1603
#define public_6fa1614 _public_6fa1614
#define public_6fa164e _public_6fa164e
#define public_6fa1664 _public_6fa1664
#define public_6fa1680 _public_6fa1680
#define public_6fa16aa _public_6fa16aa
#define public_6fa16b5 _public_6fa16b5
#define public_6fa16f5 _public_6fa16f5
#define public_6fa1710 _public_6fa1710
#define public_6fa174e _public_6fa174e
#define public_6fa1751 _public_6fa1751

PROC_DECLARE(0x6fa13d0, internal_6fa13d0, public_6fa13d0);
extern "C" NAKED register_t __cdecl internal_6fa13d0()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub edx, esi
        mov eax, 0x3E0F83E1
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6fa156b
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6fa1422
        mov edx, esi
        sub edx, ecx
        mov eax, 0x3E0F83E1
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ebp, edx
        mov edi, edx
        jb public_6fa1424
        public_6fa1422 : nop
        mov edi, ebp
        public_6fa1424 : nop
        test ecx, ecx
        jne public_6fa142c
        xor edx, edx
        jmp public_6fa143f
        public_6fa142c : nop
        sub esi, ecx
        mov eax, 0x3E0F83E1
        imul esi
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6fa143f : nop
        lea eax, ds:[edx+edi]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6fa144c
        xor eax, eax
        public_6fa144c : nop
        imul eax, 0x108
        push eax
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6fa148e
        public_6fa1470 : nop
        push esi
        push ebx
        call public_6f93f70
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x108
        add esp, 8
        add ebx, 0x108
        cmp esi, eax
        jne public_6fa1470
        public_6fa148e : nop
        test ebp, ebp
        mov esi, ebx
        jbe public_6fa14bb
        mov dword ptr ss : [esp+0x24], ebp
        public_6fa1498 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_6f93f70
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x108
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6fa1498
        mov eax, dword ptr ss : [esp+0x20]
        public_6fa14bb : nop
        mov ecx, ebp
        imul ecx, 0x108
        add ecx, ebx
        mov ebx, dword ptr ds : [edi+8]
        cmp eax, ebx
        mov esi, eax
        je public_6fa14f6
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6fa14e0
        public_6fa14d6 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        lea ebx, ds:[ebx]
        public_6fa14e0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6f93f70
        add esi, 0x108
        add esp, 8
        cmp esi, ebx
        jne public_6fa14d6
        public_6fa14f6 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_6fa1511
        public_6fa1500 : nop
        mov ecx, esi
        call public_6ec7820
        add esi, 0x108
        cmp esi, ebx
        jne public_6fa1500
        public_6fa1511 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0x108
        add eax, esi
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_6fa153b
        xor edx, edx
        jmp public_6fa1551
        public_6fa153b : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x3E0F83E1
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6fa1551 : nop
        add edx, ebp
        imul edx, 0x108
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6fa156b : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, edi
        mov eax, 0x3E0F83E1
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_6fa1664
        mov eax, ebp
        imul eax, 0x108
        mov dword ptr ss : [esp+0x24], eax
        add eax, edi
        cmp edi, esi
        mov ebx, edi
        je public_6fa15ca
        sub eax, edi
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6fa15b0
        public_6fa15a8 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_6fa15b0 : nop
        add eax, ebx
        push ebx
        push eax
        call public_6f93f70
        add ebx, 0x108
        add esp, 8
        cmp ebx, esi
        jne public_6fa15a8
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa15ca : nop
        mov esi, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, edi
        mov eax, 0x3E0F83E1
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        je public_6fa1603
        lea ebx, ds:[ebx]
        public_6fa15f0 : nop
        push ebx
        push esi
        call public_6f93f70
        add esp, 8
        add esi, 0x108
        dec ebp
        jne public_6fa15f0
        public_6fa1603 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [eax+8]
        cmp edi, ebp
        je public_6fa164e
        lea esi, ds:[edi+0x100]
        public_6fa1614 : nop
        push ebx
        lea ecx, ds:[esi-0x100]
        call public_6fa58c0
        mov edx, dword ptr ds : [ebx+0xFC]
        mov dword ptr ds : [esi-4], edx
        mov eax, dword ptr ds : [ebx+0x100]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [ebx+0x104]
        mov dword ptr ds : [esi+4], ecx
        add esi, 0x108
        lea edx, ds:[esi-0x100]
        cmp edx, ebp
        jne public_6fa1614
        mov eax, dword ptr ss : [esp+0x10]
        public_6fa164e : nop
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
        public_6fa1664 : nop
        test ebp, ebp
        jbe public_6fa1751
        imul ebp, 0x108
        mov ebx, esi
        sub ebx, ebp
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_6fa16aa
        mov edi, edi
        public_6fa1680 : nop
        mov edx, dword ptr ss : [esp+0x20]
        push ebx
        push edx
        call public_6f93f70
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x108
        add ebx, 0x108
        add esp, 8
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_6fa1680
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa16aa : nop
        mov ebx, dword ptr ds : [ecx+8]
        mov esi, ebx
        sub esi, ebp
        cmp edi, esi
        je public_6fa16f5
        public_6fa16b5 : nop
        sub esi, 0x108
        sub ebx, 0x108
        push esi
        mov ecx, ebx
        call public_6fa58c0
        cmp esi, edi
        mov eax, dword ptr ds : [esi+0xFC]
        mov dword ptr ds : [ebx+0xFC], eax
        mov ecx, dword ptr ds : [esi+0x100]
        mov dword ptr ds : [ebx+0x100], ecx
        mov edx, dword ptr ds : [esi+0x104]
        mov dword ptr ds : [ebx+0x104], edx
        jne public_6fa16b5
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa16f5 : nop
        lea eax, ds:[edi+ebp]
        cmp edi, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6fa174e
        mov ebx, dword ptr ss : [esp+0x28]
        lea esi, ds:[edi+0x100]
        lea ebx, ds:[ebx]
        public_6fa1710 : nop
        push ebx
        lea ecx, ds:[esi-0x100]
        call public_6fa58c0
        mov eax, dword ptr ds : [ebx+0xFC]
        mov dword ptr ds : [esi-4], eax
        mov ecx, dword ptr ds : [ebx+0x100]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [ebx+0x104]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [esi+4], edx
        add esi, 0x108
        lea eax, ds:[esi-0x100]
        cmp eax, ecx
        jne public_6fa1710
        mov ecx, dword ptr ss : [esp+0x10]
        public_6fa174e : nop
        add dword ptr ds : [ecx+8], ebp
        public_6fa1751 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6fa13d0)
    }
}

#undef public_6fa1422
#undef public_6fa1424
#undef public_6fa142c
#undef public_6fa143f
#undef public_6fa144c
#undef public_6fa1470
#undef public_6fa148e
#undef public_6fa1498
#undef public_6fa14bb
#undef public_6fa14d6
#undef public_6fa14e0
#undef public_6fa14f6
#undef public_6fa1500
#undef public_6fa1511
#undef public_6fa153b
#undef public_6fa1551
#undef public_6fa156b
#undef public_6fa15a8
#undef public_6fa15b0
#undef public_6fa15ca
#undef public_6fa15f0
#undef public_6fa1603
#undef public_6fa1614
#undef public_6fa164e
#undef public_6fa1664
#undef public_6fa1680
#undef public_6fa16aa
#undef public_6fa16b5
#undef public_6fa16f5
#undef public_6fa1710
#undef public_6fa174e
#undef public_6fa1751
