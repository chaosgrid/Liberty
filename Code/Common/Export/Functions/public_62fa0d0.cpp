#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b7750);
CLANG_FORWARD_PROC_SYMBOL(public_62efff0);
CLANG_FORWARD_PROC_SYMBOL(public_62f03c0);
CLANG_FORWARD_PROC_SYMBOL(public_62fa0d0);
CLANG_FORWARD_PROC_SYMBOL(public_62fb070);
CLANG_FORWARD_PROC_SYMBOL(public_62fb0e0);
CLANG_FORWARD_PROC_SYMBOL(public_62fbeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6333e30);
CLANG_FORWARD_PROC_SYMBOL(public_6333e40);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_6395b4b);

#define public_62fa151 _public_62fa151
#define public_62fa1b6 _public_62fa1b6
#define public_62fa1ed _public_62fa1ed
#define public_62fa1ef _public_62fa1ef
#define public_62fa207 _public_62fa207
#define public_62fa226 _public_62fa226
#define public_62fa23f _public_62fa23f
#define public_62fa259 _public_62fa259
#define public_62fa2a1 _public_62fa2a1
#define public_62fa2a3 _public_62fa2a3
#define public_62fa2c0 _public_62fa2c0
#define public_62fa344 _public_62fa344
#define public_62fa373 _public_62fa373
#define public_62fa396 _public_62fa396
#define public_62fa44e _public_62fa44e
#define public_62fa46b _public_62fa46b
#define public_62fa479 _public_62fa479
#define public_62fa488 _public_62fa488
#define public_62fa49c _public_62fa49c
#define public_62fa4b0 _public_62fa4b0
#define public_62fa4c3 _public_62fa4c3
#define public_62fa4cf _public_62fa4cf
#define public_62fa4e3 _public_62fa4e3
#define public_62fa56c _public_62fa56c
#define public_62fa57d _public_62fa57d
#define public_62fa592 _public_62fa592
#define public_62fa5bb _public_62fa5bb
#define public_62fa5bd _public_62fa5bd
#define public_62fa630 _public_62fa630
#define public_62fa641 _public_62fa641
#define public_62fa656 _public_62fa656
#define public_62fa675 _public_62fa675
#define public_62fa69a _public_62fa69a
#define public_62fa6a3 _public_62fa6a3

PROC_DECLARE(0x62fa0d0, internal_62fa0d0, public_62fa0d0);
extern "C" NAKED register_t __cdecl internal_62fa0d0()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_6395b4b @0x62fa0d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395b4b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x15F0
        mov dword ptr fs : [0], esp
        call public_6391dc0
        mov ecx, dword ptr ds : [public_63fca94]
        mov eax, dword ptr ds : [public_63fcaa8]
        push ebx
        push ebp
        push esi
        mov dword ptr ss : [esp+0x24], ecx
        push edi
        lea ecx, ss:[esp+0x98]
        mov dword ptr ss : [esp+0x20], eax
        call public_630f660
        mov edx, dword ptr ss : [esp+0x1610]
        xor ebp, ebp
        push ebp
        push edx
        lea ecx, ss:[esp+0xA0]
        mov dword ptr ss : [esp+0x1610], ebp
        call public_630f9b0
        test al, al
        je public_62fa4e3
        lea ecx, ss:[esp+0x98]
        call public_6310070
        test al, al
        je public_62fa4e3
        mov ebx, offset public_63a11f0
/*FIXUP public_62fa151 : nop
        push offset public_639dcc0 @0x62fa151*/
  FIXUP public_62fa151 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639dcc0
        lea ecx, ss:[esp+0x9C]
        call public_63103c0
        test al, al
        jne public_62fa23f
/*FIXUP push offset public_63a2088 @0x62fa16a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2088
        lea ecx, ss:[esp+0x9C]
        call public_63103c0
        test al, al
        jne public_62fa23f
/*FIXUP push offset public_63a2078 @0x62fa183*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2078
        lea ecx, ss:[esp+0x9C]
        call public_63103c0
        test al, al
        je public_62fa4cf
        mov ecx, dword ptr ss : [esp+0x1614]
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_62fa1b6
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        push 5
        call dword ptr ds : [eax]
        public_62fa1b6 : nop
        push 0x5C
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebp
        mov byte ptr ss : [esp+0x1608], 5
        je public_62fa1ed
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov ecx, esi
        call public_62efff0
        mov dword ptr ds : [esi], offset public_6399d88
        mov dword ptr ds : [esi+0x10], 0x40000000
        jmp public_62fa1ef
        public_62fa1ed : nop
        xor esi, esi
        public_62fa1ef : nop
        lea ecx, ss:[esp+0x98]
        mov byte ptr ss : [esp+0x1608], 0
        call public_6310170
        test al, al
        je public_62fa226
        public_62fa207 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x98]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        lea ecx, ss:[esp+0x98]
        call public_6310170
        test al, al
        jne public_62fa207
/*FIXUP public_62fa226 : nop
        push offset public_63a2078 @0x62fa226*/
  FIXUP public_62fa226 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2078
        lea ecx, ds:[esi+8]
        push ecx
        push esi
        mov ecx, offset public_63fca84
        call public_62fbeb0
        jmp public_62fa4b0
        public_62fa23f : nop
        mov ecx, dword ptr ss : [esp+0x1614]
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], ebp
        je public_62fa259
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        push 4
        call dword ptr ds : [edx]
        public_62fa259 : nop
        push 0x68
        call public_6391d9c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebp
        mov byte ptr ss : [esp+0x1608], 1
        je public_62fa2a1
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, esi
        call public_62efff0
        mov dword ptr ds : [esi], offset public_6399d6c
        mov dword ptr ds : [esi+0x10], 0x20000000
        mov dword ptr ds : [esi+0x5C], 0x41C80000
        mov dword ptr ds : [esi+0x60], ebp
        mov dword ptr ds : [esi+0x64], 0x447A0000
        jmp public_62fa2a3
        public_62fa2a1 : nop
        xor esi, esi
        public_62fa2a3 : nop
        lea ecx, ss:[esp+0x98]
        mov byte ptr ss : [esp+0x1608], 0
        call public_6310170
        test al, al
        je public_62fa49c
        nop 
