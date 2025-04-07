#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_516c30);
CLANG_FORWARD_PROC_SYMBOL(public_527b80);
CLANG_FORWARD_PROC_SYMBOL(public_52d570);
CLANG_FORWARD_PROC_SYMBOL(public_52d6e0);
CLANG_FORWARD_PROC_SYMBOL(public_52d880);
CLANG_FORWARD_PROC_SYMBOL(public_52e200);
CLANG_FORWARD_PROC_SYMBOL(public_52eb10);
CLANG_FORWARD_PROC_SYMBOL(public_52ec40);
CLANG_FORWARD_PROC_SYMBOL(public_52f540);
CLANG_FORWARD_PROC_SYMBOL(public_531b40);
CLANG_FORWARD_PROC_SYMBOL(public_531e80);
CLANG_FORWARD_PROC_SYMBOL(public_532210);
CLANG_FORWARD_PROC_SYMBOL(public_532530);
CLANG_FORWARD_PROC_SYMBOL(public_532800);
CLANG_FORWARD_PROC_SYMBOL(public_533160);
CLANG_FORWARD_PROC_SYMBOL(public_5947a0);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c08da);

#define public_53319f _public_53319f
#define public_5331a1 _public_5331a1
#define public_53320f _public_53320f
#define public_533211 _public_533211
#define public_53323e _public_53323e
#define public_533263 _public_533263
#define public_533265 _public_533265
#define public_533292 _public_533292
#define public_5332b7 _public_5332b7
#define public_5332b9 _public_5332b9
#define public_5332e6 _public_5332e6
#define public_53330b _public_53330b
#define public_53330d _public_53330d
#define public_53333a _public_53333a
#define public_53337c _public_53337c
#define public_53337e _public_53337e
#define public_5333ab _public_5333ab
#define public_5333db _public_5333db
#define public_5333ea _public_5333ea
#define public_53340f _public_53340f
#define public_533411 _public_533411
#define public_533447 _public_533447
#define public_53346c _public_53346c
#define public_53346e _public_53346e
#define public_53349b _public_53349b
#define public_5334ee _public_5334ee
#define public_5334f0 _public_5334f0
#define public_53351d _public_53351d
#define public_533542 _public_533542
#define public_533544 _public_533544
#define public_53356e _public_53356e
#define public_533593 _public_533593
#define public_533595 _public_533595
#define public_5335bd _public_5335bd
#define public_5335c6 _public_5335c6
#define public_5335ec _public_5335ec
#define public_533611 _public_533611
#define public_533613 _public_533613
#define public_533632 _public_533632
#define public_533669 _public_533669
#define public_53366b _public_53366b
#define public_5336a1 _public_5336a1
#define public_5336c6 _public_5336c6
#define public_5336c8 _public_5336c8
#define public_5336d0 _public_5336d0
#define public_5336e2 _public_5336e2
#define public_5336f0 _public_5336f0

