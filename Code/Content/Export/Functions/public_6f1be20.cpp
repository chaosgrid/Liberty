#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed01c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15940);
CLANG_FORWARD_PROC_SYMBOL(public_6f159f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1a610);
CLANG_FORWARD_PROC_SYMBOL(public_6f1be20);
CLANG_FORWARD_PROC_SYMBOL(public_6f1c530);
CLANG_FORWARD_PROC_SYMBOL(public_6f1c7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f478b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f481e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);

#define public_6f1be61 _public_6f1be61
#define public_6f1beba _public_6f1beba
#define public_6f1bf25 _public_6f1bf25
#define public_6f1bf64 _public_6f1bf64
#define public_6f1bfff _public_6f1bfff
#define public_6f1c068 _public_6f1c068
#define public_6f1c0d3 _public_6f1c0d3
#define public_6f1c104 _public_6f1c104
#define public_6f1c10b _public_6f1c10b
#define public_6f1c120 _public_6f1c120
#define public_6f1c128 _public_6f1c128
#define public_6f1c15d _public_6f1c15d
#define public_6f1c1c3 _public_6f1c1c3
#define public_6f1c220 _public_6f1c220
#define public_6f1c241 _public_6f1c241
#define public_6f1c244 _public_6f1c244
#define public_6f1c25b _public_6f1c25b
#define public_6f1c25e _public_6f1c25e
#define public_6f1c29f _public_6f1c29f
#define public_6f1c2a8 _public_6f1c2a8
#define public_6f1c2d0 _public_6f1c2d0
#define public_6f1c30a _public_6f1c30a
#define public_6f1c31d _public_6f1c31d
#define public_6f1c345 _public_6f1c345
#define public_6f1c381 _public_6f1c381
#define public_6f1c392 _public_6f1c392

PROC_DECLARE(0x6f1be20, internal_6f1be20, public_6f1be20);
extern "C" NAKED register_t __cdecl internal_6f1be20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x74]
        test al, al
        push edi
        je public_6f1c392
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, 0x37
        jg public_6f1c15d
        je public_6f1c128
        add eax, 0xFFFFFFFE
        cmp eax, 0x34
        ja public_6f1c392
