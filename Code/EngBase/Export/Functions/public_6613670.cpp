#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6613670);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_66136a6 _public_66136a6
#define public_66136a8 _public_66136a8
#define public_66136b0 _public_66136b0
#define public_66136b5 _public_66136b5
#define public_66136c1 _public_66136c1
#define public_66136e2 _public_66136e2
#define public_66136ea _public_66136ea
#define public_66136f4 _public_66136f4
#define public_6613700 _public_6613700
#define public_661370c _public_661370c
#define public_6613712 _public_6613712
#define public_661372b _public_661372b
#define public_6613733 _public_6613733
#define public_661373d _public_661373d
#define public_6613779 _public_6613779
#define public_6613796 _public_6613796
#define public_66137b7 _public_66137b7
#define public_66137c3 _public_66137c3
#define public_66137cd _public_66137cd
#define public_66137df _public_66137df
#define public_66137e7 _public_66137e7
#define public_66137ed _public_66137ed
#define public_66137f6 _public_66137f6
#define public_6613801 _public_6613801
#define public_6613813 _public_6613813
#define public_6613824 _public_6613824
#define public_661382c _public_661382c
#define public_6613836 _public_6613836
#define public_6613841 _public_6613841
#define public_6613850 _public_6613850
#define public_661385d _public_661385d
#define public_6613868 _public_6613868
#define public_661386b _public_661386b

PROC_DECLARE(0x6613670, internal_6613670, public_6613670);
extern "C" NAKED register_t __cdecl internal_6613670()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, dword ptr ss : [esp+0x20]
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, ebp
        jae public_6613796
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_66136a6
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ebp, ecx
        jb public_66136a8
        public_66136a6 : nop
        mov ecx, ebp
        public_66136a8 : nop
        test edx, edx
        jne public_66136b0
        xor eax, eax
        jmp public_66136b5
        public_66136b0 : nop
        sub eax, edx
        sar eax, 2
        public_66136b5 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_66136c1
        xor eax, eax
        public_66136c1 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_66281dc
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_66136f4
        public_66136e2 : nop
        test ecx, ecx
        je public_66136ea
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_66136ea : nop
        add eax, 4
        add ecx, 4
        cmp eax, ebx
        jne public_66136e2
        public_66136f4 : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_6613712
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_6613700 : nop
        test eax, eax
        je public_661370c
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_661370c : nop
        add eax, 4
        dec edx
        jne public_6613700
        public_6613712 : nop
        mov edi, dword ptr ds : [edi+8]
        lea esi, ds:[ebp*4]
        cmp ebx, edi
        lea edx, ds:[esi+ecx]
        je public_661373d
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        public_661372b : nop
        test edx, edx
        je public_6613733
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_6613733 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_661372b
        public_661373d : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_66281d0
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6613779
        xor eax, eax
        mov dword ptr ds : [esi+4], edx
        mov eax, ebp
        pop edi
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6613779 : nop
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], edx
        sub eax, ecx
        pop edi
        sar eax, 2
        add eax, ebp
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6613796 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, ebp
        jae public_6613813
        lea ebx, ds:[ebp*4]
        cmp edx, eax
        lea esi, ds:[ebx+edx]
        je public_66137cd
        mov ecx, esi
        sub ecx, ebx
        public_66137b7 : nop
        test esi, esi
        je public_66137c3
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_66137c3 : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_66137b7
        public_66137cd : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        sub ebp, ecx
        je public_66137ed
        public_66137df : nop
        test eax, eax
        je public_66137e7
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_66137e7 : nop
        add eax, 4
        dec ebp
        jne public_66137df
        public_66137ed : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, edx
        cmp edx, ecx
        je public_6613801
        public_66137f6 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_66137f6
        public_6613801 : nop
        mov eax, dword ptr ds : [edi+8]
        add eax, ebx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6613813 : nop
        test ebp, ebp
        jbe public_661386b
        shl ebp, 2
        mov ecx, eax
        mov esi, eax
        sub ecx, ebp
        cmp ecx, eax
        je public_6613836
        public_6613824 : nop
        test esi, esi
        je public_661382c
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], ebx
        public_661382c : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6613824
        public_6613836 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        je public_6613850
        public_6613841 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edx
        mov dword ptr ds : [ecx], esi
        jne public_6613841
        public_6613850 : nop
        lea ecx, ds:[edx+ebp]
        mov eax, edx
        cmp edx, ecx
        je public_6613868
        mov edx, dword ptr ss : [esp+0x24]
        public_661385d : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_661385d
        public_6613868 : nop
        add dword ptr ds : [edi+8], ebp
        public_661386b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6613670)
    }
}

#undef public_66136a6
#undef public_66136a8
#undef public_66136b0
#undef public_66136b5
#undef public_66136c1
#undef public_66136e2
#undef public_66136ea
#undef public_66136f4
#undef public_6613700
#undef public_661370c
#undef public_6613712
#undef public_661372b
#undef public_6613733
#undef public_661373d
#undef public_6613779
#undef public_6613796
#undef public_66137b7
#undef public_66137c3
#undef public_66137cd
#undef public_66137df
#undef public_66137e7
#undef public_66137ed
#undef public_66137f6
#undef public_6613801
#undef public_6613813
#undef public_6613824
#undef public_661382c
#undef public_6613836
#undef public_6613841
#undef public_6613850
#undef public_661385d
#undef public_6613868
#undef public_661386b
