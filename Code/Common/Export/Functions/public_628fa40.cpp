#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628fa40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628fa94 _public_628fa94
#define public_628fa96 _public_628fa96
#define public_628fa9e _public_628fa9e
#define public_628fab1 _public_628fab1
#define public_628fabe _public_628fabe
#define public_628fae0 _public_628fae0
#define public_628faf7 _public_628faf7
#define public_628fb01 _public_628fb01
#define public_628fb10 _public_628fb10
#define public_628fb27 _public_628fb27
#define public_628fb2d _public_628fb2d
#define public_628fb50 _public_628fb50
#define public_628fb67 _public_628fb67
#define public_628fb71 _public_628fb71
#define public_628fbad _public_628fbad
#define public_628fbda _public_628fbda
#define public_628fc10 _public_628fc10
#define public_628fc27 _public_628fc27
#define public_628fc31 _public_628fc31
#define public_628fc53 _public_628fc53
#define public_628fc66 _public_628fc66
#define public_628fc6c _public_628fc6c
#define public_628fc75 _public_628fc75
#define public_628fc8b _public_628fc8b
#define public_628fca1 _public_628fca1
#define public_628fcc0 _public_628fcc0
#define public_628fcd7 _public_628fcd7
#define public_628fce1 _public_628fce1
#define public_628fcf0 _public_628fcf0
#define public_628fd0d _public_628fd0d
#define public_628fd18 _public_628fd18
#define public_628fd32 _public_628fd32
#define public_628fd35 _public_628fd35

PROC_DECLARE(0x628fa40, internal_628fa40, public_628fa40);
extern "C" NAKED register_t __cdecl internal_628fa40()
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
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, esi
        mov dword ptr ss : [esp+0x10], edi
        jae public_628fbda
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        je public_628fa94
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp esi, edx
        mov ecx, edx
        jb public_628fa96
        public_628fa94 : nop
        mov ecx, esi
        public_628fa96 : nop
        test ebp, ebp
        jne public_628fa9e
        xor edx, edx
        jmp public_628fab1
        public_628fa9e : nop
        sub ebx, ebp
        mov eax, 0x4EC4EC4F
        imul ebx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_628fab1 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_628fabe
        xor eax, eax
        public_628fabe : nop
        imul eax, 0x34
        push eax
        call public_6391d9c
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_628fb01
        nop 
        lea esp, ss:[esp]
        public_628fae0 : nop
        test edx, edx
        je public_628faf7
        mov ecx, 0xD
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_628faf7 : nop
        add eax, 0x34
        add edx, 0x34
        cmp eax, ebx
        jne public_628fae0
        public_628fb01 : nop
        test esi, esi
        mov eax, edx
        jbe public_628fb2d
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        lea ecx, ds:[ecx]
        public_628fb10 : nop
        test eax, eax
        je public_628fb27
        mov ecx, 0xD
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_628fb27 : nop
        add eax, 0x34
        dec ebx
        jne public_628fb10
        public_628fb2d : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        imul ecx, 0x34
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_628fb71
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        lea esp, ss:[esp]
        public_628fb50 : nop
        test ebx, ebx
        je public_628fb67
        mov ecx, 0xD
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_628fb67 : nop
        add eax, 0x34
        add ebx, 0x34
        cmp eax, ebp
        jne public_628fb50
        public_628fb71 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        imul eax, 0x34
        add eax, ebx
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_628fbad
        xor edx, edx
        mov edx, esi
        imul edx, 0x34
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_628fbad : nop
        mov ecx, dword ptr ds : [edi+8]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add edx, esi
        imul edx, 0x34
        add edx, ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_628fbda : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        cmp edx, esi
        jae public_628fca1
        mov ecx, esi
        imul ecx, 0x34
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+ebp]
        je public_628fc31
        mov edx, eax
        sub edx, ecx
        nop 
        public_628fc10 : nop
        test eax, eax
        je public_628fc27
        mov ecx, 0xD
        mov esi, edx
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_628fc27 : nop
        add edx, 0x34
        add eax, 0x34
        cmp edx, ebx
        jne public_628fc10
        public_628fc31 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov ecx, ebx
        sub ecx, ebp
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        sub esi, edx
        mov edx, dword ptr ss : [esp+0x28]
        je public_628fc6c
        mov eax, esi
        public_628fc53 : nop
        test ebx, ebx
        je public_628fc66
        mov ecx, 0xD
        mov esi, edx
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_628fc66 : nop
        add ebx, 0x34
        dec eax
        jne public_628fc53
        public_628fc6c : nop
        mov ebx, dword ptr ds : [edi+8]
        cmp ebp, ebx
        mov eax, ebp
        je public_628fc8b
        public_628fc75 : nop
        mov edi, eax
        add eax, 0x34
        cmp eax, ebx
        mov ecx, 0xD
        mov esi, edx
        rep movsd
        jne public_628fc75
        mov edi, dword ptr ss : [esp+0x10]
        public_628fc8b : nop
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
        public_628fca1 : nop
        test esi, esi
        jbe public_628fd35
        imul esi, 0x34
        mov eax, ebx
        sub eax, esi
        cmp eax, ebx
        mov edx, ebx
        mov dword ptr ss : [esp+0x20], esi
        je public_628fce1
        lea ebx, ds:[ebx]
        public_628fcc0 : nop
        test edx, edx
        je public_628fcd7
        mov ecx, 0xD
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_628fcd7 : nop
        add eax, 0x34
        add edx, 0x34
        cmp eax, ebx
        jne public_628fcc0
        public_628fce1 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov eax, ebx
        sub eax, esi
        cmp ebp, eax
        je public_628fd0d
        lea esp, ss:[esp]
        public_628fcf0 : nop
        sub eax, 0x34
        sub ebx, 0x34
        cmp eax, ebp
        mov ecx, 0xD
        mov esi, eax
        mov edi, ebx
        rep movsd
        jne public_628fcf0
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_628fd0d : nop
        lea eax, ds:[esi+ebp]
        cmp ebp, eax
        je public_628fd32
        mov edx, dword ptr ss : [esp+0x28]
        public_628fd18 : nop
        mov edi, ebp
        add ebp, 0x34
        cmp ebp, eax
        mov ecx, 0xD
        mov esi, edx
        rep movsd
        jne public_628fd18
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_628fd32 : nop
        add dword ptr ds : [edi+8], esi
        public_628fd35 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x628fa40)
    }
}

#undef public_628fa94
#undef public_628fa96
#undef public_628fa9e
#undef public_628fab1
#undef public_628fabe
#undef public_628fae0
#undef public_628faf7
#undef public_628fb01
#undef public_628fb10
#undef public_628fb27
#undef public_628fb2d
#undef public_628fb50
#undef public_628fb67
#undef public_628fb71
#undef public_628fbad
#undef public_628fbda
#undef public_628fc10
#undef public_628fc27
#undef public_628fc31
#undef public_628fc53
#undef public_628fc66
#undef public_628fc6c
#undef public_628fc75
#undef public_628fc8b
#undef public_628fca1
#undef public_628fcc0
#undef public_628fcd7
#undef public_628fce1
#undef public_628fcf0
#undef public_628fd0d
#undef public_628fd18
#undef public_628fd32
#undef public_628fd35
