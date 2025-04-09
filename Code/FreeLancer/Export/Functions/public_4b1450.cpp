#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428ba0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4b0920);
CLANG_FORWARD_PROC_SYMBOL(public_4b1450);
CLANG_FORWARD_PROC_SYMBOL(public_4b1d20);
CLANG_FORWARD_PROC_SYMBOL(public_4b1f30);
CLANG_FORWARD_PROC_SYMBOL(public_564650);
CLANG_FORWARD_PROC_SYMBOL(public_5b3510);
CLANG_FORWARD_PROC_SYMBOL(public_5b36b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3770);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4b1476 _public_4b1476
#define public_4b1485 _public_4b1485
#define public_4b14a0 _public_4b14a0
#define public_4b1501 _public_4b1501
#define public_4b1552 _public_4b1552
#define public_4b15a3 _public_4b15a3
#define public_4b15ef _public_4b15ef
#define public_4b1631 _public_4b1631
#define public_4b1643 _public_4b1643
#define public_4b1660 _public_4b1660
#define public_4b16b9 _public_4b16b9
#define public_4b16d6 _public_4b16d6
#define public_4b16f8 _public_4b16f8
#define public_4b1706 _public_4b1706
#define public_4b171a _public_4b171a
#define public_4b172f _public_4b172f
#define public_4b173b _public_4b173b
#define public_4b1742 _public_4b1742
#define public_4b174a _public_4b174a
#define public_4b1767 _public_4b1767
#define public_4b1785 _public_4b1785
#define public_4b17bc _public_4b17bc
#define public_4b17cb _public_4b17cb
#define public_4b17e4 _public_4b17e4
#define public_4b17ea _public_4b17ea
#define public_4b183c _public_4b183c
#define public_4b1843 _public_4b1843
#define public_4b185e _public_4b185e
#define public_4b1869 _public_4b1869
#define public_4b186e _public_4b186e
#define public_4b18a5 _public_4b18a5
#define public_4b18fd _public_4b18fd
#define public_4b191b _public_4b191b
#define public_4b1956 _public_4b1956
#define public_4b1974 _public_4b1974
#define public_4b19c1 _public_4b19c1
#define public_4b19e0 _public_4b19e0
#define public_4b1a5b _public_4b1a5b
#define public_4b1a7d _public_4b1a7d
#define public_4b1ab8 _public_4b1ab8
#define public_4b1ac7 _public_4b1ac7
#define public_4b1acb _public_4b1acb
#define public_4b1ad3 _public_4b1ad3
#define public_4b1ae4 _public_4b1ae4
#define public_4b1b35 _public_4b1b35
#define public_4b1b4d _public_4b1b4d
#define public_4b1b62 _public_4b1b62
#define public_4b1b70 _public_4b1b70