/*FIXUP public_62fa2c0 : nop
        push offset public_63a17dc @0x62fa2c0*/
  FIXUP public_62fa2c0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a17dc
        lea ecx, ss:[esp+0x9C]
        call public_6310410
        test al, al
        je public_62fa479
        lea ecx, ss:[esp+0x98]
        call public_6310b70
        push eax
        call public_630d3f0
        add esp, 4
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x14], eax
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, offset public_63fca98
        call public_6301640
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, dword ptr ds : [public_63fca9c]
        jne public_62fa373
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x2C]
        call public_62b7750
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_6399028]
        push ecx
        push 0x3C
/*FIXUP push offset public_63a123c @0x62fa334*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a1538 @0x62fa339*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1538
        push edx
        call dword ptr ds : [eax]
        add esp, 0x14
        public_62fa344 : nop
        lea ecx, ss:[esp+0x1C]
        mov edi, 0x100002
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x125B
/*FIXUP push offset public_63a123c @0x62fa35e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a17a0 @0x62fa363*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a17a0
        push edi
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_62fa488
        public_62fa373 : nop
        mov edi, dword ptr ds : [eax+0x10]
        cmp edi, ebp
        je public_62fa344
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        mov ebp, dword ptr ds : [esi+8]
        je public_62fa396
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x1C]
        public_62fa396 : nop
        lea ecx, ss:[esp+0x38]
        call public_6333e40
        lea ecx, ss:[esp+0x3C]
        call public_6333e30
        lea ecx, ss:[esp+0x54]
        call public_6333e40
        lea eax, ss:[esp+0x1B]
        push eax
        lea ecx, ss:[esp+0x1E]
        push ecx
        lea ecx, ss:[esp+0x80]
        call public_62fb070
        push edi
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x160C], 2
        mov dword ptr ss : [esp+0x34], ebx
        call public_62f03c0
        mov edx, dword ptr ds : [edi+0x5C]
        mov eax, dword ptr ds : [edi+0x60]
        mov ecx, dword ptr ds : [edi+0x64]
        mov dword ptr ss : [esp+0x8C], edx
        mov dword ptr ss : [esp+0x90], eax
        mov dword ptr ss : [esp+0x94], ecx
        mov dword ptr ss : [esp+0x30], offset public_6399d6c
        lea edx, ss:[esp+0x30]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x160C], 3
        call public_62f03c0
        mov eax, dword ptr ss : [esp+0x8C]
        mov ecx, dword ptr ss : [esp+0x90]
        mov edx, dword ptr ss : [esp+0x94]
        mov dword ptr ds : [esi+0x5C], eax
        mov dword ptr ds : [esi+0x60], ecx
        mov dword ptr ds : [esi+0x64], edx
        mov dword ptr ss : [esp+0x30], ebx
        mov ecx, dword ptr ss : [esp+0x34]
        test ecx, ecx
        mov byte ptr ss : [esp+0x1608], 4
        je public_62fa44e
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_62fa44e : nop
        lea ecx, ss:[esp+0x78]
        mov byte ptr ss : [esp+0x1608], 0
        call public_62fb0e0
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_62fa46b
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        public_62fa46b : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+4], eax
        xor ebp, ebp
        jmp public_62fa488
        public_62fa479 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x98]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        public_62fa488 : nop
        lea ecx, ss:[esp+0x98]
        call public_6310170
        test al, al
        jne public_62fa2c0
/*FIXUP public_62fa49c : nop
        push offset public_639dcc0 @0x62fa49c*/
  FIXUP public_62fa49c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639dcc0
        lea ecx, ds:[esi+8]
        push ecx
        push esi
        mov ecx, offset public_63fca98
        call public_62fbeb0
        public_62fa4b0 : nop
        test al, al
        je public_62fa4c3
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebp
        je public_62fa4cf
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+0x14]
        jmp public_62fa4cf
        public_62fa4c3 : nop
        cmp esi, ebp
        je public_62fa4cf
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        push 1
        call dword ptr ds : [eax]
        public_62fa4cf : nop
        lea ecx, ss:[esp+0x98]
        call public_6310070
        test al, al
        jne public_62fa151
        public_62fa4e3 : nop
        mov esi, dword ptr ds : [public_63fca94]
        mov eax, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ds : [public_63fcaa8]
        sub esi, eax
        sub esi, ebx
        add esi, edi
        mov ebx, 6
        lea ecx, ss:[esp+0x14C0]
        mov dword ptr ss : [esp+0x1608], ebx
        mov dword ptr ss : [esp+0x24], ecx
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebp
        lea ecx, ss:[esp+0x14C8]
        mov byte ptr ss : [esp+0x1610], 7
        call dword ptr ds : [public_6399198]
        cmp dword ptr ss : [esp+0x14D0], 0xFFFFFFFF
        mov edi, dword ptr ds : [public_639913c]
        je public_62fa592
        cmp dword ptr ss : [esp+0x14D4], ebp
        je public_62fa57d
        mov eax, dword ptr ss : [esp+0x14D8]
        cmp eax, ebp
        je public_62fa56c
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ss : [esp+0x14D8], ebp
        mov dword ptr ss : [esp+0x14DC], ebp
        public_62fa56c : nop
        mov ecx, dword ptr ss : [esp+0x14D4]
        push ecx
        call edi
        mov dword ptr ss : [esp+0x14D4], ebp
        public_62fa57d : nop
        mov edx, dword ptr ss : [esp+0x14D0]
        push edx
        call edi
        mov dword ptr ss : [esp+0x14D0], 0xFFFFFFFF
        public_62fa592 : nop
        mov eax, dword ptr ss : [esp+0x14D8]
        cmp eax, ebp
        mov ebp, dword ptr ds : [public_639932c]
        je public_62fa5bb
        push eax
        call ebp
        add esp, 4
        xor eax, eax
        mov dword ptr ss : [esp+0x14D8], eax
        mov dword ptr ss : [esp+0x14DC], eax
        jmp public_62fa5bd
        public_62fa5bb : nop
        xor eax, eax
        public_62fa5bd : nop
        push 1
        lea ecx, ss:[esp+0x14C4]
        mov dword ptr ss : [esp+0x14E4], eax
        mov byte ptr ss : [esp+0x160C], bl
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [eax]
        push ecx
        xor ebx, ebx
        push ebx
        lea ecx, ss:[esp+0xA0]
        mov dword ptr ss : [esp+0x1610], 8
        call dword ptr ds : [public_6399198]
        cmp dword ptr ss : [esp+0xA8], 0xFFFFFFFF
        je public_62fa656
        cmp dword ptr ss : [esp+0xAC], ebx
        je public_62fa641
        mov eax, dword ptr ss : [esp+0xB0]
        cmp eax, ebx
        je public_62fa630
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ss : [esp+0xB0], ebx
        mov dword ptr ss : [esp+0xB4], ebx
        public_62fa630 : nop
        mov edx, dword ptr ss : [esp+0xAC]
        push edx
        call edi
        mov dword ptr ss : [esp+0xAC], ebx
        public_62fa641 : nop
        mov eax, dword ptr ss : [esp+0xA8]
        push eax
        call edi
        mov dword ptr ss : [esp+0xA8], 0xFFFFFFFF
        public_62fa656 : nop
        mov eax, dword ptr ss : [esp+0xB0]
        cmp eax, ebx
        je public_62fa675
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0xB0], ebx
        mov dword ptr ss : [esp+0xB4], ebx
        public_62fa675 : nop
        mov eax, dword ptr ss : [esp+0x9C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0xB8], ebx
        je public_62fa6a3
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_62fa69a
        cmp cl, 0xFF
        je public_62fa69a
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_62fa6a3
        public_62fa69a : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62fa6a3 : nop
        mov ecx, dword ptr ss : [esp+0x1600]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x15FC
        ret 
        UNREACHABLE_TRAP(0x62fa0d0)
    }
}

#undef public_62fa151
#undef public_62fa1b6
#undef public_62fa1ed
#undef public_62fa1ef
#undef public_62fa207
#undef public_62fa226
#undef public_62fa23f
#undef public_62fa259
#undef public_62fa2a1
#undef public_62fa2a3
#undef public_62fa2c0
#undef public_62fa344
#undef public_62fa373
#undef public_62fa396
#undef public_62fa44e
#undef public_62fa46b
#undef public_62fa479
#undef public_62fa488
#undef public_62fa49c
#undef public_62fa4b0
#undef public_62fa4c3
#undef public_62fa4cf
#undef public_62fa4e3
#undef public_62fa56c
#undef public_62fa57d
#undef public_62fa592
#undef public_62fa5bb
#undef public_62fa5bd
#undef public_62fa630
#undef public_62fa641
#undef public_62fa656
#undef public_62fa675
#undef public_62fa69a
#undef public_62fa6a3
