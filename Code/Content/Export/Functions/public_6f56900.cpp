#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f56900);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f56954 _public_6f56954
#define public_6f56956 _public_6f56956
#define public_6f5695e _public_6f5695e
#define public_6f56971 _public_6f56971
#define public_6f5697e _public_6f5697e
#define public_6f569a0 _public_6f569a0
#define public_6f569b3 _public_6f569b3
#define public_6f569c1 _public_6f569c1
#define public_6f569d0 _public_6f569d0
#define public_6f569e5 _public_6f569e5
#define public_6f569eb _public_6f569eb
#define public_6f56a10 _public_6f56a10
#define public_6f56a27 _public_6f56a27
#define public_6f56a31 _public_6f56a31
#define public_6f56a70 _public_6f56a70
#define public_6f56a9f _public_6f56a9f
#define public_6f56ad6 _public_6f56ad6
#define public_6f56aed _public_6f56aed
#define public_6f56af7 _public_6f56af7
#define public_6f56b20 _public_6f56b20
#define public_6f56b37 _public_6f56b37
#define public_6f56b3d _public_6f56b3d
#define public_6f56b46 _public_6f56b46
#define public_6f56b5c _public_6f56b5c
#define public_6f56b72 _public_6f56b72
#define public_6f56b90 _public_6f56b90
#define public_6f56ba7 _public_6f56ba7
#define public_6f56bb1 _public_6f56bb1
#define public_6f56bc0 _public_6f56bc0
#define public_6f56bdf _public_6f56bdf
#define public_6f56bf0 _public_6f56bf0
#define public_6f56c06 _public_6f56c06
#define public_6f56c09 _public_6f56c09