PROC_DECLARE(0x4b1450, internal_4b1450, public_4b1450);
extern "C" NAKED register_t __cdecl internal_4b1450()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x108
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x114]
        push esi
        xor ebx, ebx
        cmp ebp, 0x534
        push edi
        mov edi, ecx
        jne public_4b1476
        lea edx, ss:[esp+0x10]
        push edx
        push 1
        jmp public_4b1485
        public_4b1476 : nop
        cmp ebp, 0x657
        jne public_4b14a0
        lea edx, ss:[esp+0x10]
        push edx
        push 8
        public_4b1485 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov dword ptr ss : [esp+0x18], ebx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        cmp dword ptr ss : [esp+0x10], ebx
        je public_4b1b70
        public_4b14a0 : nop
        push ebp
        call public_5b3770
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_4b1631
        cmp ebp, 0x57F
        je public_4b1631
        fild dword ptr ss : [esp+0x120]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        fmul qword ptr ds : [public_5d5138]
        fst dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x10]
        push ebx
        fstp dword ptr ds : [esi+0x10]
        call dword ptr ds : [eax]
        fld dword ptr ds : [esi+0x14]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_4b1501
        fld dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi]
        fst dword ptr ss : [esp+0x14]
        mov ecx, esi
        mov eax, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+0x14]
        push eax
        call dword ptr ds : [edx+4]
        public_4b1501 : nop
        cmp ebp, 0x538
        jne public_4b1552
        push 0x583
        call public_5b3770
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, eax
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov dword ptr ds : [esi+0x10], ecx
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx]
        fld dword ptr ds : [esi+0x14]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_4b1643
        fld dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi]
        fst dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+0x14]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        jmp public_4b1643
        public_4b1552 : nop
        cmp ebp, 0x539
        jne public_4b15a3
        push 0x584
        call public_5b3770
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        add esp, 4
        push ebx
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], edx
        call dword ptr ds : [eax]
        fld dword ptr ds : [esi+0x14]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_4b1643
        fld dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi]
        fst dword ptr ss : [esp+0x14]
        mov ecx, esi
        mov eax, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+0x14]
        push eax
        call dword ptr ds : [edx+4]
        jmp public_4b1643
        public_4b15a3 : nop
        cmp ebp, 0x57C
        jne public_4b1631
        push 0x57D
        call public_5b3770
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, eax
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov dword ptr ds : [esi+0x10], ecx
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx]
        fld dword ptr ds : [esi+0x14]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_4b15ef
        fld dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi]
        fst dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+0x14]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+4]
        public_4b15ef : nop
        push 0x5CA
        call public_5b3770
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        add esp, 4
        push ebx
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], edx
        call dword ptr ds : [eax]
        fld dword ptr ds : [esi+0x14]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_4b1643
        fld dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi]
        fst dword ptr ss : [esp+0x14]
        mov ecx, esi
        mov eax, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+0x14]
        push eax
        call dword ptr ds : [edx+4]
        jmp public_4b1643
        public_4b1631 : nop
        cmp ebp, 0x581
        jg public_4b191b
        je public_4b18fd
        public_4b1643 : nop
        lea eax, ss:[ebp-0x534]
        cmp eax, 0x4B
        ja public_4b1b62
