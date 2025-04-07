#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626b560);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_626b596 _public_626b596
#define public_626b598 _public_626b598
#define public_626b5a0 _public_626b5a0
#define public_626b5a5 _public_626b5a5
#define public_626b5b1 _public_626b5b1
#define public_626b5d2 _public_626b5d2
#define public_626b5e0 _public_626b5e0
#define public_626b5ea _public_626b5ea
#define public_626b5f6 _public_626b5f6
#define public_626b608 _public_626b608
#define public_626b60e _public_626b60e
#define public_626b627 _public_626b627
#define public_626b635 _public_626b635
#define public_626b63f _public_626b63f
#define public_626b67b _public_626b67b
#define public_626b698 _public_626b698
#define public_626b6c0 _public_626b6c0
#define public_626b6d2 _public_626b6d2
#define public_626b6dc _public_626b6dc
#define public_626b6f0 _public_626b6f0
#define public_626b6fe _public_626b6fe
#define public_626b704 _public_626b704
#define public_626b710 _public_626b710
#define public_626b721 _public_626b721
#define public_626b72e _public_626b72e
#define public_626b740 _public_626b740
#define public_626b74e _public_626b74e
#define public_626b758 _public_626b758
#define public_626b763 _public_626b763
#define public_626b778 _public_626b778
#define public_626b785 _public_626b785
#define public_626b796 _public_626b796
#define public_626b799 _public_626b799

PROC_DECLARE(0x626b560, internal_626b560, public_626b560);
extern "C" NAKED register_t __cdecl internal_626b560()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 3
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_626b698
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_626b596
        mov ecx, eax
        sub ecx, edx
        sar ecx, 3
        cmp ebp, ecx
        jb public_626b598
        public_626b596 : nop
        mov ecx, ebp
        public_626b598 : nop
        test edx, edx
        jne public_626b5a0
        xor eax, eax
        jmp public_626b5a5
        public_626b5a0 : nop
        sub eax, edx
        sar eax, 3
        public_626b5a5 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_626b5b1
        xor eax, eax
        public_626b5b1 : nop
        lea edx, ds:[eax*8]
        push edx
        call public_6391d9c
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_626b5ea
        public_626b5d2 : nop
        test ecx, ecx
        je public_626b5e0
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        public_626b5e0 : nop
        add eax, 8
        add ecx, 8
        cmp eax, ebx
        jne public_626b5d2
        public_626b5ea : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_626b60e
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_626b5f6 : nop
        test eax, eax
        je public_626b608
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_626b608 : nop
        add eax, 8
        dec edx
        jne public_626b5f6
        public_626b60e : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*8]
        lea edx, ds:[esi+ecx]
        je public_626b63f
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        public_626b627 : nop
        test edx, edx
        je public_626b635
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        public_626b635 : nop
        add eax, 8
        add edx, 8
        cmp eax, edi
        jne public_626b627
        public_626b63f : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*8]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_626b67b
        xor eax, eax
        mov eax, ebp
        pop edi
        lea eax, ds:[edx+eax*8]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_626b67b : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        add eax, ebp
        pop edi
        lea eax, ds:[edx+eax*8]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_626b698 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 3
        cmp ecx, ebp
        jae public_626b72e
        cmp esi, eax
        lea ebx, ds:[ebp*8]
        lea edx, ds:[ebx+esi]
        je public_626b6dc
        mov ecx, edx
        sub ecx, ebx
        lea ecx, ds:[ecx]
        public_626b6c0 : nop
        test edx, edx
        je public_626b6d2
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_626b6d2 : nop
        add ecx, 8
        add edx, 8
        cmp ecx, eax
        jne public_626b6c0
        public_626b6dc : nop
        mov eax, dword ptr ds : [edi+8]
        mov edx, eax
        sub edx, esi
        sar edx, 3
        sub ebp, edx
        mov edx, dword ptr ss : [esp+0x24]
        je public_626b704
        mov edi, edi
        public_626b6f0 : nop
        test eax, eax
        je public_626b6fe
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        public_626b6fe : nop
        add eax, 8
        dec ebp
        jne public_626b6f0
        public_626b704 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp esi, ecx
        mov eax, esi
        je public_626b721
        lea ecx, ds:[ecx]
        public_626b710 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        add eax, 8
        cmp eax, ecx
        jne public_626b710
        public_626b721 : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_626b72e : nop
        test ebp, ebp
        jbe public_626b799
        shl ebp, 3
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov edx, eax
        je public_626b758
        nop 
        public_626b740 : nop
        test edx, edx
        je public_626b74e
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], ebx
        public_626b74e : nop
        add ecx, 8
        add edx, 8
        cmp ecx, eax
        jne public_626b740
        public_626b758 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp esi, eax
        je public_626b778
        public_626b763 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, esi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_626b763
        public_626b778 : nop
        lea edx, ds:[esi+ebp]
        cmp esi, edx
        mov eax, esi
        je public_626b796
        mov ecx, dword ptr ss : [esp+0x24]
        public_626b785 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        add eax, 8
        cmp eax, edx
        jne public_626b785
        public_626b796 : nop
        add dword ptr ds : [edi+8], ebp
        public_626b799 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x626b560)
    }
}

#undef public_626b596
#undef public_626b598
#undef public_626b5a0
#undef public_626b5a5
#undef public_626b5b1
#undef public_626b5d2
#undef public_626b5e0
#undef public_626b5ea
#undef public_626b5f6
#undef public_626b608
#undef public_626b60e
#undef public_626b627
#undef public_626b635
#undef public_626b63f
#undef public_626b67b
#undef public_626b698
#undef public_626b6c0
#undef public_626b6d2
#undef public_626b6dc
#undef public_626b6f0
#undef public_626b6fe
#undef public_626b704
#undef public_626b710
#undef public_626b721
#undef public_626b72e
#undef public_626b740
#undef public_626b74e
#undef public_626b758
#undef public_626b763
#undef public_626b778
#undef public_626b785
#undef public_626b796
#undef public_626b799
