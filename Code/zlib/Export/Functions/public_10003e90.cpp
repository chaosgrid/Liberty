#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10003490);
CLANG_FORWARD_PROC_SYMBOL(public_100036e0);
CLANG_FORWARD_PROC_SYMBOL(public_10003bd0);
CLANG_FORWARD_PROC_SYMBOL(public_10003e90);
CLANG_FORWARD_PROC_SYMBOL(public_1000a458);
CLANG_FORWARD_PROC_SYMBOL(public_1000a46a);

#define public_10003ed2 _public_10003ed2
#define public_10003efc _public_10003efc
#define public_10003f00 _public_10003f00
#define public_10003f0b _public_10003f0b
#define public_10003f24 _public_10003f24
#define public_10003f2d _public_10003f2d
#define public_10003f39 _public_10003f39
#define public_10003f75 _public_10003f75
#define public_10003f80 _public_10003f80
#define public_10003f8a _public_10003f8a
#define public_10003fa5 _public_10003fa5
#define public_10003fb0 _public_10003fb0
#define public_10003fbb _public_10003fbb
#define public_10003fd0 _public_10003fd0
#define public_10003fd9 _public_10003fd9

PROC_DECLARE(0x10003e90, internal_10003e90, public_10003e90);
extern "C" NAKED register_t __cdecl internal_10003e90()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        push edi
        je public_10003fd9
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, 2
        je public_10003fd9
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, 0xFFFFFFFF
        je public_10003fd9
        cmp eax, 0xFFFFFFFD
        je public_10003fd9
        cmp byte ptr ds : [esi+0x5C], 0x77
        jne public_10003f2d
        test ecx, ecx
        mov ebx, dword ptr ss : [esp+0x14]
        jne public_10003ed2
        sub ebx, dword ptr ds : [esi+8]
        public_10003ed2 : nop
        test ebx, ebx
        jl public_10003fd9
        mov eax, dword ptr ds : [esi+0x44]
        test eax, eax
        jne public_10003efc
        push 0x4000
        call public_1000a46a
        mov edi, eax
        add esp, 4
        mov ecx, 0x1000
        xor eax, eax
        mov dword ptr ds : [esi+0x44], edi
        rep stosd
        public_10003efc : nop
        test ebx, ebx
        jle public_10003f24
        public_10003f00 : nop
        mov eax, 0x4000
        cmp ebx, eax
        jge public_10003f0b
        mov eax, ebx
        public_10003f0b : nop
        push eax
        mov eax, dword ptr ds : [esi+0x44]
        push eax
        push esi
        call public_10003490
        test eax, eax
        je public_10003fd9
        sub ebx, eax
        test ebx, ebx
        jg public_10003f00
        public_10003f24 : nop
        mov eax, dword ptr ds : [esi+8]
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_10003f2d : nop
        cmp ecx, 1
        mov edi, dword ptr ss : [esp+0x14]
        jne public_10003f39
        add edi, dword ptr ds : [esi+0x14]
        public_10003f39 : nop
        test edi, edi
        jl public_10003fd9
        mov eax, dword ptr ds : [esi+0x58]
        test eax, eax
        je public_10003f75
        mov edx, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [esi+0x44]
        push 0
        push edi
        push edx
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], ecx
        call public_1000a458
        add esp, 0xC
        test eax, eax
        jl public_10003fd9
        mov dword ptr ds : [esi+0x14], edi
        mov dword ptr ds : [esi+8], edi
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_10003f75 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp edi, eax
        jb public_10003f80
        sub edi, eax
        jmp public_10003f8a
        public_10003f80 : nop
        push esi
        call public_100036e0
        test eax, eax
        jl public_10003fd9
        public_10003f8a : nop
        test edi, edi
        je public_10003fd0
        mov eax, dword ptr ds : [esi+0x48]
        test eax, eax
        jne public_10003fa5
        push 0x4000
        call public_1000a46a
        add esp, 4
        mov dword ptr ds : [esi+0x48], eax
        public_10003fa5 : nop
        test edi, edi
        jle public_10003fd0
        lea esp, ss:[esp]
        public_10003fb0 : nop
        mov eax, 0x4000
        cmp edi, eax
        jge public_10003fbb
        mov eax, edi
        public_10003fbb : nop
        push eax
        mov eax, dword ptr ds : [esi+0x48]
        push eax
        push esi
        call public_10003bd0
        test eax, eax
        jle public_10003fd9
        sub edi, eax
        test edi, edi
        jg public_10003fb0
        public_10003fd0 : nop
        mov eax, dword ptr ds : [esi+0x14]
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_10003fd9 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x10003e90)
    }
}

#undef public_10003ed2
#undef public_10003efc
#undef public_10003f00
#undef public_10003f0b
#undef public_10003f24
#undef public_10003f2d
#undef public_10003f39
#undef public_10003f75
#undef public_10003f80
#undef public_10003f8a
#undef public_10003fa5
#undef public_10003fb0
#undef public_10003fbb
#undef public_10003fd0
#undef public_10003fd9