/*FIXUP movzx ecx, byte ptr ds : [eax+public_4b1b98] @0x4b1652*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_4b1b80] @0x4b1659*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_4b18a5
  JMPTB cmp eax, 1
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 2
  JMPTB mov ecx, 1
  JMPTB je public_4b17cb
  JMPTB cmp eax, 3
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 4
  JMPTB mov ecx, 2
  JMPTB je public_4b1767
  JMPTB cmp eax, 5
  JMPTB mov ecx, 3
  JMPTB je public_4b1785
  JMPTB cmp eax, 6
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 7
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 8
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 9
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x3A
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x3B
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x3C
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x3D
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x3E
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x3F
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x40
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x41
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x42
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x43
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x44
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x45
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x46
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x47
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x48
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x49
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x4A
  JMPTB mov ecx, 5
  JMPTB je public_4b1b62
  JMPTB cmp eax, 0x4B
  JMPTB mov ecx, 4
  JMPTB je public_4b1660
  JMPTB int 3
        public_4b1660 : nop
        fild dword ptr ss : [esp+0x120]
        push 6
        fmul qword ptr ds : [public_5c75e8]
        fstp dword ptr ss : [esp+0x14]
        call public_5b3510
        fcomp dword ptr ss : [esp+0x14]
        add esp, 4
        fnstsw ax
        test ah, 0x44
        jnp public_4b16d6
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        mov ebx, edx
        push ebx
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], edx
        call dword ptr ds : [eax]
        fld dword ptr ds : [esi+0x14]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_4b16b9
        fld dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi]
        fst dword ptr ss : [esp+0x14]
        mov ecx, esi
        mov eax, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+0x14]
        push eax
        call dword ptr ds : [edx+4]
        public_4b16b9 : nop
        mov ecx, dword ptr ds : [public_67ecd0]
        test ecx, ecx
        je public_4b16d6
        mov eax, dword ptr ds : [public_673344]
        test eax, eax
        je public_4b16d6
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebx
        call dword ptr ds : [edx+0x15C]
        public_4b16d6 : nop
        mov esi, dword ptr ss : [esp+0x124]
        test esi, esi
        jl public_4b1b62
        mov eax, dword ptr ss : [esp+0x120]
        cmp eax, 3
        ja public_4b174a
/*FIXUP jmp dword ptr ds : [eax*4+public_4b1be4] @0x4b16f1*/
  JMPTB cmp eax, 0
  JMPTB je public_4b16f8
  JMPTB cmp eax, 1
  JMPTB je public_4b1706
  JMPTB cmp eax, 2
  JMPTB je public_4b171a
  JMPTB cmp eax, 3
  JMPTB je public_4b172f
  JMPTB int 3
        public_4b16f8 : nop
        push 0x40
        lea eax, ss:[esp+0x1C]
        push eax
        push 0x702
        jmp public_4b173b
        public_4b1706 : nop
        mov eax, dword ptr ds : [public_67eca8]
        push 0x40
        lea edx, ss:[esp+0x1C]
        push edx
        push 0x703
        push eax
        jmp public_4b1742
        public_4b171a : nop
        mov edx, dword ptr ds : [public_67eca8]
        push 0x40
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 0x704
        push edx
        jmp public_4b1742
        public_4b172f : nop
        push 0x40
        lea eax, ss:[esp+0x1C]
        push eax
        push 0x705
        public_4b173b : nop
        mov ecx, dword ptr ds : [public_67eca8]
        push ecx
        public_4b1742 : nop
        call public_4347e0
        add esp, 0x10
        public_4b174a : nop
        mov ecx, dword ptr ds : [edi+esi*4+0x6FC]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x1C]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        jmp public_4b1b62
        public_4b1767 : nop
        mov eax, dword ptr ss : [esp+0x124]
        test eax, eax
        jl public_4b1b62
        push 0x1F
        call public_564650
        add esp, 4
        jmp public_4b1b62
        public_4b1785 : nop
        mov eax, dword ptr ss : [esp+0x124]
        test eax, eax
        jl public_4b1b62
        lea ecx, ss:[esp+0x10]
        push ecx
        mov dword ptr ss : [esp+0x14], 0
        call public_428ba0
        add esp, 4
        test al, al
        jne public_4b17bc
        push 0x20
        call public_564650
        add esp, 4
        jmp public_4b1b62
        public_4b17bc : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_4b1b62
        public_4b17cb : nop
        mov esi, dword ptr ss : [esp+0x120]
        test esi, esi
        jl public_4b1b70
        xor ecx, ecx
        xor eax, eax
        lea edx, ds:[edi+0x954]
        public_4b17e4 : nop
        cmp dword ptr ds : [edx], esi
        jne public_4b17ea
        mov ecx, eax
        public_4b17ea : nop
        inc eax
        add edx, 4
        cmp eax, 0xA
        jl public_4b17e4
        mov ebx, dword ptr ds : [public_5c70ec]
        lea eax, ds:[ecx+ecx*2]
        lea ecx, ds:[edi+eax*4+0x8CC]
        mov edx, ecx
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov esi, dword ptr ds : [edx+8]
        push ecx
        push eax
        mov dword ptr ds : [edi+0x330], eax
        lea eax, ss:[esp+0x20]