/*FIXUP movzx eax, byte ptr ds : [eax+public_6f1c3b8] @0x6f1be53*/
/*FIXUP jmp dword ptr ds : [eax*4+public_6f1c3a0] @0x6f1be5a*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000514e
  JMPTB mov eax, 0
  JMPTB public_4c0000000000514e : nop
        je public_6f1bf25
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000514a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000514a : nop
        je public_6f1c392
  JMPTB cmp eax, 2
  JMPTB jne public_4c00000000005146
  JMPTB mov eax, 5
  JMPTB public_4c00000000005146 : nop
        je public_6f1c392
  JMPTB cmp eax, 3
  JMPTB jne public_4c00000000005142
  JMPTB mov eax, 5
  JMPTB public_4c00000000005142 : nop
        je public_6f1c392
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000513e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000513e : nop
        je public_6f1c392
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000513a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000513a : nop
        je public_6f1c392
  JMPTB cmp eax, 6
  JMPTB jne public_4c00000000005136
  JMPTB mov eax, 5
  JMPTB public_4c00000000005136 : nop
        je public_6f1c392
  JMPTB cmp eax, 7
  JMPTB jne public_4c00000000005132
  JMPTB mov eax, 5
  JMPTB public_4c00000000005132 : nop
        je public_6f1c392
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000512e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000512e : nop
        je public_6f1c392
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000512a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000512a : nop
        je public_6f1c392
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c00000000005126
  JMPTB mov eax, 5
  JMPTB public_4c00000000005126 : nop
        je public_6f1c392
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c00000000005122
  JMPTB mov eax, 5
  JMPTB public_4c00000000005122 : nop
        je public_6f1c392
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000511e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000511e : nop
        je public_6f1c392
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000511a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000511a : nop
        je public_6f1c392
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c00000000005116
  JMPTB mov eax, 5
  JMPTB public_4c00000000005116 : nop
        je public_6f1c392
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c00000000005112
  JMPTB mov eax, 5
  JMPTB public_4c00000000005112 : nop
        je public_6f1c392
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000510e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000510e : nop
        je public_6f1c392
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000510a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000510a : nop
        je public_6f1c392
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c00000000005106
  JMPTB mov eax, 5
  JMPTB public_4c00000000005106 : nop
        je public_6f1c392
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c00000000005102
  JMPTB mov eax, 5
  JMPTB public_4c00000000005102 : nop
        je public_6f1c392
  JMPTB cmp eax, 0x14
  JMPTB jne public_4c000000000050fe
  JMPTB mov eax, 1
  JMPTB public_4c000000000050fe : nop
        je public_6f1beba
  JMPTB cmp eax, 0x15
  JMPTB jne public_4c000000000050fa
  JMPTB mov eax, 2
  JMPTB public_4c000000000050fa : nop
        je public_6f1bf64
  JMPTB cmp eax, 0x16
  JMPTB jne public_4c000000000050f6
  JMPTB mov eax, 5
  JMPTB public_4c000000000050f6 : nop
        je public_6f1c392
  JMPTB cmp eax, 0x17
  JMPTB jne public_4c000000000050f2
  JMPTB mov eax, 5
  JMPTB public_4c000000000050f2 : nop
        je public_6f1c392
  JMPTB cmp eax, 0x18
  JMPTB jne public_4c000000000050ee
  JMPTB mov eax, 5
  JMPTB public_4c000000000050ee : nop
        je public_6f1c392
  JMPTB cmp eax, 0x19
  JMPTB jne public_4c000000000050ea
  JMPTB mov eax, 5
  JMPTB public_4c000000000050ea : nop
        je public_6f1c392
  JMPTB cmp eax, 0x1A
  JMPTB jne public_4c000000000050e6
  JMPTB mov eax, 5
  JMPTB public_4c000000000050e6 : nop
        je public_6f1c392
  JMPTB cmp eax, 0x1B
  JMPTB jne public_4c000000000050e2
  JMPTB mov eax, 5
  JMPTB public_4c000000000050e2 : nop
        je public_6f1c392
  JMPTB cmp eax, 0x1C
  JMPTB jne public_4c000000000050de
  JMPTB mov eax, 5
  JMPTB public_4c000000000050de : nop
        je public_6f1c392
  JMPTB cmp eax, 0x1D
  JMPTB jne public_4c000000000050da
  JMPTB mov eax, 5
  JMPTB public_4c000000000050da : nop
        je public_6f1c392
  JMPTB cmp eax, 0x1E
  JMPTB jne public_4c000000000050d6
  JMPTB mov eax, 3
  JMPTB public_4c000000000050d6 : nop
        je public_6f1be61
  JMPTB cmp eax, 0x1F
  JMPTB jne public_4c000000000050d2
  JMPTB mov eax, 5
  JMPTB public_4c000000000050d2 : nop
        je public_6f1c392
  JMPTB cmp eax, 0x20
  JMPTB jne public_4c000000000050ce
  JMPTB mov eax, 5
  JMPTB public_4c000000000050ce : nop
        je public_6f1c392
  JMPTB cmp eax, 0x21
  JMPTB jne public_4c000000000050ca
  JMPTB mov eax, 5
  JMPTB public_4c000000000050ca : nop
        je public_6f1c392
  JMPTB cmp eax, 0x22
  JMPTB jne public_4c000000000050c6
  JMPTB mov eax, 5
  JMPTB public_4c000000000050c6 : nop
        je public_6f1c392
  JMPTB cmp eax, 0x23
  JMPTB jne public_4c000000000050c2
  JMPTB mov eax, 5
  JMPTB public_4c000000000050c2 : nop
        je public_6f1c392
  JMPTB cmp eax, 0x24
  JMPTB jne public_4c000000000050be
  JMPTB mov eax, 5
  JMPTB public_4c000000000050be : nop
        je public_6f1c392
  JMPTB cmp eax, 0x25
  JMPTB jne public_4c000000000050ba
  JMPTB mov eax, 5
  JMPTB public_4c000000000050ba : nop
        je public_6f1c392
  JMPTB cmp eax, 0x26
  JMPTB jne public_4c000000000050b6
  JMPTB mov eax, 5
  JMPTB public_4c000000000050b6 : nop
        je public_6f1c392
  JMPTB cmp eax, 0x27
  JMPTB jne public_4c000000000050b2
  JMPTB mov eax, 5
  JMPTB public_4c000000000050b2 : nop
        je public_6f1c392
  JMPTB cmp eax, 0x28
  JMPTB jne public_4c000000000050ae
  JMPTB mov eax, 5
  JMPTB public_4c000000000050ae : nop
        je public_6f1c392
  JMPTB cmp eax, 0x29
  JMPTB jne public_4c000000000050aa
  JMPTB mov eax, 5
  JMPTB public_4c000000000050aa : nop
        je public_6f1c392
  JMPTB cmp eax, 0x2A
  JMPTB jne public_4c000000000050a6
  JMPTB mov eax, 5
  JMPTB public_4c000000000050a6 : nop
        je public_6f1c392
  JMPTB cmp eax, 0x2B
  JMPTB jne public_4c000000000050a2
  JMPTB mov eax, 5
  JMPTB public_4c000000000050a2 : nop
        je public_6f1c392
  JMPTB cmp eax, 0x2C
  JMPTB jne public_4c0000000000509e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000509e : nop
        je public_6f1c392
  JMPTB cmp eax, 0x2D
  JMPTB jne public_4c0000000000509a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000509a : nop
        je public_6f1c392
  JMPTB cmp eax, 0x2E
  JMPTB jne public_4c00000000005096
  JMPTB mov eax, 5
  JMPTB public_4c00000000005096 : nop
        je public_6f1c392
  JMPTB cmp eax, 0x2F
  JMPTB jne public_4c00000000005092
  JMPTB mov eax, 5
  JMPTB public_4c00000000005092 : nop
        je public_6f1c392
  JMPTB cmp eax, 0x30
  JMPTB jne public_4c0000000000508e
  JMPTB mov eax, 5
  JMPTB public_4c0000000000508e : nop
        je public_6f1c392
  JMPTB cmp eax, 0x31
  JMPTB jne public_4c0000000000508a
  JMPTB mov eax, 5
  JMPTB public_4c0000000000508a : nop
        je public_6f1c392
  JMPTB cmp eax, 0x32
  JMPTB jne public_4c00000000005086
  JMPTB mov eax, 5
  JMPTB public_4c00000000005086 : nop
        je public_6f1c392
  JMPTB cmp eax, 0x33
  JMPTB jne public_4c00000000005082
  JMPTB mov eax, 5
  JMPTB public_4c00000000005082 : nop
        je public_6f1c392
  JMPTB cmp eax, 0x34
  JMPTB jne public_4c0000000000507e
  JMPTB mov eax, 4
  JMPTB public_4c0000000000507e : nop
        je public_6f1bfff
  JMPTB int 3
        public_6f1be61 : nop
        cmp dword ptr ds : [esi+0x78], 1
        jne public_6f1c392
        mov ecx, dword ptr ds : [public_6fce76c]
        mov eax, ecx
        inc ecx
        mov dword ptr ds : [public_6fce76c], ecx
        mov edx, dword ptr ds : [esi+0x80]
        push 0x3F800000
        lea ecx, ss:[esp+0x14]
        push ecx
        add edx, 4
        push edx
        mov dword ptr ds : [esi+0x7C], eax
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_6fb342c]
        add esp, 0xC
        pop edi
        mov dword ptr ds : [esi+0x78], 2
        mov eax, dword ptr ds : [esi+0x78]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 8
        public_6f1beba : nop
        cmp dword ptr ds : [esi+0x78], 3
        jne public_6f1c392
        mov eax, dword ptr ds : [esi+0x80]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f1c392
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [esi+0x80]
        mov edi, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edx+8]
        call public_6f481e0
        cmp edi, eax
        jne public_6f1c392
        test edi, 0x3FFFFFFF
        je public_6f1c392
        push 0
        push 1
        mov ecx, esi
        mov dword ptr ds : [esi+0x78], 4
        call public_6f1c7c0
        mov eax, dword ptr ds : [esi+0x78]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 8
        public_6f1bf25 : nop
        cmp dword ptr ds : [esi+0x78], 3
        jne public_6f1c392
        mov eax, dword ptr ds : [esi+0x80]
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f1c392
        test eax, 0x3FFFFFFF
        je public_6f1c392
        pop edi
        mov dword ptr ds : [esi+0x78], 4
        mov eax, dword ptr ds : [esi+0x78]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 8
        public_6f1bf64 : nop
        cmp dword ptr ds : [esi+0x78], 4
        jne public_6f1c392
        mov edx, dword ptr ds : [esi+0x80]
        add edx, 0xC
        push edx
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f1c392
        mov ecx, dword ptr ds : [esi+0x80]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [eax]
        call public_6f481e0
        cmp edi, eax
        jne public_6f1c392
        test edi, 0x3FFFFFFF
        je public_6f1c392
        mov ecx, dword ptr ds : [public_6fce76c]
        mov eax, ecx
        inc ecx
        mov dword ptr ds : [public_6fce76c], ecx
        mov dword ptr ds : [esi+0x7C], eax
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+0x80]
        push 0x3F800000
        lea edx, ss:[esp+0x14]
        push edx
        add eax, 4
        push eax
        mov dword ptr ss : [esp+0x20], 0
        call dword ptr ds : [public_6fb342c]
        add esp, 0xC
        pop edi
        mov dword ptr ds : [esi+0x78], 3
        mov eax, dword ptr ds : [esi+0x78]
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 8
        public_6f1bfff : nop
        mov ecx, dword ptr ds : [esi+0x80]
        mov eax, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ss : [esp+0x28]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f1c392
        test eax, 0x3FFFFFFF
        je public_6f1c392
        cmp dword ptr ds : [esi+0x78], 4
        jne public_6f1c068
        mov ecx, dword ptr ds : [public_6fce76c]
        mov eax, ecx
        inc ecx
        mov dword ptr ds : [public_6fce76c], ecx
        mov ecx, dword ptr ds : [esi+0x80]
        mov dword ptr ds : [esi+0x7C], eax
        mov dword ptr ss : [esp+0x10], eax
        push 0x3F800000
        lea eax, ss:[esp+0x14]
        push eax
        add ecx, 4
        push ecx
        mov dword ptr ss : [esp+0x20], 0
        call dword ptr ds : [public_6fb342c]
        add esp, 0xC
        mov dword ptr ds : [esi+0x78], 3
        public_6f1c068 : nop
        mov edx, dword ptr ds : [esi+0x80]
        mov ecx, dword ptr ds : [edx+8]
        call public_6f478b0
        cmp eax, dword ptr ds : [esi+0x70]
        jne public_6f1c25e
        mov edi, dword ptr ds : [esi+0x80]
        lea eax, ds:[edi+0xC]
        push eax
        lea ebx, ds:[esi+0x28]
        xor ebp, ebp
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f1c120
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_6f1c120
        push ebx
        mov ecx, edi
        call public_6f15940
        mov ebp, eax
        test ebp, 0x3FFFFFFF
        jne public_6f1c120
        mov ecx, dword ptr ds : [edi+0xD4]
        mov eax, dword ptr ds : [ecx]
        xor ebp, ebp
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], eax
        je public_6f1c10b
        lea ebp, ds:[ebx+4]
        public_6f1c0d3 : nop
        add eax, 8
        push ebp
        mov ecx, eax
        call public_6ed01c0
        test al, al
        jne public_6f1c104
        push 0
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x30]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, dword ptr ds : [edi+0xD4]
        jne public_6f1c0d3
        mov ebp, dword ptr ss : [esp+0x24]
        jmp public_6f1c10b
        public_6f1c104 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ds : [eax+0x3C]
        public_6f1c10b : nop
        test ebp, 0x3FFFFFFF
        jne public_6f1c120
        lea eax, ds:[esi+0x28]
        push eax
        mov ecx, edi
        call public_6f159f0
        mov ebp, eax
        public_6f1c120 : nop
        mov dword ptr ds : [esi+0x20], ebp
        jmp public_6f1c25e
        public_6f1c128 : nop
        mov eax, dword ptr ds : [esi+0x80]
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f1c392
        test eax, 0x3FFFFFFF
        je public_6f1c392
        mov eax, dword ptr ds : [esi+0x78]
        pop edi
        mov dword ptr ds : [esi+0x20], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 8
        public_6f1c15d : nop
        cmp eax, 0x3E
        jg public_6f1c31d
        je public_6f1c30a
        sub eax, 0x3A
        je public_6f1c29f
        dec eax
        jne public_6f1c392
        mov eax, dword ptr ds : [esi+0x80]
        mov edi, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [edi+8]
        add eax, 0xC
        cmp edx, ecx
        jne public_6f1c392
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f1c392
        mov eax, dword ptr ds : [edi]
        cmp eax, dword ptr ds : [esi+0x70]
        je public_6f1c1c3
        mov eax, dword ptr ds : [esi+0x78]
        pop edi
        mov dword ptr ds : [esi+0x20], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 8
        public_6f1c1c3 : nop
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        lea ebx, ds:[esi+0x28]
        je public_6f1c25e
        mov ebp, dword ptr ds : [esi+0x80]
        lea ecx, ss:[ebp+0xC]
        push ecx
        xor edi, edi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f1c25b
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x10]
        test eax, eax
        je public_6f1c25b
        push ebx
        mov ecx, ebp
        call public_6f15940
        mov edi, eax
        test edi, 0x3FFFFFFF
        jne public_6f1c25b
        mov eax, dword ptr ss : [ebp+0xD4]
        mov edi, dword ptr ds : [eax]
        xor ecx, ecx
        cmp edi, eax
        mov dword ptr ss : [esp+0x24], ecx
        je public_6f1c244
        add ebx, 4
        mov dword ptr ss : [esp+0x28], ebx
        mov edi, edi
        public_6f1c220 : nop
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        lea ecx, ds:[edi+8]
        call public_6ed01c0
        test al, al
        jne public_6f1c241
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ss : [ebp+0xD4]
        jne public_6f1c220
        mov ecx, dword ptr ss : [esp+0x24]
        jmp public_6f1c244
        public_6f1c241 : nop
        mov ecx, dword ptr ds : [edi+0x3C]
        public_6f1c244 : nop
        mov edi, ecx
        test edi, 0x3FFFFFFF
        jne public_6f1c25b
        lea eax, ds:[esi+0x28]
        push eax
        mov ecx, ebp
        call public_6f159f0
        mov edi, eax
        public_6f1c25b : nop
        mov dword ptr ds : [esi+0x20], edi
        public_6f1c25e : nop
        mov ecx, esi
        call public_6f1c530
        push 1
        push 0
        mov ecx, esi
        call public_6f1c7c0
        mov ecx, dword ptr ds : [public_6fce76c]
        mov eax, ecx
        inc ecx
        mov dword ptr ds : [public_6fce76c], ecx
        mov edx, dword ptr ds : [esi+0x80]
        push 0x3F800000
        lea ecx, ss:[esp+0x1C]
        push ecx
        add edx, 4
        mov dword ptr ds : [esi+0x7C], eax
        mov dword ptr ss : [esp+0x20], eax
        push edx
        jmp public_6f1c381
        public_6f1c29f : nop
        mov eax, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f1c2d0
        public_6f1c2a8 : nop
        mov eax, dword ptr ds : [edi+8]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov dword ptr ss : [esp+0x2C], eax
        call public_6f1a610
        mov edx, dword ptr ds : [esi]
        add esp, 4
        push edi
        lea eax, ss:[esp+0x28]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov edi, dword ptr ds : [eax]
        cmp edi, dword ptr ds : [esi+8]
        jne public_6f1c2a8
        public_6f1c2d0 : nop
        mov ebp, dword ptr ds : [esi+0x60]
        lea ecx, ss:[esp+0x28]
        lea edi, ds:[esi+0x5C]
        push ecx
        mov ecx, edi
        call public_6f1df30
        mov edx, dword ptr ds : [eax]
        push ebp
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, edi
        call public_6fa8370
        push 0
        push 0
        mov ecx, esi
        call public_6f1c7c0
        mov eax, dword ptr ds : [esi+0x78]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 8
        public_6f1c30a : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+0x7C]
        jne public_6f1c392
        cmp dword ptr ds : [esi+0x78], 4
        je public_6f1c392
        jmp public_6f1c345
        public_6f1c31d : nop
        cmp eax, 0x100B
        jne public_6f1c392
        mov eax, dword ptr ds : [esi+0x80]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [eax+0xC]
        jne public_6f1c392
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, dword ptr ds : [eax+4]
        je public_6f1c345
        test ecx, 0x3FFFFFFF
        jne public_6f1c392
        public_6f1c345 : nop
        mov ecx, esi
        call public_6f1c530
        push 0
        mov ecx, esi
        push 0
        call public_6f1c7c0
        mov ecx, dword ptr ds : [public_6fce76c]
        mov eax, ecx
        inc ecx
        mov dword ptr ds : [public_6fce76c], ecx
        mov ecx, dword ptr ds : [esi+0x80]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ds : [esi+0x7C], eax
        push 0x3F800000
        lea eax, ss:[esp+0x1C]
        add ecx, 4
        push eax
        push ecx
        public_6f1c381 : nop
        mov dword ptr ss : [esp+0x28], 0
        call dword ptr ds : [public_6fb342c]
        add esp, 0xC
        public_6f1c392 : nop
        mov eax, dword ptr ds : [esi+0x78]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6f1be20)
        ASM_EXPORT_ENTRY_FIRST(0x6f1be61, public_6f1be61)
        ASM_EXPORT_ENTRY(0x6f1beba, public_6f1beba)
        ASM_EXPORT_ENTRY(0x6f1bf25, public_6f1bf25)
        ASM_EXPORT_ENTRY(0x6f1bf64, public_6f1bf64)
        ASM_EXPORT_ENTRY(0x6f1bfff, public_6f1bfff)
        ASM_EXPORT_ENTRY_LAST(0x6f1c392, public_6f1c392)
    }
}

#undef public_6f1be61
#undef public_6f1beba
#undef public_6f1bf25
#undef public_6f1bf64
#undef public_6f1bfff
#undef public_6f1c068
#undef public_6f1c0d3
#undef public_6f1c104
#undef public_6f1c10b
#undef public_6f1c120
#undef public_6f1c128
#undef public_6f1c15d
#undef public_6f1c1c3
#undef public_6f1c220
#undef public_6f1c241
#undef public_6f1c244
#undef public_6f1c25b
#undef public_6f1c25e
#undef public_6f1c29f
#undef public_6f1c2a8
#undef public_6f1c2d0
#undef public_6f1c30a
#undef public_6f1c31d
#undef public_6f1c345
#undef public_6f1c381
#undef public_6f1c392

#pragma init_seg(compiler)
extern "C" void const* const public_6f1be61 = __AsmFindLabelExport(&internal_6f1be20, 0x6f1be61);
extern "C" void const* const public_6f1beba = __AsmFindLabelExport(&internal_6f1be20, 0x6f1beba);
extern "C" void const* const public_6f1bf25 = __AsmFindLabelExport(&internal_6f1be20, 0x6f1bf25);
extern "C" void const* const public_6f1bf64 = __AsmFindLabelExport(&internal_6f1be20, 0x6f1bf64);
extern "C" void const* const public_6f1bfff = __AsmFindLabelExport(&internal_6f1be20, 0x6f1bfff);
extern "C" void const* const public_6f1c392 = __AsmFindLabelExport(&internal_6f1be20, 0x6f1c392);
