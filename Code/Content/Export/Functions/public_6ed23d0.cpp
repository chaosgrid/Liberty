#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed23d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed26b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ed2424 _public_6ed2424
#define public_6ed2426 _public_6ed2426
#define public_6ed242e _public_6ed242e
#define public_6ed2441 _public_6ed2441
#define public_6ed244e _public_6ed244e
#define public_6ed2470 _public_6ed2470
#define public_6ed2487 _public_6ed2487
#define public_6ed2491 _public_6ed2491
#define public_6ed24a0 _public_6ed24a0
#define public_6ed24b7 _public_6ed24b7
#define public_6ed24bd _public_6ed24bd
#define public_6ed24e0 _public_6ed24e0
#define public_6ed24f7 _public_6ed24f7
#define public_6ed2501 _public_6ed2501
#define public_6ed253d _public_6ed253d
#define public_6ed256a _public_6ed256a
#define public_6ed25a0 _public_6ed25a0
#define public_6ed25b7 _public_6ed25b7
#define public_6ed25c1 _public_6ed25c1
#define public_6ed25e5 _public_6ed25e5
#define public_6ed25f8 _public_6ed25f8
#define public_6ed25fe _public_6ed25fe
#define public_6ed2605 _public_6ed2605
#define public_6ed2614 _public_6ed2614
#define public_6ed262a _public_6ed262a
#define public_6ed2641 _public_6ed2641
#define public_6ed2654 _public_6ed2654
#define public_6ed265e _public_6ed265e
#define public_6ed2670 _public_6ed2670
#define public_6ed2682 _public_6ed2682
#define public_6ed2690 _public_6ed2690
#define public_6ed269f _public_6ed269f
#define public_6ed26a6 _public_6ed26a6

