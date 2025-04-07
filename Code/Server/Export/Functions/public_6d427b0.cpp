#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d427b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d427e6 _public_6d427e6
#define public_6d427e8 _public_6d427e8
#define public_6d427f0 _public_6d427f0
#define public_6d427f5 _public_6d427f5
#define public_6d42801 _public_6d42801
#define public_6d42820 _public_6d42820
#define public_6d42837 _public_6d42837
#define public_6d42845 _public_6d42845
#define public_6d42851 _public_6d42851
#define public_6d42868 _public_6d42868
#define public_6d4286e _public_6d4286e
#define public_6d42890 _public_6d42890
#define public_6d428a7 _public_6d428a7
#define public_6d428b1 _public_6d428b1
#define public_6d428ed _public_6d428ed
#define public_6d4290c _public_6d4290c
#define public_6d42933 _public_6d42933
#define public_6d4294a _public_6d4294a
#define public_6d42954 _public_6d42954
#define public_6d42968 _public_6d42968
#define public_6d4297b _public_6d4297b
#define public_6d42981 _public_6d42981
#define public_6d42990 _public_6d42990
#define public_6d429a6 _public_6d429a6
#define public_6d429bc _public_6d429bc
#define public_6d429d5 _public_6d429d5
#define public_6d429e8 _public_6d429e8
#define public_6d429f6 _public_6d429f6
#define public_6d42a01 _public_6d42a01
#define public_6d42a1a _public_6d42a1a
#define public_6d42a30 _public_6d42a30
#define public_6d42a46 _public_6d42a46
#define public_6d42a52 _public_6d42a52

