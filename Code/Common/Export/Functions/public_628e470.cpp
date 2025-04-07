#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628e4a9 _public_628e4a9
#define public_628e4ab _public_628e4ab
#define public_628e4b3 _public_628e4b3
#define public_628e4b8 _public_628e4b8
#define public_628e4c4 _public_628e4c4
#define public_628e4e1 _public_628e4e1
#define public_628e4e9 _public_628e4e9
#define public_628e4f3 _public_628e4f3
#define public_628e500 _public_628e500
#define public_628e509 _public_628e509
#define public_628e515 _public_628e515
#define public_628e520 _public_628e520
#define public_628e529 _public_628e529
#define public_628e533 _public_628e533
#define public_628e565 _public_628e565
#define public_628e580 _public_628e580
#define public_628e5a1 _public_628e5a1
#define public_628e5ad _public_628e5ad
#define public_628e5b7 _public_628e5b7
#define public_628e5d0 _public_628e5d0
#define public_628e5d8 _public_628e5d8
#define public_628e5e6 _public_628e5e6
#define public_628e600 _public_628e600
#define public_628e61c _public_628e61c
#define public_628e630 _public_628e630
#define public_628e63c _public_628e63c
#define public_628e646 _public_628e646
#define public_628e651 _public_628e651
#define public_628e660 _public_628e660
#define public_628e670 _public_628e670
#define public_628e67c _public_628e67c
#define public_628e67f _public_628e67f

PROC_DECLARE(0x628e470, internal_628e470, public_628e470);
extern "C" NAKED register_t __cdecl internal_628e470()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        sub edi, ebx
        sub ecx, eax
        sar edi, 2
        sar ecx, 2
        cmp ecx, edi
        jae public_628e580
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        je public_628e4a9
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp edi, ecx
        jb public_628e4ab
        public_628e4a9 : nop
        mov ecx, edi
        public_628e4ab : nop
        test edx, edx
        jne public_628e4b3
        xor eax, eax
        jmp public_628e4b8
        public_628e4b3 : nop
        sub eax, edx
        sar eax, 2
        public_628e4b8 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_628e4c4
        xor eax, eax
        public_628e4c4 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        mov ecx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x1C]
        add esp, 4
        cmp ecx, esi
        mov ebx, eax
        je public_628e4f3
        public_628e4e1 : nop
        test eax, eax
        je public_628e4e9
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_628e4e9 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, esi
        jne public_628e4e1
        public_628e4f3 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, dword ptr ss : [esp+0x20]
        je public_628e515
        sub ecx, eax
        nop 
        public_628e500 : nop
        test eax, eax
        je public_628e509
        mov edx, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax], edx
        public_628e509 : nop
        add eax, 4
        lea edx, ds:[ecx+eax]
        cmp edx, dword ptr ss : [esp+0x20]
        jne public_628e500
        public_628e515 : nop
        mov edx, dword ptr ss : [ebp+8]
        cmp esi, edx
        je public_628e533
        mov ecx, esi
        sub ecx, eax
        public_628e520 : nop
        test eax, eax
        je public_628e529
        mov esi, dword ptr ds : [ecx+eax]
        mov dword ptr ds : [eax], esi
        public_628e529 : nop
        add eax, 4
        lea esi, ds:[ecx+eax]
        cmp esi, edx
        jne public_628e520
        public_628e533 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ds:[ebx+ecx*4]
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        test ecx, ecx
        mov dword ptr ss : [ebp+0xC], edx
        jne public_628e565
        xor eax, eax
        mov eax, edi
        pop edi
        lea eax, ds:[ebx+eax*4]
        pop esi
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_628e565 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 2
        add eax, edi
        pop edi
        lea eax, ds:[ebx+eax*4]
        pop esi
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_628e580 : nop
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 2
        cmp ecx, edi
        jae public_628e61c
        shl edi, 2
        cmp esi, eax
        lea edx, ds:[edi+esi]
        je public_628e5b7
        mov ecx, edx
        sub ecx, edi
        public_628e5a1 : nop
        test edx, edx
        je public_628e5ad
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        public_628e5ad : nop
        add ecx, 4
        add edx, 4
        cmp ecx, eax
        jne public_628e5a1
        public_628e5b7 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, ecx
        sub edx, esi
        sar edx, 2
        lea eax, ds:[ebx+edx*4]
        cmp eax, dword ptr ss : [esp+0x20]
        je public_628e5e6
        lea ebx, ds:[ebx]
        public_628e5d0 : nop
        test ecx, ecx
        je public_628e5d8
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_628e5d8 : nop
        mov edx, dword ptr ss : [esp+0x20]
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_628e5d0
        public_628e5e6 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, esi
        sar eax, 2
        lea ecx, ds:[ebx+eax*4]
        cmp ebx, ecx
        mov eax, ebx
        je public_628e67c
        sub esi, ebx
        lea ecx, ds:[ecx]
        public_628e600 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_628e600
        mov eax, dword ptr ss : [ebp+8]
        add eax, edi
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_628e61c : nop
        test edi, edi
        jbe public_628e67f
        shl edi, 2
        mov ecx, eax
        sub ecx, edi
        cmp ecx, eax
        mov edx, eax
        je public_628e646
        lea ecx, ds:[ecx]
        public_628e630 : nop
        test edx, edx
        je public_628e63c
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        public_628e63c : nop
        add ecx, 4
        add edx, 4
        cmp ecx, eax
        jne public_628e630
        public_628e646 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, ecx
        sub eax, edi
        cmp esi, eax
        je public_628e660
        public_628e651 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, esi
        mov dword ptr ds : [ecx], edx
        jne public_628e651
        public_628e660 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ebx, ecx
        mov eax, ebx
        je public_628e67c
        sub esi, ebx
        lea esp, ss:[esp]
        public_628e670 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_628e670
        public_628e67c : nop
        add dword ptr ss : [ebp+8], edi
        public_628e67f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x628e470)
    }
}

#undef public_628e4a9
#undef public_628e4ab
#undef public_628e4b3
#undef public_628e4b8
#undef public_628e4c4
#undef public_628e4e1
#undef public_628e4e9
#undef public_628e4f3
#undef public_628e500
#undef public_628e509
#undef public_628e515
#undef public_628e520
#undef public_628e529
#undef public_628e533
#undef public_628e565
#undef public_628e580
#undef public_628e5a1
#undef public_628e5ad
#undef public_628e5b7
#undef public_628e5d0
#undef public_628e5d8
#undef public_628e5e6
#undef public_628e600
#undef public_628e61c
#undef public_628e630
#undef public_628e63c
#undef public_628e646
#undef public_628e651
#undef public_628e660
#undef public_628e670
#undef public_628e67c
#undef public_628e67f