PROC_DECLARE(0x6ed23d0, internal_6ed23d0, public_6ed23d0);
extern "C" NAKED register_t __cdecl internal_6ed23d0()
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
        jae public_6ed256a
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        je public_6ed2424
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
        jb public_6ed2426
        public_6ed2424 : nop
        mov ecx, esi
        public_6ed2426 : nop
        test ebp, ebp
        jne public_6ed242e
        xor edx, edx
        jmp public_6ed2441
        public_6ed242e : nop
        sub ebx, ebp
        mov eax, 0x4EC4EC4F
        imul ebx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6ed2441 : nop
        lea eax, ds:[edx+ecx]
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6ed244e
        xor eax, eax
        public_6ed244e : nop
        imul eax, 0x34
        push eax
        call public_6fa912a
        mov ebx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x1C], eax
        mov edx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6ed2491
        nop 
        lea esp, ss:[esp]
        public_6ed2470 : nop
        test edx, edx
        je public_6ed2487
        mov ecx, 0xD
        mov esi, eax
        mov edi, edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6ed2487 : nop
        add eax, 0x34
        add edx, 0x34
        cmp eax, ebx
        jne public_6ed2470
        public_6ed2491 : nop
        test esi, esi
        mov eax, edx
        jbe public_6ed24bd
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, esi
        lea ecx, ds:[ecx]
        public_6ed24a0 : nop
        test eax, eax
        je public_6ed24b7
        mov ecx, 0xD
        mov esi, ebp
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6ed24b7 : nop
        add eax, 0x34
        dec ebx
        jne public_6ed24a0
        public_6ed24bd : nop
        mov ebp, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, esi
        imul ecx, 0x34
        cmp eax, ebp
        lea ebx, ds:[ecx+edx]
        je public_6ed2501
        mov eax, ebx
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        sub eax, edx
        add eax, ecx
        lea esp, ss:[esp]
        public_6ed24e0 : nop
        test ebx, ebx
        je public_6ed24f7
        mov ecx, 0xD
        mov esi, eax
        mov edi, ebx
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6ed24f7 : nop
        add eax, 0x34
        add ebx, 0x34
        cmp eax, ebp
        jne public_6ed24e0
        public_6ed2501 : nop
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
        jne public_6ed253d
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
        public_6ed253d : nop
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
        public_6ed256a : nop
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
        jae public_6ed262a
        mov ecx, esi
        imul ecx, 0x34
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x20], ecx
        lea eax, ds:[ecx+ebp]
        je public_6ed25c1
        mov edx, eax
        sub edx, ecx
        nop 
        public_6ed25a0 : nop
        test eax, eax
        je public_6ed25b7
        mov ecx, 0xD
        mov esi, edx
        mov edi, eax
        rep movsd
        mov esi, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ss : [esp+0x10]
        public_6ed25b7 : nop
        add edx, 0x34
        add eax, 0x34
        cmp edx, ebx
        jne public_6ed25a0
        public_6ed25c1 : nop
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
        mov eax, ebx
        mov ebx, dword ptr ss : [esp+0x28]
        je public_6ed25fe
        mov edx, esi
        public_6ed25e5 : nop
        test eax, eax
        je public_6ed25f8
        mov ecx, 0xD
        mov esi, ebx
        mov edi, eax
        rep movsd
        mov edi, dword ptr ss : [esp+0x10]
        public_6ed25f8 : nop
        add eax, 0x34
        dec edx
        jne public_6ed25e5
        public_6ed25fe : nop
        mov esi, dword ptr ds : [edi+8]
        cmp ebp, esi
        je public_6ed2614
        public_6ed2605 : nop
        push ebx
        mov ecx, ebp
        call public_6ed26b0
        add ebp, 0x34
        cmp ebp, esi
        jne public_6ed2605
        public_6ed2614 : nop
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
        public_6ed262a : nop
        test esi, esi
        jbe public_6ed26a6
        mov edi, esi
        imul edi, 0x34
        mov eax, ebx
        sub eax, edi
        cmp eax, ebx
        mov edx, ebx
        mov dword ptr ss : [esp+0x20], edi
        je public_6ed265e
        public_6ed2641 : nop
        test edx, edx
        je public_6ed2654
        mov ecx, 0xD
        mov esi, eax
        mov edi, edx
        rep movsd
        mov edi, dword ptr ss : [esp+0x20]
        public_6ed2654 : nop
        add eax, 0x34
        add edx, 0x34
        cmp eax, ebx
        jne public_6ed2641
        public_6ed265e : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [edx+8]
        mov esi, ebx
        sub esi, edi
        cmp ebp, esi
        je public_6ed2682
        lea ecx, ds:[ecx]
        public_6ed2670 : nop
        sub esi, 0x34
        sub ebx, 0x34
        push esi
        mov ecx, ebx
        call public_6ed26b0
        cmp esi, ebp
        jne public_6ed2670
        public_6ed2682 : nop
        lea esi, ds:[edi+ebp]
        cmp ebp, esi
        je public_6ed269f
        mov ebx, dword ptr ss : [esp+0x28]
        lea ecx, ds:[ecx]
        public_6ed2690 : nop
        push ebx
        mov ecx, ebp
        call public_6ed26b0
        add ebp, 0x34
        cmp ebp, esi
        jne public_6ed2690
        public_6ed269f : nop
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ds : [eax+8], edi
        public_6ed26a6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6ed23d0)
    }
}

#undef public_6ed2424
#undef public_6ed2426
#undef public_6ed242e
#undef public_6ed2441
#undef public_6ed244e
#undef public_6ed2470
#undef public_6ed2487
#undef public_6ed2491
#undef public_6ed24a0
#undef public_6ed24b7
#undef public_6ed24bd
#undef public_6ed24e0
#undef public_6ed24f7
#undef public_6ed2501
#undef public_6ed253d
#undef public_6ed256a
#undef public_6ed25a0
#undef public_6ed25b7
#undef public_6ed25c1
#undef public_6ed25e5
#undef public_6ed25f8
#undef public_6ed25fe
#undef public_6ed2605
#undef public_6ed2614
#undef public_6ed262a
#undef public_6ed2641
#undef public_6ed2654
#undef public_6ed265e
#undef public_6ed2670
#undef public_6ed2682
#undef public_6ed2690
#undef public_6ed269f
#undef public_6ed26a6
