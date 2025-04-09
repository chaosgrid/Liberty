#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a740);
CLANG_FORWARD_PROC_SYMBOL(public_4cffa0);
CLANG_FORWARD_PROC_SYMBOL(public_4e5460);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

#define public_4cfe27 _public_4cfe27
#define public_4cfe2d _public_4cfe2d
#define public_4cfe40 _public_4cfe40
#define public_4cfe5d _public_4cfe5d
#define public_4cfe8e _public_4cfe8e
#define public_4cfebd _public_4cfebd
#define public_4cfedf _public_4cfedf
#define public_4cff01 _public_4cff01
#define public_4cff23 _public_4cff23
#define public_4cff45 _public_4cff45
#define public_4cff50 _public_4cff50
#define public_4cff6d _public_4cff6d

PROC_DECLARE(0x4cfdf0, internal_4cfdf0, public_4cfdf0);
extern "C" NAKED register_t __cdecl internal_4cfdf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub eax, 0x26
        push esi
        mov esi, ecx
        je public_4cfe8e
        dec eax
        je public_4cfe2d
        sub eax, 0x17
        jne public_4cfe27
        call public_45a740
        test al, al
        jne public_4cfe27
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+0x3D4]
        jne public_4cfe27
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x3E4], ecx
        public_4cfe27 : nop
        xor eax, eax
        pop esi
        ret 0xC
        public_4cfe2d : nop
        mov edx, dword ptr ss : [esp+0xC]
        xor ecx, ecx
        lea eax, ds:[esi+0x394]
        lea esp, ss:[esp]
        public_4cfe40 : nop
        cmp edx, dword ptr ds : [eax-0x20]
        je public_4cfe5d
        cmp edx, dword ptr ds : [eax]
        je public_4cfe5d
        cmp edx, dword ptr ds : [eax+0x20]
        je public_4cfe5d
        inc ecx
        add eax, 4
        cmp ecx, 8
        jl public_4cfe40
        xor eax, eax
        pop esi
        ret 0xC
        public_4cfe5d : nop
        mov edx, dword ptr ds : [esi+0x3E4]
        add edx, ecx
        push edx
        lea ecx, ds:[esi-0x38]
        call public_4cffa0
        mov ecx, dword ptr ds : [public_674b04]
        push 1
        call public_4e5460
        push 0
        call public_5645c0
        add esp, 4
        mov eax, 1
        pop esi
        ret 0xC
        public_4cfe8e : nop
        call public_45a740
        test al, al
        jne public_4cfe27
        mov edx, dword ptr ss : [esp+0xC]
        cmp edx, dword ptr ds : [esi+0x3EC]
        jne public_4cfebd
        mov dword ptr ds : [esi+0x400], 0
        mov byte ptr ds : [esi+0x404], 1
        mov eax, 1
        pop esi
        ret 0xC
        public_4cfebd : nop
        cmp edx, dword ptr ds : [esi+0x3F0]
        jne public_4cfedf
        mov dword ptr ds : [esi+0x400], 1
        mov byte ptr ds : [esi+0x404], 1
        mov eax, 1
        pop esi
        ret 0xC
        public_4cfedf : nop
        cmp edx, dword ptr ds : [esi+0x3F4]
        jne public_4cff01
        mov dword ptr ds : [esi+0x400], 2
        mov byte ptr ds : [esi+0x404], 1
        mov eax, 1
        pop esi
        ret 0xC
        public_4cff01 : nop
        cmp edx, dword ptr ds : [esi+0x3FC]
        jne public_4cff23
        mov dword ptr ds : [esi+0x400], 4
        mov byte ptr ds : [esi+0x404], 1
        mov eax, 1
        pop esi
        ret 0xC
        public_4cff23 : nop
        cmp edx, dword ptr ds : [esi+0x3F8]
        jne public_4cff45
        mov dword ptr ds : [esi+0x400], 3
        mov byte ptr ds : [esi+0x404], 1
        mov eax, 1
        pop esi
        ret 0xC
        public_4cff45 : nop
        xor ecx, ecx
        lea eax, ds:[esi+0x394]
        lea ecx, ds:[ecx]
        public_4cff50 : nop
        cmp edx, dword ptr ds : [eax-0x20]
        je public_4cff6d
        cmp edx, dword ptr ds : [eax]
        je public_4cff6d
        cmp edx, dword ptr ds : [eax+0x20]
        je public_4cff6d
        inc ecx
        add eax, 4
        cmp ecx, 8
        jl public_4cff50
        xor eax, eax
        pop esi
        ret 0xC
        public_4cff6d : nop
        mov eax, dword ptr ds : [esi+0x3E4]
        add eax, ecx
        push eax
        lea ecx, ds:[esi-0x38]
        call public_4cffa0
        push 0
        call public_5645c0
        add esp, 4
        mov eax, 1
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x4cfdf0)
    }
}

#undef public_4cfe27
#undef public_4cfe2d
#undef public_4cfe40
#undef public_4cfe5d
#undef public_4cfe8e
#undef public_4cfebd
#undef public_4cfedf
#undef public_4cff01
#undef public_4cff23
#undef public_4cff45
#undef public_4cff50
#undef public_4cff6d
