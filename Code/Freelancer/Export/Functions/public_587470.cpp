#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_587470);
CLANG_FORWARD_PROC_SYMBOL(public_587af0);
CLANG_FORWARD_PROC_SYMBOL(public_587c60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5874a4 _public_5874a4
#define public_5874a6 _public_5874a6
#define public_5874ae _public_5874ae
#define public_5874b3 _public_5874b3
#define public_5874bf _public_5874bf
#define public_5874e0 _public_5874e0
#define public_5874f8 _public_5874f8
#define public_587502 _public_587502
#define public_587522 _public_587522
#define public_58753b _public_58753b
#define public_587540 _public_587540
#define public_587553 _public_587553
#define public_587560 _public_587560
#define public_58756e _public_58756e
#define public_5875aa _public_5875aa
#define public_5875c9 _public_5875c9
#define public_5875f8 _public_5875f8
#define public_587600 _public_587600
#define public_58761b _public_58761b
#define public_587630 _public_587630
#define public_587648 _public_587648
#define public_587660 _public_587660
#define public_5876a1 _public_5876a1
#define public_5876b3 _public_5876b3
#define public_5876d0 _public_5876d0
#define public_5876f4 _public_5876f4
#define public_587700 _public_587700
#define public_58773c _public_58773c
#define public_587747 _public_587747
#define public_58775a _public_58775a
#define public_58775d _public_58775d

PROC_DECLARE(0x587470, internal_587470, public_587470);
extern "C" NAKED register_t __cdecl internal_587470()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [ecx+0xC]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ds : [ecx+8]
        sub eax, esi
        sar eax, 5
        cmp eax, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_5875c9
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_5874a4
        mov eax, esi
        sub eax, ecx
        sar eax, 5
        cmp ebp, eax
        jb public_5874a6
        public_5874a4 : nop
        mov eax, ebp
        public_5874a6 : nop
        test ecx, ecx
        jne public_5874ae
        xor esi, esi
        jmp public_5874b3
        public_5874ae : nop
        sub esi, ecx
        sar esi, 5
        public_5874b3 : nop
        add eax, esi
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_5874bf
        xor eax, eax
        public_5874bf : nop
        shl eax, 5
        push eax
        call public_5b7e84
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_5874f8
        public_5874e0 : nop
        push esi
        push edi
        call public_587af0
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x20
        add esp, 8
        add edi, 0x20
        cmp esi, eax
        jne public_5874e0
        public_5874f8 : nop
        test ebp, ebp
        mov esi, edi
        jbe public_587522
        mov dword ptr ss : [esp+0x24], ebp
        public_587502 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        push esi
        call public_587af0
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x20
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_587502
        mov eax, dword ptr ss : [esp+0x20]
        public_587522 : nop
        mov edx, ebp
        shl edx, 5
        lea ecx, ds:[edx+edi]
        mov edi, dword ptr ds : [ebx+8]
        cmp eax, edi
        mov esi, eax
        je public_587553
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_587540
        public_58753b : nop
        mov ecx, dword ptr ss : [esp+0x20]
        nop 
        public_587540 : nop
        add ecx, esi
        push esi
        push ecx
        call public_587af0
        add esi, 0x20
        add esp, 8
        cmp esi, edi
        jne public_58753b
        public_587553 : nop
        mov edi, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+4]
        cmp esi, edi
        je public_58756e
        lea ecx, ds:[ecx]
        public_587560 : nop
        mov ecx, esi
        call public_455e90
        add esi, 0x20
        cmp esi, edi
        jne public_587560
        public_58756e : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ebx+4]
        shl eax, 5
        add eax, edx
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [ebx+0xC], eax
        jne public_5875aa
        xor eax, eax
        mov eax, ebp
        pop edi
        shl eax, 5
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_5875aa : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 5
        add eax, ebp
        pop edi
        shl eax, 5
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_5875c9 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        sar edx, 5
        cmp edx, ebp
        jae public_5876b3
        mov eax, ebp
        shl eax, 5
        cmp ebx, esi
        mov dword ptr ss : [esp+0x20], eax
        lea edx, ds:[eax+ebx]
        mov edi, ebx
        je public_58761b
        mov eax, edx
        sub eax, ebx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_587600
        public_5875f8 : nop
        mov eax, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_587600 : nop
        add eax, edi
        push edi
        push eax
        call public_587af0
        add edi, 0x20
        add esp, 8
        cmp edi, esi
        jne public_5875f8
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_58761b : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edi, dword ptr ss : [esp+0x28]
        mov edx, esi
        sub edx, ebx
        sar edx, 5
        sub ebp, edx
        je public_587648
        lea ecx, ds:[ecx]
        public_587630 : nop
        push edi
        push esi
        call public_587af0
        add esp, 8
        add esi, 0x20
        dec ebp
        jne public_587630
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_587648 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp ebx, edx
        mov dword ptr ss : [esp+0x28], edx
        je public_5876a1
        lea ebp, ds:[edi+4]
        lea esi, ds:[ebx+0x14]
        lea esp, ss:[esp]
        public_587660 : nop
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi-0x14], eax
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0
        push ebp
        lea ecx, ds:[esi-0x10]
        call dword ptr ds : [public_5c6f9c]
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edi+0x1C]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [esi+8], edx
        add esi, 0x20
        lea eax, ds:[esi-0x14]
        cmp eax, ecx
        jne public_587660
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        public_5876a1 : nop
        mov edx, dword ptr ds : [ecx+8]
        pop edi
        pop esi
        add edx, eax
        pop ebp
        mov dword ptr ds : [ecx+8], edx
        pop ebx
        add esp, 0xC
        ret 0xC
        public_5876b3 : nop
        test ebp, ebp
        jbe public_58775d
        shl ebp, 5
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], esi
        je public_5876f4
        lea ebx, ds:[ebx]
        public_5876d0 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push edi
        push ecx
        call public_587af0
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x20
        add edi, 0x20
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_5876d0
        mov ecx, dword ptr ss : [esp+0x10]
        public_5876f4 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_58773c
        nop 
        public_587700 : nop
        mov edx, dword ptr ds : [esi-0x20]
        sub esi, 0x20
        sub edi, 0x20
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push 0
        lea edx, ds:[esi+4]
        push edx
        lea ecx, ds:[edi+4]
        call dword ptr ds : [public_5c6f9c]
        cmp esi, ebx
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [edi+0x14], eax
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi+0x18], ecx
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [edi+0x1C], edx
        jne public_587700
        mov ecx, dword ptr ss : [esp+0x10]
        public_58773c : nop
        lea esi, ds:[ebx+ebp]
        cmp ebx, esi
        je public_58775a
        mov edi, dword ptr ss : [esp+0x28]
        public_587747 : nop
        push edi
        mov ecx, ebx
        call public_587c60
        add ebx, 0x20
        cmp ebx, esi
        jne public_587747
        mov ecx, dword ptr ss : [esp+0x10]
        public_58775a : nop
        add dword ptr ds : [ecx+8], ebp
        public_58775d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x587470)
    }
}

#undef public_5874a4
#undef public_5874a6
#undef public_5874ae
#undef public_5874b3
#undef public_5874bf
#undef public_5874e0
#undef public_5874f8
#undef public_587502
#undef public_587522
#undef public_58753b
#undef public_587540
#undef public_587553
#undef public_587560
#undef public_58756e
#undef public_5875aa
#undef public_5875c9
#undef public_5875f8
#undef public_587600
#undef public_58761b
#undef public_587630
#undef public_587648
#undef public_587660
#undef public_5876a1
#undef public_5876b3
#undef public_5876d0
#undef public_5876f4
#undef public_587700
#undef public_58773c
#undef public_587747
#undef public_58775a
#undef public_58775d
