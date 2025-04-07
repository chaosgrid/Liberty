#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6560);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ff40);
CLANG_FORWARD_PROC_SYMBOL(public_6f305d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f68ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b4d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e260);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ec90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7b522 _public_6f7b522
#define public_6f7b524 _public_6f7b524
#define public_6f7b52c _public_6f7b52c
#define public_6f7b53f _public_6f7b53f
#define public_6f7b54c _public_6f7b54c
#define public_6f7b570 _public_6f7b570
#define public_6f7b58e _public_6f7b58e
#define public_6f7b598 _public_6f7b598
#define public_6f7b5bb _public_6f7b5bb
#define public_6f7b5d6 _public_6f7b5d6
#define public_6f7b5e0 _public_6f7b5e0
#define public_6f7b5f6 _public_6f7b5f6
#define public_6f7b600 _public_6f7b600
#define public_6f7b611 _public_6f7b611
#define public_6f7b63b _public_6f7b63b
#define public_6f7b651 _public_6f7b651
#define public_6f7b66b _public_6f7b66b
#define public_6f7b6a8 _public_6f7b6a8
#define public_6f7b6b0 _public_6f7b6b0
#define public_6f7b6ca _public_6f7b6ca
#define public_6f7b6f0 _public_6f7b6f0
#define public_6f7b703 _public_6f7b703
#define public_6f7b710 _public_6f7b710
#define public_6f7b722 _public_6f7b722
#define public_6f7b738 _public_6f7b738
#define public_6f7b756 _public_6f7b756
#define public_6f7b780 _public_6f7b780
#define public_6f7b790 _public_6f7b790
#define public_6f7b7ac _public_6f7b7ac
#define public_6f7b7c2 _public_6f7b7c2
#define public_6f7b865 _public_6f7b865
#define public_6f7b868 _public_6f7b868

