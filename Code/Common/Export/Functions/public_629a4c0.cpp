#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629a4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_629a514 _public_629a514
#define public_629a516 _public_629a516
#define public_629a51e _public_629a51e
#define public_629a531 _public_629a531
#define public_629a53e _public_629a53e
#define public_629a560 _public_629a560
#define public_629a577 _public_629a577
#define public_629a581 _public_629a581
#define public_629a590 _public_629a590
#define public_629a5a7 _public_629a5a7
#define public_629a5ad _public_629a5ad
#define public_629a5d0 _public_629a5d0
#define public_629a5e7 _public_629a5e7
#define public_629a5f1 _public_629a5f1
#define public_629a62d _public_629a62d
#define public_629a65a _public_629a65a
#define public_629a690 _public_629a690
#define public_629a6a7 _public_629a6a7
#define public_629a6b1 _public_629a6b1
#define public_629a6d3 _public_629a6d3
#define public_629a6e6 _public_629a6e6
#define public_629a6ec _public_629a6ec
#define public_629a6f5 _public_629a6f5
#define public_629a70b _public_629a70b
#define public_629a721 _public_629a721
#define public_629a740 _public_629a740
#define public_629a757 _public_629a757
#define public_629a761 _public_629a761
#define public_629a770 _public_629a770
#define public_629a78d _public_629a78d
#define public_629a798 _public_629a798
#define public_629a7b2 _public_629a7b2
#define public_629a7b5 _public_629a7b5

PROC_DECLARE(0x629a4c0, internal_629a4c0, public_629a4c0);
extern "C" NAKED register_t __cdecl internal_629a4c0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, ebx
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, esi
        mov dword ptr ss : [esp+0x10], edi
        jae public_629a65a
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        je public_629a514
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp esi, edx
        mov ecx, edx
        jb public_629a516
        public_629a514 : nop
        mov ecx, esi
        public_629a516 : nop
        test ebp, ebp
        jne public_629a51e
        xor edx, edx
        jmp public_629a531
        public_629a51e : nop
        sub ebx, ebp
        mov eax, 0x78787879
        imul ebx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_629a531 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_629a53e
        xor eax, eax
        public_629a53e : nop
        imul eax, 0x44
        push eax
        call public_6391d9c
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_629a581
        nop 
        lea esp, ss:[esp]
        public_629a560 : nop
        test edx, edx
        je public_629a577
        mov ecx, 0x11
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_629a577 : nop
        add eax, 0x44
        add edx, 0x44
        cmp eax, ebx
        jne public_629a560
        public_629a581 : nop
        test esi, esi
        mov eax, edx
        jbe public_629a5ad
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        lea ecx, ds:[ecx]
        public_629a590 : nop
        test eax, eax
        je public_629a5a7
        mov ecx, 0x11
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_629a5a7 : nop
        add eax, 0x44
        dec ebx
        jne public_629a590
        public_629a5ad : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        imul ecx, 0x44
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_629a5f1
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        lea esp, ss:[esp]
        public_629a5d0 : nop
        test ebx, ebx
        je public_629a5e7
        mov ecx, 0x11
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_629a5e7 : nop
        add eax, 0x44
        add ebx, 0x44
        cmp eax, ebp
        jne public_629a5d0
        public_629a5f1 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        imul eax, 0x44
        add eax, ebx
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_629a62d
        xor edx, edx
        mov edx, esi
        imul edx, 0x44
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_629a62d : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edx, esi
        imul edx, 0x44
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_629a65a : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, esi
        jae public_629a721
        mov ecx, esi
        imul ecx, 0x44
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+ebp]
        je public_629a6b1
        mov edx, eax
        sub edx, ecx
        nop 
        public_629a690 : nop
        test eax, eax
        je public_629a6a7
        mov ecx, 0x11
        mov esi, edx
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_629a6a7 : nop
        add edx, 0x44
        add eax, 0x44
        cmp edx, ebx
        jne public_629a690
        public_629a6b1 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x78787879
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub esi, edx
        mov edx, dword ptr ss : [esp+0x28]
        je public_629a6ec
        mov eax, esi
        public_629a6d3 : nop
        test ebx, ebx
        je public_629a6e6
        mov ecx, 0x11
        mov esi, edx
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_629a6e6 : nop
        add ebx, 0x44
        dec eax
        jne public_629a6d3
        public_629a6ec : nop
        mov ebx, dword ptr ds : [edi+8]
        cmp ebp, ebx
        mov eax, ebp
        je public_629a70b
        public_629a6f5 : nop
        mov edi, eax
        add eax, 0x44
        cmp eax, ebx
        mov ecx, 0x11
        mov esi, edx
        rep movsd
        jne public_629a6f5
        mov edi, dword ptr ss : [esp+0x10]
        public_629a70b : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [esp+0x20]
        add eax, ecx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_629a721 : nop
        test esi, esi
        jbe public_629a7b5
        imul esi, 0x44
        mov eax, ebx
        sub eax, esi
        cmp eax, ebx
        mov edx, ebx
        mov dword ptr ss : [esp+0x20], esi
        je public_629a761
        lea ebx, ds:[ebx]
        public_629a740 : nop
        test edx, edx
        je public_629a757
        mov ecx, 0x11
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_629a757 : nop
        add eax, 0x44
        add edx, 0x44
        cmp eax, ebx
        jne public_629a740
        public_629a761 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov eax, ebx
        sub eax, esi
        cmp ebp, eax
        je public_629a78d
        lea esp, ss:[esp]
        public_629a770 : nop
        sub eax, 0x44
        sub ebx, 0x44
        cmp eax, ebp
        mov ecx, 0x11
        mov esi, eax
        mov edi, ebx
        rep movsd
        jne public_629a770
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_629a78d : nop
        lea eax, ds:[esi+ebp]
        cmp ebp, eax
        je public_629a7b2
        mov edx, dword ptr ss : [esp+0x28]
        public_629a798 : nop
        mov edi, ebp
        add ebp, 0x44
        cmp ebp, eax
        mov ecx, 0x11
        mov esi, edx
        rep movsd
        jne public_629a798
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_629a7b2 : nop
        add dword ptr ds : [edi+8], esi
        public_629a7b5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x629a4c0)
    }
}

#undef public_629a514
#undef public_629a516
#undef public_629a51e
#undef public_629a531
#undef public_629a53e
#undef public_629a560
#undef public_629a577
#undef public_629a581
#undef public_629a590
#undef public_629a5a7
#undef public_629a5ad
#undef public_629a5d0
#undef public_629a5e7
#undef public_629a5f1
#undef public_629a62d
#undef public_629a65a
#undef public_629a690
#undef public_629a6a7
#undef public_629a6b1
#undef public_629a6d3
#undef public_629a6e6
#undef public_629a6ec
#undef public_629a6f5
#undef public_629a70b
#undef public_629a721
#undef public_629a740
#undef public_629a757
#undef public_629a761
#undef public_629a770
#undef public_629a78d
#undef public_629a798
#undef public_629a7b2
#undef public_629a7b5
