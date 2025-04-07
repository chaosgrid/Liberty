#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efd610);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6efd664 _public_6efd664
#define public_6efd666 _public_6efd666
#define public_6efd66e _public_6efd66e
#define public_6efd681 _public_6efd681
#define public_6efd68e _public_6efd68e
#define public_6efd6b0 _public_6efd6b0
#define public_6efd6c7 _public_6efd6c7
#define public_6efd6d1 _public_6efd6d1
#define public_6efd6e0 _public_6efd6e0
#define public_6efd6f7 _public_6efd6f7
#define public_6efd6fd _public_6efd6fd
#define public_6efd720 _public_6efd720
#define public_6efd737 _public_6efd737
#define public_6efd741 _public_6efd741
#define public_6efd77d _public_6efd77d
#define public_6efd7aa _public_6efd7aa
#define public_6efd7e0 _public_6efd7e0
#define public_6efd7f7 _public_6efd7f7
#define public_6efd801 _public_6efd801
#define public_6efd823 _public_6efd823
#define public_6efd836 _public_6efd836
#define public_6efd83c _public_6efd83c
#define public_6efd845 _public_6efd845
#define public_6efd85b _public_6efd85b
#define public_6efd871 _public_6efd871
#define public_6efd890 _public_6efd890
#define public_6efd8a7 _public_6efd8a7
#define public_6efd8b1 _public_6efd8b1
#define public_6efd8c0 _public_6efd8c0
#define public_6efd8dd _public_6efd8dd
#define public_6efd8e8 _public_6efd8e8
#define public_6efd902 _public_6efd902
#define public_6efd905 _public_6efd905

PROC_DECLARE(0x6efd610, internal_6efd610, public_6efd610);
extern "C" NAKED register_t __cdecl internal_6efd610()
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
        jae public_6efd7aa
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        je public_6efd664
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
        jb public_6efd666
        public_6efd664 : nop
        mov ecx, esi
        public_6efd666 : nop
        test ebp, ebp
        jne public_6efd66e
        xor edx, edx
        jmp public_6efd681
        public_6efd66e : nop
        sub ebx, ebp
        mov eax, 0x4EC4EC4F
        imul ebx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6efd681 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6efd68e
        xor eax, eax
        public_6efd68e : nop
        imul eax, 0x34
        push eax
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6efd6d1
        nop 
        lea esp, ss:[esp]
        public_6efd6b0 : nop
        test edx, edx
        je public_6efd6c7
        mov ecx, 0xD
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6efd6c7 : nop
        add eax, 0x34
        add edx, 0x34
        cmp eax, ebx
        jne public_6efd6b0
        public_6efd6d1 : nop
        test esi, esi
        mov eax, edx
        jbe public_6efd6fd
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        lea ecx, ds:[ecx]
        public_6efd6e0 : nop
        test eax, eax
        je public_6efd6f7
        mov ecx, 0xD
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6efd6f7 : nop
        add eax, 0x34
        dec ebx
        jne public_6efd6e0
        public_6efd6fd : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        imul ecx, 0x34
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_6efd741
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        lea esp, ss:[esp]
        public_6efd720 : nop
        test ebx, ebx
        je public_6efd737
        mov ecx, 0xD
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6efd737 : nop
        add eax, 0x34
        add ebx, 0x34
        cmp eax, ebp
        jne public_6efd720
        public_6efd741 : nop
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        imul eax, 0x34
        add eax, ebx
        mov dword ptr ds : [edi+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        test eax, eax
        jne public_6efd77d
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
        public_6efd77d : nop
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
        public_6efd7aa : nop
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
        jae public_6efd871
        mov ecx, esi
        imul ecx, 0x34
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+ebp]
        je public_6efd801
        mov edx, eax
        sub edx, ecx
        nop 
        public_6efd7e0 : nop
        test eax, eax
        je public_6efd7f7
        mov ecx, 0xD
        mov esi, edx
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6efd7f7 : nop
        add edx, 0x34
        add eax, 0x34
        cmp edx, ebx
        jne public_6efd7e0
        public_6efd801 : nop
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
        je public_6efd83c
        mov eax, esi
        public_6efd823 : nop
        test ebx, ebx
        je public_6efd836
        mov ecx, 0xD
        mov esi, edx
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6efd836 : nop
        add ebx, 0x34
        dec eax
        jne public_6efd823
        public_6efd83c : nop
        mov ebx, dword ptr ds : [edi+8]
        cmp ebp, ebx
        mov eax, ebp
        je public_6efd85b
        public_6efd845 : nop
        mov edi, eax
        add eax, 0x34
        cmp eax, ebx
        mov ecx, 0xD
        mov esi, edx
        rep movsd
        jne public_6efd845
        mov edi, dword ptr ss : [esp+0x10]
        public_6efd85b : nop
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
        public_6efd871 : nop
        test esi, esi
        jbe public_6efd905
        imul esi, 0x34
        mov eax, ebx
        sub eax, esi
        cmp eax, ebx
        mov edx, ebx
        mov dword ptr ss : [esp+0x20], esi
        je public_6efd8b1
        lea ebx, ds:[ebx]
        public_6efd890 : nop
        test edx, edx
        je public_6efd8a7
        mov ecx, 0xD
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_6efd8a7 : nop
        add eax, 0x34
        add edx, 0x34
        cmp eax, ebx
        jne public_6efd890
        public_6efd8b1 : nop
        mov ebx, dword ptr ds : [edi+8]
        mov eax, ebx
        sub eax, esi
        cmp ebp, eax
        je public_6efd8dd
        lea esp, ss:[esp]
        public_6efd8c0 : nop
        sub eax, 0x34
        sub ebx, 0x34
        cmp eax, ebp
        mov ecx, 0xD
        mov esi, eax
        mov edi, ebx
        rep movsd
        jne public_6efd8c0
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_6efd8dd : nop
        lea eax, ds:[esi+ebp]
        cmp ebp, eax
        je public_6efd902
        mov edx, dword ptr ss : [esp+0x28]
        public_6efd8e8 : nop
        mov edi, ebp
        add ebp, 0x34
        cmp ebp, eax
        mov ecx, 0xD
        mov esi, edx
        rep movsd
        jne public_6efd8e8
        mov edi, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x20]
        public_6efd902 : nop
        add dword ptr ds : [edi+8], esi
        public_6efd905 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6efd610)
    }
}

#undef public_6efd664
#undef public_6efd666
#undef public_6efd66e
#undef public_6efd681
#undef public_6efd68e
#undef public_6efd6b0
#undef public_6efd6c7
#undef public_6efd6d1
#undef public_6efd6e0
#undef public_6efd6f7
#undef public_6efd6fd
#undef public_6efd720
#undef public_6efd737
#undef public_6efd741
#undef public_6efd77d
#undef public_6efd7aa
#undef public_6efd7e0
#undef public_6efd7f7
#undef public_6efd801
#undef public_6efd823
#undef public_6efd836
#undef public_6efd83c
#undef public_6efd845
#undef public_6efd85b
#undef public_6efd871
#undef public_6efd890
#undef public_6efd8a7
#undef public_6efd8b1
#undef public_6efd8c0
#undef public_6efd8dd
#undef public_6efd8e8
#undef public_6efd902
#undef public_6efd905
