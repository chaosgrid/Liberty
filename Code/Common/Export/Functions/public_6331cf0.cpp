#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6331cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6331d44 _public_6331d44
#define public_6331d46 _public_6331d46
#define public_6331d4e _public_6331d4e
#define public_6331d61 _public_6331d61
#define public_6331d6e _public_6331d6e
#define public_6331d90 _public_6331d90
#define public_6331da3 _public_6331da3
#define public_6331db1 _public_6331db1
#define public_6331dc0 _public_6331dc0
#define public_6331dd5 _public_6331dd5
#define public_6331ddb _public_6331ddb
#define public_6331e00 _public_6331e00
#define public_6331e17 _public_6331e17
#define public_6331e21 _public_6331e21
#define public_6331e60 _public_6331e60
#define public_6331e8f _public_6331e8f
#define public_6331ec6 _public_6331ec6
#define public_6331edd _public_6331edd
#define public_6331ee7 _public_6331ee7
#define public_6331f10 _public_6331f10
#define public_6331f27 _public_6331f27
#define public_6331f2d _public_6331f2d
#define public_6331f36 _public_6331f36
#define public_6331f4c _public_6331f4c
#define public_6331f62 _public_6331f62
#define public_6331f80 _public_6331f80
#define public_6331f97 _public_6331f97
#define public_6331fa1 _public_6331fa1
#define public_6331fb0 _public_6331fb0
#define public_6331fcf _public_6331fcf
#define public_6331fe0 _public_6331fe0
#define public_6331ff6 _public_6331ff6
#define public_6331ff9 _public_6331ff9