PROC_DECLARE(0x6d427b0, internal_6d427b0, public_6d427b0);
extern "C" NAKED register_t __cdecl internal_6d427b0()
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
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 5
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], edi
        jae public_6d4290c
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_6d427e6
        mov ecx, eax
        sub ecx, edx
        sar ecx, 5
        cmp esi, ecx
        jb public_6d427e8
        public_6d427e6 : nop
        mov ecx, esi
        public_6d427e8 : nop
        test edx, edx
        jne public_6d427f0
        xor eax, eax
        jmp public_6d427f5
        public_6d427f0 : nop
        sub eax, edx
        sar eax, 5
        public_6d427f5 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6d42801
        xor eax, eax
        public_6d42801 : nop
        shl eax, 5
        push eax
        call public_6d60012
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ecx
        je public_6d42845
        mov edi, edi
        public_6d42820 : nop
        test edx, edx
        je public_6d42837
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6d42837 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        add eax, 0x20
        add edx, 0x20
        cmp eax, ecx
        jne public_6d42820
        public_6d42845 : nop
        test esi, esi
        mov eax, edx
        jbe public_6d4286e
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        public_6d42851 : nop
        test eax, eax
        je public_6d42868
        mov ecx, 8
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6d42868 : nop
        add eax, 0x20
        dec ebx
        jne public_6d42851
        public_6d4286e : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        shl ecx, 5
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_6d428b1
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        lea ecx, ds:[ecx]
        public_6d42890 : nop
        test ebx, ebx
        je public_6d428a7
        mov ecx, 8
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6d428a7 : nop
        add eax, 0x20
        add ebx, 0x20
        cmp eax, ebp
        jne public_6d42890
        public_6d428b1 : nop
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_6d5ffb0
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edi+4]
        shl eax, 5
        add eax, edx
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [edi+0xC], eax
        jne public_6d428ed
        xor eax, eax
        mov eax, esi
        shl eax, 5
        add eax, edx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d428ed : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 5
        add eax, esi
        shl eax, 5
        add eax, edx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d4290c : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 5
        cmp ecx, esi
        jae public_6d429bc
        mov ecx, esi
        shl ecx, 5
        cmp ebp, eax
        mov dword ptr ss : [esp+0x20], ecx
        lea edx, ds:[ecx+ebp]
        je public_6d42954
        mov ebx, edx
        sub ebx, ecx
        public_6d42933 : nop
        test edx, edx
        je public_6d4294a
        mov ecx, 8
        mov esi, ebx
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6d4294a : nop
        add ebx, 0x20
        add edx, 0x20
        cmp ebx, eax
        jne public_6d42933
        public_6d42954 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ebx, dword ptr ss : [esp+0x28]
        mov edx, eax
        sub edx, ebp
        sar edx, 5
        sub esi, edx
        je public_6d42981
        mov edx, esi
        public_6d42968 : nop
        test eax, eax
        je public_6d4297b
        mov ecx, 8
        mov esi, ebx
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6d4297b : nop
        add eax, 0x20
        dec edx
        jne public_6d42968
        public_6d42981 : nop
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov eax, ebp
        je public_6d429a6
        lea ebx, ds:[ebx]
        public_6d42990 : nop
        mov edi, eax
        add eax, 0x20
        cmp eax, edx
        mov ecx, 8
        mov esi, ebx
        rep movsd
        jne public_6d42990
        mov edi, dword ptr ss : [esp+0x10]
        public_6d429a6 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        add ecx, eax
        mov dword ptr ds : [edi+8], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d429bc : nop
        test esi, esi
        jbe public_6d42a52
        shl esi, 5
        mov edx, eax
        sub edx, esi
        cmp edx, eax
        mov ebx, eax
        mov dword ptr ss : [esp+0x20], esi
        je public_6d429f6
        public_6d429d5 : nop
        test ebx, ebx
        je public_6d429e8
        mov ecx, 8
        mov esi, edx
        mov edi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6d429e8 : nop
        add edx, 0x20
        add ebx, 0x20
        cmp edx, eax
        jne public_6d429d5
        mov esi, dword ptr ss : [esp+0x20]
        public_6d429f6 : nop
        mov edx, dword ptr ds : [edi+8]
        mov eax, edx
        sub eax, esi
        cmp ebp, eax
        je public_6d42a1a
        public_6d42a01 : nop
        sub eax, 0x20
        sub edx, 0x20
        cmp eax, ebp
        mov ecx, 8
        mov esi, eax
        mov edi, edx
        rep movsd
        jne public_6d42a01
        mov edi, dword ptr ss : [esp+0x10]
        public_6d42a1a : nop
        mov ecx, dword ptr ss : [esp+0x20]
        lea edx, ds:[ecx+ebp]
        cmp ebp, edx
        mov eax, ebp
        je public_6d42a46
        mov ebx, dword ptr ss : [esp+0x28]
        nop 
        lea esp, ss:[esp]
        public_6d42a30 : nop
        mov edi, eax
        add eax, 0x20
        cmp eax, edx
        mov ecx, 8
        mov esi, ebx
        rep movsd
        jne public_6d42a30
        mov edi, dword ptr ss : [esp+0x10]
        public_6d42a46 : nop
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ss : [esp+0x20]
        add eax, edx
        mov dword ptr ds : [edi+8], eax
        public_6d42a52 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6d427b0)
    }
}

#undef public_6d427e6
#undef public_6d427e8
#undef public_6d427f0
#undef public_6d427f5
#undef public_6d42801
#undef public_6d42820
#undef public_6d42837
#undef public_6d42845
#undef public_6d42851
#undef public_6d42868
#undef public_6d4286e
#undef public_6d42890
#undef public_6d428a7
#undef public_6d428b1
#undef public_6d428ed
#undef public_6d4290c
#undef public_6d42933
#undef public_6d4294a
#undef public_6d42954
#undef public_6d42968
#undef public_6d4297b
#undef public_6d42981
#undef public_6d42990
#undef public_6d429a6
#undef public_6d429bc
#undef public_6d429d5
#undef public_6d429e8
#undef public_6d429f6
#undef public_6d42a01
#undef public_6d42a1a
#undef public_6d42a30
#undef public_6d42a46
#undef public_6d42a52