PROC_DECLARE(0x6f7b4d0, internal_6f7b4d0, public_6f7b4d0);
extern "C" NAKED register_t __cdecl internal_6f7b4d0()
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
        mov eax, 0x6BCA1AF3
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        jae public_6f7b66b
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_6f7b522
        mov edx, esi
        sub edx, ecx
        mov eax, 0x6BCA1AF3
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ebp, edx
        mov edi, edx
        jb public_6f7b524
        public_6f7b522 : nop
        mov edi, ebp
        public_6f7b524 : nop
        test ecx, ecx
        jne public_6f7b52c
        xor edx, edx
        jmp public_6f7b53f
        public_6f7b52c : nop
        sub esi, ecx
        mov eax, 0x6BCA1AF3
        imul esi
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f7b53f : nop
        lea eax, ds:[edx+edi]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f7b54c
        xor eax, eax
        public_6f7b54c : nop
        imul eax, 0x98
        push eax
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp esi, eax
        je public_6f7b58e
        public_6f7b570 : nop
        push esi
        push ebx
        call public_6f2ff40
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 0x98
        add esp, 8
        add ebx, 0x98
        cmp esi, eax
        jne public_6f7b570
        public_6f7b58e : nop
        test ebp, ebp
        mov esi, ebx
        jbe public_6f7b5bb
        mov dword ptr ss : [esp+0x24], ebp
        public_6f7b598 : nop
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push esi
        call public_6f2ff40
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 8
        add esi, 0x98
        dec eax
        mov dword ptr ss : [esp+0x24], eax
        jne public_6f7b598
        mov eax, dword ptr ss : [esp+0x20]
        public_6f7b5bb : nop
        mov ecx, ebp
        imul ecx, 0x98
        add ecx, ebx
        mov ebx, dword ptr ds : [edi+8]
        cmp eax, ebx
        mov esi, eax
        je public_6f7b5f6
        sub ecx, eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6f7b5e0
        public_6f7b5d6 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        lea ebx, ds:[ebx]
        public_6f7b5e0 : nop
        add ecx, esi
        push esi
        push ecx
        call public_6f2ff40
        add esi, 0x98
        add esp, 8
        cmp esi, ebx
        jne public_6f7b5d6
        public_6f7b5f6 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_6f7b611
        public_6f7b600 : nop
        mov ecx, esi
        call public_6f305d0
        add esi, 0x98
        cmp esi, ebx
        jne public_6f7b600
        public_6f7b611 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        imul eax, 0x98
        add eax, esi
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_6f7b63b
        xor edx, edx
        jmp public_6f7b651
        public_6f7b63b : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x6BCA1AF3
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f7b651 : nop
        add edx, ebp
        imul edx, 0x98
        add edx, esi
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f7b66b : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, esi
        sub edx, ebx
        mov eax, 0x6BCA1AF3
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_6f7b738
        mov eax, ebp
        imul eax, 0x98
        mov dword ptr ss : [esp+0x24], eax
        add eax, ebx
        cmp ebx, esi
        mov edi, ebx
        je public_6f7b6ca
        sub eax, ebx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_6f7b6b0
        public_6f7b6a8 : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_6f7b6b0 : nop
        add eax, edi
        push edi
        push eax
        call public_6f2ff40
        add edi, 0x98
        add esp, 8
        cmp edi, esi
        jne public_6f7b6a8
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7b6ca : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, esi
        sub ecx, ebx
        mov eax, 0x6BCA1AF3
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        je public_6f7b703
        lea ebx, ds:[ebx]
        public_6f7b6f0 : nop
        push edi
        push esi
        call public_6f2ff40
        add esp, 8
        add esi, 0x98
        dec ebp
        jne public_6f7b6f0
        public_6f7b703 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [ebp+8]
        cmp ebx, esi
        je public_6f7b722
        mov edi, edi
        public_6f7b710 : nop
        push edi
        mov ecx, ebx
        call public_6f7e260
        add ebx, 0x98
        cmp ebx, esi
        jne public_6f7b710
        public_6f7b722 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [esp+0x24]
        pop edi
        add eax, edx
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6f7b738 : nop
        test ebp, ebp
        jbe public_6f7b868
        imul ebp, 0x98
        mov edi, esi
        sub edi, ebp
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x24], ebp
        je public_6f7b780
        public_6f7b756 : nop
        mov eax, dword ptr ss : [esp+0x20]
        push edi
        push eax
        call public_6f2ff40
        mov edx, dword ptr ss : [esp+0x28]
        add edx, 0x98
        add edi, 0x98
        add esp, 8
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], edx
        jne public_6f7b756
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7b780 : nop
        mov edi, dword ptr ds : [ecx+8]
        mov esi, edi
        sub esi, ebp
        cmp ebx, esi
        je public_6f7b7ac
        nop 
        lea esp, ss:[esp]
        public_6f7b790 : nop
        sub esi, 0x98
        sub edi, 0x98
        push esi
        mov ecx, edi
        call public_6f7e260
        cmp esi, ebx
        jne public_6f7b790
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7b7ac : nop
        lea eax, ds:[ebx+ebp]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_6f7b865
        mov ebp, dword ptr ss : [esp+0x28]
        add ebx, 0x1C
        public_6f7b7c2 : nop
        push ebp
        lea ecx, ds:[ebx-0x1C]
        call public_6f68ac0
        lea eax, ss:[ebp+0x10]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx-0xC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea eax, ss:[ebp+0x1C]
        mov edx, dword ptr ds : [eax]
        mov ecx, ebx
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        lea edi, ds:[ebx+0xC]
        mov ecx, 0xC
        lea esi, ss:[ebp+0x28]
        lea eax, ss:[ebp+0x58]
        rep movsd
        push eax
        lea ecx, ds:[ebx+0x3C]
        call public_6eb6560
        lea eax, ss:[ebp+0x68]
        push eax
        lea ecx, ds:[ebx+0x4C]
        call public_6eb6560
        mov ecx, dword ptr ss : [ebp+0x78]
        mov dword ptr ds : [ebx+0x5C], ecx
        mov edx, dword ptr ss : [ebp+0x7C]
        mov dword ptr ds : [ebx+0x60], edx
        mov eax, dword ptr ss : [ebp+0x80]
        mov dword ptr ds : [ebx+0x64], eax
        mov ecx, dword ptr ss : [ebp+0x84]
        lea eax, ss:[ebp+0x88]
        mov dword ptr ds : [ebx+0x68], ecx
        push eax
        lea ecx, ds:[ebx+0x6C]
        call public_6f7ec90
        mov eax, dword ptr ss : [esp+0x20]
        add ebx, 0x98
        lea edx, ds:[ebx-0x1C]
        cmp edx, eax
        jne public_6f7b7c2
        mov ebp, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f7b865 : nop
        add dword ptr ds : [ecx+8], ebp
        public_6f7b868 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f7b4d0)
    }
}

#undef public_6f7b522
#undef public_6f7b524
#undef public_6f7b52c
#undef public_6f7b53f
#undef public_6f7b54c
#undef public_6f7b570
#undef public_6f7b58e
#undef public_6f7b598
#undef public_6f7b5bb
#undef public_6f7b5d6
#undef public_6f7b5e0
#undef public_6f7b5f6
#undef public_6f7b600
#undef public_6f7b611
#undef public_6f7b63b
#undef public_6f7b651
#undef public_6f7b66b
#undef public_6f7b6a8
#undef public_6f7b6b0
#undef public_6f7b6ca
#undef public_6f7b6f0
#undef public_6f7b703
#undef public_6f7b710
#undef public_6f7b722
#undef public_6f7b738
#undef public_6f7b756
#undef public_6f7b780
#undef public_6f7b790
#undef public_6f7b7ac
#undef public_6f7b7c2
#undef public_6f7b865
#undef public_6f7b868