PROC_DECLARE(0x6331cf0, internal_6331cf0, public_6331cf0);
extern "C" NAKED register_t __cdecl internal_6331cf0()
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
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_6331e8f
        mov esi, dword ptr ds : [edi+4]
        test esi, esi
        je public_6331d44
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp ebp, edx
        mov ecx, edx
        jb public_6331d46
        public_6331d44 : nop
        mov ecx, ebp
        public_6331d46 : nop
        test esi, esi
        jne public_6331d4e
        xor edx, edx
        jmp public_6331d61
        public_6331d4e : nop
        sub ebx, esi
        mov eax, 0x66666667
        imul ebx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6331d61 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_6331d6e
        xor eax, eax
        public_6331d6e : nop
        lea ecx, ds:[eax+eax*4]
        shl ecx, 2
        push ecx
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ecx
        je public_6331db1
        mov edi, edi
        public_6331d90 : nop
        test edx, edx
        je public_6331da3
        mov ecx, 5
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6331da3 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0x14
        add edx, 0x14
        cmp eax, ecx
        jne public_6331d90
        public_6331db1 : nop
        test ebp, ebp
        mov eax, edx
        jbe public_6331ddb
        mov ebx, ebp
        lea esp, ss:[esp]
        public_6331dc0 : nop
        test eax, eax
        je public_6331dd5
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, 5
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6331dd5 : nop
        add eax, 0x14
        dec ebx
        jne public_6331dc0
        public_6331ddb : nop
        mov esi, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[ebp+ebp*4]
        shl ecx, 2
        cmp eax, esi
        lea ebx, ds:[ecx+edx]
        mov dword ptr ss : [esp+0x24], esi
        je public_6331e21
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        sub eax, edx
        add eax, ecx
        public_6331e00 : nop
        test ebx, ebx
        je public_6331e17
        mov ecx, 5
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x24]
        public_6331e17 : nop
        add eax, 0x14
        add ebx, 0x14
        cmp eax, esi
        jne public_6331e00
        public_6331e21 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x18]
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[esi+eax*4]
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [edi+0xC], ecx
        jne public_6331e60
        xor edx, edx
        add ebp, edx
        lea ecx, ss:[ebp+ebp*4]
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6331e60 : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add ebp, edx
        lea ecx, ss:[ebp+ebp*4]
        lea edx, ds:[esi+ecx*4]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6331e8f : nop
        mov esi, dword ptr ss : [esp+0x1C]
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, ebp
        jae public_6331f62
        lea ecx, ss:[ebp+ebp*4]
        shl ecx, 2
        cmp esi, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+esi]
        je public_6331ee7
        mov edx, eax
        sub edx, ecx
        public_6331ec6 : nop
        test eax, eax
        je public_6331edd
        mov ecx, 5
        mov esi, edx
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_6331edd : nop
        add edx, 0x14
        add eax, 0x14
        cmp edx, ebx
        jne public_6331ec6
        public_6331ee7 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, ebx
        sub ecx, esi
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        sub ebp, edx
        mov eax, ebp
        mov ebp, dword ptr ss : [esp+0x24]
        je public_6331f2d
        lea esp, ss:[esp]
        public_6331f10 : nop
        test ebx, ebx
        je public_6331f27
        mov ecx, 5
        mov esi, ebp
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_6331f27 : nop
        add ebx, 0x14
        dec eax
        jne public_6331f10
        public_6331f2d : nop
        mov edx, dword ptr ds : [edi+8]
        cmp esi, edx
        mov eax, esi
        je public_6331f4c
        public_6331f36 : nop
        mov edi, eax
        add eax, 0x14
        cmp eax, edx
        mov ecx, 5
        mov esi, ebp
        rep movsd
        jne public_6331f36
        mov edi, dword ptr ss : [esp+0x10]
        public_6331f4c : nop
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
        public_6331f62 : nop
        test ebp, ebp
        jbe public_6331ff9
        lea ebp, ss:[ebp+ebp*4]
        shl ebp, 2
        mov eax, ebx
        sub eax, ebp
        cmp eax, ebx
        mov edx, ebx
        je public_6331fa1
        nop 
        lea esp, ss:[esp]
        public_6331f80 : nop
        test edx, edx
        je public_6331f97
        mov ecx, 5
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x1C]
        public_6331f97 : nop
        add eax, 0x14
        add edx, 0x14
        cmp eax, ebx
        jne public_6331f80
        public_6331fa1 : nop
        mov edx, dword ptr ds : [edi+8]
        mov eax, edx
        sub eax, ebp
        cmp esi, eax
        je public_6331fcf
        lea esp, ss:[esp]
        public_6331fb0 : nop
        sub eax, 0x14
        sub edx, 0x14
        mov ecx, 5
        mov esi, eax
        mov edi, edx
        rep movsd
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp eax, ecx
        jne public_6331fb0
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, ecx
        public_6331fcf : nop
        lea edx, ds:[esi+ebp]
        cmp esi, edx
        mov eax, esi
        je public_6331ff6
        mov ebx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6331fe0 : nop
        mov edi, eax
        add eax, 0x14
        cmp eax, edx
        mov ecx, 5
        mov esi, ebx
        rep movsd
        jne public_6331fe0
        mov edi, dword ptr ss : [esp+0x10]
        public_6331ff6 : nop
        add dword ptr ds : [edi+8], ebp
        public_6331ff9 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6331cf0)
    }
}

#undef public_6331d44
#undef public_6331d46
#undef public_6331d4e
#undef public_6331d61
#undef public_6331d6e
#undef public_6331d90
#undef public_6331da3
#undef public_6331db1
#undef public_6331dc0
#undef public_6331dd5
#undef public_6331ddb
#undef public_6331e00
#undef public_6331e17
#undef public_6331e21
#undef public_6331e60
#undef public_6331e8f
#undef public_6331ec6
#undef public_6331edd
#undef public_6331ee7
#undef public_6331f10
#undef public_6331f27
#undef public_6331f2d
#undef public_6331f36
#undef public_6331f4c
#undef public_6331f62
#undef public_6331f80
#undef public_6331f97
#undef public_6331fa1
#undef public_6331fb0
#undef public_6331fcf
#undef public_6331fe0
#undef public_6331ff6
#undef public_6331ff9