PROC_DECLARE(0x533160, internal_533160, public_533160);
extern "C" NAKED register_t __cdecl internal_533160()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c08da @0x533168*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c08da
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x3C
        push esi
        mov esi, ecx
        test esi, esi
        push edi
        je public_53319f
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_53319f
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_53319f
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_5331a1
        public_53319f : nop
        xor eax, eax
        public_5331a1 : nop
        mov edx, dword ptr ss : [esp+0x54]
        push edx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c6574]
        mov edi, eax
        mov eax, dword ptr ds : [edi+0x14]
        cmp eax, 0x400
        ja public_53349b
        je public_533447
        cmp eax, 0x40
        ja public_53333a
        je public_5332e6
        dec eax
        je public_533292
        dec eax
        je public_53323e
        sub eax, 0x1E
        jne public_5336f0
        push 0x40
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x3C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 3
        je public_53320f
        push esi
        push edi
        mov ecx, eax
        call public_52d570
        jmp public_533211
        public_53320f : nop
        xor eax, eax
        public_533211 : nop
        mov edi, dword ptr ds : [esi+0xB8]
        add esi, 0xB4
        mov dword ptr ss : [esp+0x54], eax
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_42a7e0
        lea edx, ss:[esp+0x54]
        jmp public_5335bd
        public_53323e : nop
        push 0x20
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x3C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 9
        je public_533263
        push esi
        push edi
        mov ecx, eax
        call public_532210
        jmp public_533265
        public_533263 : nop
        xor eax, eax
        public_533265 : nop
        mov edi, dword ptr ds : [esi+0xB8]
        add esi, 0xB4
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_42a7e0
        lea edx, ss:[esp+8]
        jmp public_5335bd
        public_533292 : nop
        push 0x20
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x3C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 1
        je public_5332b7
        push esi
        push edi
        mov ecx, eax
        call public_531b40
        jmp public_5332b9
        public_5332b7 : nop
        xor eax, eax
        public_5332b9 : nop
        mov edi, dword ptr ds : [esi+0xB8]
        add esi, 0xB4
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_42a7e0
        lea edx, ss:[esp+0xC]
        jmp public_5335bd
        public_5332e6 : nop
        push 0x40
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x3C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 4
        je public_53330b
        push esi
        push edi
        mov ecx, eax
        call public_52d6e0
        jmp public_53330d
        public_53330b : nop
        xor eax, eax
        public_53330d : nop
        mov edi, dword ptr ds : [esi+0xB8]
        add esi, 0xB4
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_42a7e0
        lea edx, ss:[esp+0x10]
        jmp public_5335bd
        public_53333a : nop
        cmp eax, 0x80
        je public_5333ea
        cmp eax, 0x100
        je public_5333ab
        cmp eax, 0x200
        jne public_5336f0
        push 0x10
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x3C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 8
        je public_53337c
        push esi
        push edi
        mov ecx, eax
        call public_52eb10
        jmp public_53337e
        public_53337c : nop
        xor eax, eax
        public_53337e : nop
        mov edi, dword ptr ds : [esi+0xB8]
        add esi, 0xB4
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_42a7e0
        lea edx, ss:[esp+0x14]
        jmp public_5335bd
        public_5333ab : nop
        push 0x18
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x3C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 7
        je public_5333db
        push esi
        push edi
        mov ecx, eax
        call public_52e200
        mov dword ptr ss : [esp+0x18], eax
        lea edx, ss:[esp+0x18]
        jmp public_5336d0
        public_5333db : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x18], eax
        lea edx, ss:[esp+0x18]
        jmp public_5336d0
        public_5333ea : nop
        push 0x44
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x3C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 2
        je public_53340f
        push esi
        push edi
        mov ecx, eax
        call public_52d880
        jmp public_533411
        public_53340f : nop
        xor eax, eax
        public_533411 : nop
        mov edi, dword ptr ds : [esi+0xB8]
        add esi, 0xB4
        mov dword ptr ss : [esp+0x1C], eax
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ds : [edx], eax
        push ecx
        jmp public_5335c6
        public_533447 : nop
        push 0x20
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x3C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 6
        je public_53346c
        push esi
        push edi
        mov ecx, eax
        call public_52ec40
        jmp public_53346e
        public_53346c : nop
        xor eax, eax
        public_53346e : nop
        mov edi, dword ptr ds : [esi+0xB8]
        add esi, 0xB4
        mov dword ptr ss : [esp+0x20], eax
        mov edx, dword ptr ds : [edi+4]
        push edx
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_42a7e0
        lea edx, ss:[esp+0x20]
        jmp public_5335bd
        public_53349b : nop
        cmp eax, 0x200000
        ja public_533632
        je public_5335ec
        cmp eax, 0x1000
        je public_53356e
        cmp eax, 0x20000
        je public_53351d
        cmp eax, 0x100000
        jne public_5336f0
        push 0x38
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x3C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 5
        je public_5334ee
        push esi
        push edi
        mov ecx, eax
        call public_52f540
        jmp public_5334f0
        public_5334ee : nop
        xor eax, eax
        public_5334f0 : nop
        mov edi, dword ptr ds : [esi+0xB8]
        add esi, 0xB4
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_42a7e0
        lea edx, ss:[esp+0x24]
        jmp public_5335bd
        public_53351d : nop
        push 0x60
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x3C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 0
        je public_533542
        push esi
        push edi
        mov ecx, eax
        call public_527b80
        jmp public_533544
        public_533542 : nop
        xor eax, eax
        public_533544 : nop
        mov edi, dword ptr ds : [esi+0xB8]
        add esi, 0xB4
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_42a7e0
        lea edx, ss:[esp+0x28]
        jmp public_5335bd
        public_53356e : nop
        push 0x10
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x3C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 0xC
        je public_533593
        push esi
        push edi
        mov ecx, eax
        call public_531e80
        jmp public_533595
        public_533593 : nop
        xor eax, eax
        public_533595 : nop
        mov edi, dword ptr ds : [esi+0xB8]
        add esi, 0xB4
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_42a7e0
        lea edx, ss:[esp+0x2C]
        public_5335bd : nop
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        push edx
        public_5335c6 : nop
        add eax, 8
        push eax
        call public_5999b0
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        inc eax
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 4
        public_5335ec : nop
        push 0x20
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x3C], eax
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 0xD
        je public_533611
        push esi
        push edi
        mov ecx, eax
        call public_532800
        jmp public_533613
        public_533611 : nop
        xor eax, eax
        public_533613 : nop
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [esi+0xB8]
        lea ecx, ds:[esi+0xB4]
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        lea eax, ss:[esp+0x48]
        jmp public_5336e2
        public_533632 : nop
        cmp eax, 0x400000
        je public_5336a1
        cmp eax, 0x800000
        jne public_5336f0
        push 0x34
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x40], eax
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 0xB
        je public_533669
        push esi
        push edi
        mov ecx, eax
        call public_516c30
        jmp public_53366b
        public_533669 : nop
        xor eax, eax
        public_53366b : nop
        mov edi, dword ptr ds : [esi+0xB8]
        add esi, 0xB4
        mov dword ptr ss : [esp+0x34], eax
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x34]
        mov dword ptr ds : [edx], eax
        push ecx
        jmp public_5335c6
        public_5336a1 : nop
        push 0x14
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x40], eax
        test eax, eax
        mov dword ptr ss : [esp+0x4C], 0xA
        je public_5336c6
        push esi
        push edi
        mov ecx, eax
        call public_532530
        jmp public_5336c8
        public_5336c6 : nop
        xor eax, eax
        public_5336c8 : nop
        mov dword ptr ss : [esp+0x38], eax
        lea edx, ss:[esp+0x38]
        public_5336d0 : nop
        mov eax, dword ptr ds : [esi+0xB8]
        lea ecx, ds:[esi+0xB4]
        push edx
        push eax
        lea eax, ss:[esp+0x44]
        public_5336e2 : nop
        push eax
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        call public_5947a0
        public_5336f0 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x48
        ret 4
        UNREACHABLE_TRAP(0x533160)
    }
}

#undef public_53319f
#undef public_5331a1
#undef public_53320f
#undef public_533211
#undef public_53323e
#undef public_533263
#undef public_533265
#undef public_533292
#undef public_5332b7
#undef public_5332b9
#undef public_5332e6
#undef public_53330b
#undef public_53330d
#undef public_53333a
#undef public_53337c
#undef public_53337e
#undef public_5333ab
#undef public_5333db
#undef public_5333ea
#undef public_53340f
#undef public_533411
#undef public_533447
#undef public_53346c
#undef public_53346e
#undef public_53349b
#undef public_5334ee
#undef public_5334f0
#undef public_53351d
#undef public_533542
#undef public_533544
#undef public_53356e
#undef public_533593
#undef public_533595
#undef public_5335bd
#undef public_5335c6
#undef public_5335ec
#undef public_533611
#undef public_533613
#undef public_533632
#undef public_533669
#undef public_53366b
#undef public_5336a1
#undef public_5336c6
#undef public_5336c8
#undef public_5336d0
#undef public_5336e2
#undef public_5336f0