/*FIXUP push offset public_5d5190 @0x4b1819*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5190
        push eax
        call ebx
        mov al, byte ptr ds : [edi+0x97C]
        add esp, 0x10
        test al, al
        je public_4b186e
        cmp esi, 0x20
        jne public_4b183c
        mov byte ptr ds : [edi+0x334], 1
        jmp public_4b1843
        public_4b183c : nop
        mov byte ptr ds : [edi+0x334], 0
        public_4b1843 : nop
        mov al, byte ptr ds : [edi+0x334]
        test al, al
        lea ecx, ss:[esp+0x18]
        je public_4b185e
        push ecx
/*FIXUP push offset public_5d5180 @0x4b1852*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5180
        lea edx, ss:[esp+0x20]
        push edx
        jmp public_4b1869
        public_4b185e : nop
        lea eax, ss:[esp+0x18]
        push eax
/*FIXUP push offset public_5d5170 @0x4b1863*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5170
        push ecx
        public_4b1869 : nop
        call ebx
        add esp, 0xC
        public_4b186e : nop
        mov eax, dword ptr ss : [esp+0x124]
        test eax, eax
        jl public_4b1b62
        mov ecx, dword ptr ds : [edi+0x570]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x1C]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        push 0x57E
        mov ecx, edi
        call public_4b0920
        jmp public_4b1b62
        public_4b18a5 : nop
        fild dword ptr ss : [esp+0x120]
        sub esp, 8
        lea ecx, ss:[esp+0xA0]
        fmul dword ptr ds : [public_5c99c8]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_5d5164 @0x4b18bf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d5164
        push ecx
        call dword ptr ds : [public_5c70ec]
        mov eax, dword ptr ss : [esp+0x134]
        add esp, 0x10
        test eax, eax
        jl public_4b1b62
        mov ecx, dword ptr ds : [edi+eax*4+0x6FC]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x9C]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        jmp public_4b1b62
        public_4b18fd : nop
        mov eax, dword ptr ss : [esp+0x124]
        test eax, eax
        jl public_4b1b62
        push 0x1E
        call public_564650
        add esp, 4
        jmp public_4b1b62
        public_4b191b : nop
        cmp ebp, 0x687
        jg public_4b19c1
        je public_4b1974
        sub ebp, 0x583
        je public_4b1956
        dec ebp
        jne public_4b1b62
        mov eax, dword ptr ss : [esp+0x124]
        test eax, eax
        jl public_4b1b62
        push 0x22
        call public_564650
        add esp, 4
        jmp public_4b1b62
        public_4b1956 : nop
        mov eax, dword ptr ss : [esp+0x124]
        test eax, eax
        jl public_4b1b62
        push 0x21
        call public_564650
        add esp, 4
        jmp public_4b1b62
        public_4b1974 : nop
        mov ecx, dword ptr ss : [esp+0x120]
        push ecx
        lea edx, ss:[esp+0xDC]
/*FIXUP push offset public_5d0ec4 @0x4b1983*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0ec4
        push edx
        call dword ptr ds : [public_5c70ec]
        mov eax, dword ptr ss : [esp+0x130]
        add esp, 0xC
        test eax, eax
        jl public_4b1b62
        mov ecx, dword ptr ds : [edi+eax*4+0x6FC]
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ss:[esp+0xDC]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        jmp public_4b1b62
        public_4b19c1 : nop
        cmp ebp, 0x767
        jne public_4b1b62
        mov ebx, dword ptr ss : [esp+0x120]
        xor ebp, ebp
        mov dword ptr ss : [esp+0x10], ebp
        lea ebx, ds:[ebx]
        public_4b19e0 : nop
        mov eax, dword ptr ds : [edi+0x548]
        test eax, eax
        je public_4b1ae4
        mov ecx, dword ptr ds : [edi+0x54C]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp ebp, edx
        jae public_4b1ae4
        mov ecx, dword ptr ds : [edi+0x548]
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[ecx+edx]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, 0xFFFFFFFF
        je public_4b1ad3
        mov esi, dword ptr ds : [eax]
        cmp esi, 0x767
        je public_4b1ad3
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        je public_4b1ab8
        cmp ebx, ecx
        push 0xFFFFFFFF
        jg public_4b1a5b
        push 0
        push esi
        mov ecx, edi
        call public_4b1450
        mov eax, dword ptr ss : [esp+0x10]
        inc ebp
        add eax, 0x18
        mov dword ptr ss : [esp+0x10], eax
        jmp public_4b19e0
        public_4b1a5b : nop
        mov eax, dword ptr ds : [eax+0x10]
        cmp ebx, eax
        jl public_4b1a7d
        push 0x64
        push esi
        mov ecx, edi
        call public_4b1450
        mov eax, dword ptr ss : [esp+0x10]
        inc ebp
        add eax, 0x18
        mov dword ptr ss : [esp+0x10], eax
        jmp public_4b19e0
        public_4b1a7d : nop
        sub eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        mov eax, ebx
        sub eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        fdivr qword ptr ds : [public_5ca320]
        fimul dword ptr ss : [esp+0x18]
        call public_5b7ec0
        push eax
        push esi
        mov ecx, edi
        call public_4b1450
        mov eax, dword ptr ss : [esp+0x10]
        inc ebp
        add eax, 0x18
        mov dword ptr ss : [esp+0x10], eax
        jmp public_4b19e0
        public_4b1ab8 : nop
        cmp ebx, ecx
        jl public_4b1ac7
        cmp ebx, dword ptr ds : [eax+0x10]
        jg public_4b1ac7
        push 0xFFFFFFFF
        push 1
        jmp public_4b1acb
        public_4b1ac7 : nop
        push 0xFFFFFFFF
        push 0
        public_4b1acb : nop
        mov ecx, edi
        push esi
        call public_4b1d20
        public_4b1ad3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc ebp
        add eax, 0x18
        mov dword ptr ss : [esp+0x10], eax
        jmp public_4b19e0
/*FIXUP public_4b1ae4 : nop
        push offset public_5d4a00 @0x4b1ae4*/
  FIXUP public_4b1ae4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4a00
        call public_5b36b0
        fild dword ptr ss : [esp+0x124]
        mov esi, eax
        mov edx, dword ptr ds : [esi]
        fmul qword ptr ds : [public_5d5138]
        add esp, 4
        mov ecx, esi
        fst dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+0x10]
        push eax
        call dword ptr ds : [edx]
        fld dword ptr ds : [esi+0x14]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_4b1b35
        fld dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi]
        fst dword ptr ss : [esp+0x14]
        mov ecx, esi
        mov eax, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+0x14]
        push eax
        call dword ptr ds : [edx+4]
        public_4b1b35 : nop
        mov al, byte ptr ds : [edi+0x32E]
        test al, al
        mov ecx, edi
        je public_4b1b4d
        push 0x767
        call public_4b0920
        jmp public_4b1b62
        public_4b1b4d : nop
        push 0xFFFFFFFF
        mov byte ptr ds : [edi+0x8C8], 1
        call public_4b0920
        mov byte ptr ds : [edi+0x8C8], 0
        public_4b1b62 : nop
        push 0xBF800000
        push 0xFFFFFFFF
        mov ecx, edi
        call public_4b1f30
        public_4b1b70 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x108
        ret 0xC
        UNREACHABLE_TRAP(0x4b1450)
        ASM_EXPORT_ENTRY_FIRST(0x4b172f, public_4b172f)
        ASM_EXPORT_ENTRY_LAST(0x4b1b62, public_4b1b62)
    }
}

