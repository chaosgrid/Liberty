#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62695c0);
CLANG_FORWARD_PROC_SYMBOL(public_626a570);
CLANG_FORWARD_PROC_SYMBOL(public_626c190);
CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6269895 _public_6269895
#define public_62698aa _public_62698aa
#define public_62698dc _public_62698dc
#define public_62698de _public_62698de
#define public_62698e6 _public_62698e6
#define public_62698eb _public_62698eb
#define public_62698f7 _public_62698f7
#define public_6269912 _public_6269912
#define public_6269932 _public_6269932
#define public_6269944 _public_6269944
#define public_6269968 _public_6269968
#define public_626997b _public_626997b
#define public_6269980 _public_6269980
#define public_6269993 _public_6269993
#define public_62699dc _public_62699dc
#define public_6269a23 _public_6269a23
#define public_6269a45 _public_6269a45
#define public_6269a62 _public_6269a62
#define public_6269a68 _public_6269a68
#define public_6269a79 _public_6269a79

PROC_DECLARE(0x6269880, internal_6269880, public_6269880);
extern "C" NAKED register_t __cdecl internal_6269880()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebx, ecx
        mov ebp, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+4]
        mov edx, ebp
        cmp edx, ebp
        push esi
        push edi
        je public_62698aa
        public_6269895 : nop
        mov esi, edx
        mov edi, eax
        add edx, 0x20
        mov ecx, 8
        add eax, 0x20
        cmp edx, ebp
        rep movsd
        jne public_6269895
        public_62698aa : nop
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ebx+0xC]
        mov ebp, dword ptr ds : [ebx+4]
        sub esi, edi
        sub ecx, eax
        sar esi, 5
        sar ecx, 5
        cmp ecx, esi
        mov dword ptr ds : [ebx+8], eax
        jae public_62699dc
        test ebp, ebp
        je public_62698dc
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 5
        cmp esi, ecx
        jb public_62698de
        public_62698dc : nop
        mov ecx, esi
        public_62698de : nop
        test ebp, ebp
        jne public_62698e6
        xor eax, eax
        jmp public_62698eb
        public_62698e6 : nop
        sub eax, ebp
        sar eax, 5
        public_62698eb : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_62698f7
        xor eax, eax
        public_62698f7 : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov edi, dword ptr ds : [ebx+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x10], eax
        je public_6269932
        public_6269912 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edi
        push edx
        call public_626c1e0
        mov edx, dword ptr ss : [esp+0x18]
        add edx, 0x20
        add edi, 0x20
        add esp, 8
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], edx
        jne public_6269912
        public_6269932 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], eax
        cmp edi, dword ptr ss : [esp+0x24]
        je public_6269968
        public_6269944 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        push ecx
        call public_626c1e0
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x2C]
        add edx, 0x20
        add edi, 0x20
        add esp, 8
        cmp edi, eax
        mov dword ptr ss : [esp+0x10], edx
        jne public_6269944
        public_6269968 : nop
        mov edi, dword ptr ds : [ebx+8]
        cmp ebp, edi
        je public_6269993
        mov eax, dword ptr ss : [esp+0x10]
        sub eax, ebp
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6269980
        public_626997b : nop
        mov eax, dword ptr ss : [esp+0x24]
        nop 
        public_6269980 : nop
        add eax, ebp
        push ebp
        push eax
        call public_626c1e0
        add ebp, 0x20
        add esp, 8
        cmp ebp, edi
        jne public_626997b
        public_6269993 : nop
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+4]
        push edx
        push eax
        mov ecx, ebx
        call public_628f050
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x1C]
        shl eax, 5
        add eax, edi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], eax
        call public_62695c0
        add eax, esi
        shl eax, 5
        add eax, edi
        mov dword ptr ds : [ebx+4], edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        add esp, 0xC
        ret 8
        public_62699dc : nop
        mov edx, eax
        sub edx, ebp
        sar edx, 5
        cmp edx, esi
        jae public_6269a23
        shl esi, 5
        lea ecx, ds:[esi+ebp]
        push ecx
        push eax
        push ebp
        mov ecx, ebx
        call public_626a570
        mov eax, dword ptr ds : [ebx+8]
        mov edx, dword ptr ss : [esp+0x24]
        push eax
        sub eax, ebp
        sar eax, 5
        shl eax, 5
        push edx
        add eax, edi
        push eax
        mov ecx, ebx
        call public_626a570
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ebp
        sar eax, 5
        shl eax, 5
        push ebp
        add eax, edi
        push eax
        jmp public_6269a68
        public_6269a23 : nop
        test esi, esi
        jbe public_6269a79
        push eax
        shl esi, 5
        push eax
        sub eax, esi
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], esi
        call public_626a570
        mov edx, dword ptr ds : [ebx+8]
        mov eax, edx
        sub eax, esi
        cmp ebp, eax
        je public_6269a62
        public_6269a45 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebp
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6269a45
        mov esi, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ss : [esp+0x20]
        public_6269a62 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        push ebp
        push ecx
        public_6269a68 : nop
        push edi
        call public_626c190
        mov eax, dword ptr ds : [ebx+8]
        add esp, 0xC
        add eax, esi
        mov dword ptr ds : [ebx+8], eax
        public_6269a79 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6269880)
    }
}

#undef public_6269895
#undef public_62698aa
#undef public_62698dc
#undef public_62698de
#undef public_62698e6
#undef public_62698eb
#undef public_62698f7
#undef public_6269912
#undef public_6269932
#undef public_6269944
#undef public_6269968
#undef public_626997b
#undef public_6269980
#undef public_6269993
#undef public_62699dc
#undef public_6269a23
#undef public_6269a45
#undef public_6269a62
#undef public_6269a68
#undef public_6269a79