PROC_DECLARE(0x6f56900, internal_6f56900, public_6f56900);
extern "C" NAKED register_t __cdecl internal_6f56900()
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
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, ebx
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_6f56a9f
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        je public_6f56954
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebp, edx
        mov ecx, edx
        jb public_6f56956
        public_6f56954 : nop
        mov ecx, ebp
        public_6f56956 : nop
        test esi, esi
        jne public_6f5695e
        xor edx, edx
        jmp public_6f56971
        public_6f5695e : nop
        sub ebx, esi
        mov eax, 0x2AAAAAAB
        imul ebx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f56971 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_6f5697e
        xor eax, eax
        public_6f5697e : nop
        lea ecx, ds:[eax+eax*2]
        shl ecx, 3
        push ecx
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ecx
        je public_6f569c1
        mov edi, edi
        public_6f569a0 : nop
        test edx, edx
        je public_6f569b3
        mov ecx, 6
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6f569b3 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0x18
        add edx, 0x18
        cmp eax, ecx
        jne public_6f569a0
        public_6f569c1 : nop
        test ebp, ebp
        mov eax, edx
        jbe public_6f569eb
        mov ebx, ebp
        lea esp, ss:[esp]
        public_6f569d0 : nop
        test eax, eax
        je public_6f569e5
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, 6
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6f569e5 : nop
        add eax, 0x18
        dec ebx
        jne public_6f569d0
        public_6f569eb : nop
        mov esi, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[ebp+ebp*2]
        shl ecx, 3
        cmp eax, esi
        lea ebx, ds:[ecx+edx]
        mov dword ptr ss : [esp+0x24], esi
        je public_6f56a31
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        sub eax, edx
        add eax, ecx
        public_6f56a10 : nop
        test ebx, ebx
        je public_6f56a27
        mov ecx, 6
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x24]
        public_6f56a27 : nop
        add eax, 0x18
        add ebx, 0x18
        cmp eax, esi
        jne public_6f56a10
        public_6f56a31 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x18]
        lea eax, ds:[eax+eax*2]
        lea ecx, ds:[esi+eax*8]
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [edi+0xC], ecx
        jne public_6f56a70
        xor edx, edx
        add ebp, edx
        lea ecx, ss:[ebp+ebp*2]
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f56a70 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add ebp, edx
        lea ecx, ss:[ebp+ebp*2]
        lea edx, ds:[esi+ecx*8]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f56a9f : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_6f56b72
        lea ecx, ss:[ebp+ebp*2]
        shl ecx, 3
        cmp esi, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+esi]
        je public_6f56af7
        mov edx, eax
        sub edx, ecx
        public_6f56ad6 : nop
        test eax, eax
        je public_6f56aed
        mov ecx, 6
        mov esi, edx
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_6f56aed : nop
        add edx, 0x18
        add eax, 0x18
        cmp edx, ebx
        jne public_6f56ad6
        public_6f56af7 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        mov eax, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        je public_6f56b3d
        lea esp, ss:[esp]
        public_6f56b20 : nop
        test ebx, ebx
        je public_6f56b37
        mov ecx, 6
        mov esi, ebp
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_6f56b37 : nop
        add ebx, 0x18
        dec eax
        jne public_6f56b20
        public_6f56b3d : nop
        mov edx, dword ptr ds : [edi+8]
        cmp esi, edx
        mov eax, esi
        je public_6f56b5c
        public_6f56b46 : nop
        mov edi, eax
        add eax, 0x18
        cmp eax, edx
        mov ecx, 6
        mov esi, ebp
        rep movsd
        jne public_6f56b46
        mov edi, dword ptr ss : [esp+0x10]
        public_6f56b5c : nop
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ss : [esp+0x20]
        add eax, edx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f56b72 : nop
        test ebp, ebp
        jbe public_6f56c09
        lea ebp, ss:[ebp+ebp*2]
        shl ebp, 3
        mov eax, ebx
        sub eax, ebp
        cmp eax, ebx
        mov edx, ebx
        je public_6f56bb1
        nop 
        lea esp, ss:[esp]
        public_6f56b90 : nop
        test edx, edx
        je public_6f56ba7
        mov ecx, 6
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_6f56ba7 : nop
        add eax, 0x18
        add edx, 0x18
        cmp eax, ebx
        jne public_6f56b90
        public_6f56bb1 : nop
        mov edx, dword ptr ds : [edi+8]
        mov eax, edx
        sub eax, ebp
        cmp esi, eax
        je public_6f56bdf
        lea esp, ss:[esp]
        public_6f56bc0 : nop
        sub eax, 0x18
        sub edx, 0x18
        mov ecx, 6
        mov esi, eax
        mov edi, edx
        rep movsd
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        jne public_6f56bc0
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        public_6f56bdf : nop
        lea edx, ds:[esi+ebp]
        cmp esi, edx
        mov eax, esi
        je public_6f56c06
        mov ebx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6f56bf0 : nop
        mov edi, eax
        add eax, 0x18
        cmp eax, edx
        mov ecx, 6
        mov esi, ebx
        rep movsd
        jne public_6f56bf0
        mov edi, dword ptr ss : [esp+0x10]
        public_6f56c06 : nop
        add dword ptr ds : [edi+8], ebp
        public_6f56c09 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6f56900)
    }
}

#undef public_6f56954
#undef public_6f56956
#undef public_6f5695e
#undef public_6f56971
#undef public_6f5697e
#undef public_6f569a0
#undef public_6f569b3
#undef public_6f569c1
#undef public_6f569d0
#undef public_6f569e5
#undef public_6f569eb
#undef public_6f56a10
#undef public_6f56a27
#undef public_6f56a31
#undef public_6f56a70
#undef public_6f56a9f
#undef public_6f56ad6
#undef public_6f56aed
#undef public_6f56af7
#undef public_6f56b20
#undef public_6f56b37
#undef public_6f56b3d
#undef public_6f56b46
#undef public_6f56b5c
#undef public_6f56b72
#undef public_6f56b90
#undef public_6f56ba7
#undef public_6f56bb1
#undef public_6f56bc0
#undef public_6f56bdf
#undef public_6f56bf0
#undef public_6f56c06
#undef public_6f56c09