#undef public_4b1476
#undef public_4b1485
#undef public_4b14a0
#undef public_4b1501
#undef public_4b1552
#undef public_4b15a3
#undef public_4b15ef
#undef public_4b1631
#undef public_4b1643
#undef public_4b1660
#undef public_4b16b9
#undef public_4b16d6
#undef public_4b16f8
#undef public_4b1706
#undef public_4b171a
#undef public_4b172f
#undef public_4b173b
#undef public_4b1742
#undef public_4b174a
#undef public_4b1767
#undef public_4b1785
#undef public_4b17bc
#undef public_4b17cb
#undef public_4b17e4
#undef public_4b17ea
#undef public_4b183c
#undef public_4b1843
#undef public_4b185e
#undef public_4b1869
#undef public_4b186e
#undef public_4b18a5
#undef public_4b18fd
#undef public_4b191b
#undef public_4b1956
#undef public_4b1974
#undef public_4b19c1
#undef public_4b19e0
#undef public_4b1a5b
#undef public_4b1a7d
#undef public_4b1ab8
#undef public_4b1ac7
#undef public_4b1acb
#undef public_4b1ad3
#undef public_4b1ae4
#undef public_4b1b35
#undef public_4b1b4d
#undef public_4b1b62
#undef public_4b1b70

#pragma init_seg(compiler)
extern "C" void const* const public_4b172f = __AsmFindLabelExport(&internal_4b1450, 0x4b172f);
extern "C" void const* const public_4b1b62 = __AsmFindLabelExport(&internal_4b1450, 0x4b1b62);
