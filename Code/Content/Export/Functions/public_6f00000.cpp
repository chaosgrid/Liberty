#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2700);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2730);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f0002a _public_6f0002a
#define public_6f00066 _public_6f00066
#define public_6f0006b _public_6f0006b
#define public_6f00073 _public_6f00073
#define public_6f00078 _public_6f00078
#define public_6f00084 _public_6f00084
#define public_6f000a3 _public_6f000a3
#define public_6f000b7 _public_6f000b7
#define public_6f0011e _public_6f0011e
#define public_6f0013a _public_6f0013a
#define public_6f00180 _public_6f00180
#define public_6f001a2 _public_6f001a2
#define public_6f001b7 _public_6f001b7
#define public_6f001cc _public_6f001cc
#define public_6f001d5 _public_6f001d5
#define public_6f001e9 _public_6f001e9

PROC_DECLARE(0x6f00000, internal_6f00000, public_6f00000);
extern "C" NAKED register_t __cdecl internal_6f00000()
{
    __asm
    {
        sub esp, 0x14
        push esi
        push edi
        mov esi, ecx
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ds:[esi+0x14]
        push edx
        call dword ptr ds : [public_6fb3468]
        add esp, 0xC
        test eax, eax
        je public_6f0002a
        mov dword ptr ss : [esp+8], 0
        public_6f0002a : nop
        mov eax, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+0x10]
        add esi, 4
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 3
        cmp ecx, 1
        fstp dword ptr ss : [esp+0x18]
        mov edi, eax
        jae public_6f0013a
        mov edx, dword ptr ds : [esi+4]
        test edx, edx
        je public_6f00066
        mov ecx, eax
        sub ecx, edx
        sar ecx, 3
        cmp ecx, 1
        ja public_6f0006b
        public_6f00066 : nop
        mov ecx, 1
        public_6f0006b : nop
        test edx, edx
        jne public_6f00073
        xor eax, eax
        jmp public_6f00078
        public_6f00073 : nop
        sub eax, edx
        sar eax, 3
        public_6f00078 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_6f00084
        xor eax, eax
        public_6f00084 : nop
        push ebx
        lea edx, ds:[eax*8]
        push ebp
        push edx
        call public_6fa912a
        mov ebp, dword ptr ds : [esi+4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        je public_6f000b7
        public_6f000a3 : nop
        push ebp
        push ebx
        call public_6f305b0
        add ebp, 8
        add esp, 8
        add ebx, 8
        cmp ebp, edi
        jne public_6f000a3
        public_6f000b7 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        push 1
        push ebx
        mov ecx, esi
        call public_6ed2730
        mov ecx, dword ptr ds : [esi+8]
        add ebx, 8
        push ebx
        push ecx
        push edi
        mov ecx, esi
        call public_6ed2700
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_6ea1490
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        add esp, 4
        lea ecx, ds:[edx+eax*8]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        pop ebp
        mov dword ptr ds : [esi+0xC], ecx
        pop ebx
        jne public_6f0011e
        xor ecx, ecx
        lea eax, ds:[edx+ecx*8+8]
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov al, 1
        pop esi
        add esp, 0x14
        ret 4
        public_6f0011e : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        sar ecx, 3
        lea eax, ds:[edx+ecx*8+8]
        mov dword ptr ds : [esi+8], eax
        pop edi
        mov dword ptr ds : [esi+4], edx
        mov al, 1
        pop esi
        add esp, 0x14
        ret 4
        public_6f0013a : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 3
        cmp ecx, 1
        mov ecx, esi
        jae public_6f001a2
        lea edx, ds:[edi+8]
        push edx
        push eax
        push edi
        call public_6ed2700
        mov eax, dword ptr ds : [esi+8]
        mov edx, eax
        lea ecx, ss:[esp+0x14]
        push ecx
        sub edx, edi
        sar edx, 3
        mov ecx, 1
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        call public_6ed2730
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        je public_6f001e9
        lea esp, ss:[esp]
        public_6f00180 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi], edx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi+4], ecx
        add edi, 8
        cmp edi, eax
        jne public_6f00180
        add dword ptr ds : [esi+8], 8
        pop edi
        mov al, 1
        pop esi
        add esp, 0x14
        ret 4
        public_6f001a2 : nop
        push eax
        push eax
        add eax, 0xFFFFFFF8
        push eax
        call public_6ed2700
        mov ecx, dword ptr ds : [esi+8]
        lea eax, ds:[ecx-8]
        cmp edi, eax
        je public_6f001cc
        public_6f001b7 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_6f001b7
        public_6f001cc : nop
        lea ecx, ds:[edi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6f001e9
        public_6f001d5 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edx
        add eax, 8
        cmp eax, ecx
        jne public_6f001d5
        public_6f001e9 : nop
        add dword ptr ds : [esi+8], 8
        pop edi
        mov al, 1
        pop esi
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6f00000)
    }
}

#undef public_6f0002a
#undef public_6f00066
#undef public_6f0006b
#undef public_6f00073
#undef public_6f00078
#undef public_6f00084
#undef public_6f000a3
#undef public_6f000b7
#undef public_6f0011e
#undef public_6f0013a
#undef public_6f00180
#undef public_6f001a2
#undef public_6f001b7
#undef public_6f001cc
#undef public_6f001d5
#undef public_6f001e9
