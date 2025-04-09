#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4324c0);
CLANG_FORWARD_PROC_SYMBOL(public_43a460);
CLANG_FORWARD_PROC_SYMBOL(public_43a630);
CLANG_FORWARD_PROC_SYMBOL(public_43b630);
CLANG_FORWARD_PROC_SYMBOL(public_43ce90);
CLANG_FORWARD_PROC_SYMBOL(public_43f2e0);
CLANG_FORWARD_PROC_SYMBOL(public_43f8e0);
CLANG_FORWARD_PROC_SYMBOL(public_442d40);
CLANG_FORWARD_PROC_SYMBOL(public_442da0);
CLANG_FORWARD_PROC_SYMBOL(public_456b40);
CLANG_FORWARD_PROC_SYMBOL(public_4c3e10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9688);

#define public_43f330 _public_43f330
#define public_43f455 _public_43f455
#define public_43f463 _public_43f463
#define public_43f46e _public_43f46e
#define public_43f4dd _public_43f4dd
#define public_43f4eb _public_43f4eb
#define public_43f4ef _public_43f4ef
#define public_43f530 _public_43f530
#define public_43f55b _public_43f55b
#define public_43f58e _public_43f58e
#define public_43f5a0 _public_43f5a0
#define public_43f5c5 _public_43f5c5
#define public_43f5c9 _public_43f5c9
#define public_43f5ce _public_43f5ce
#define public_43f5fb _public_43f5fb
#define public_43f607 _public_43f607
#define public_43f64d _public_43f64d
#define public_43f661 _public_43f661
#define public_43f69a _public_43f69a
#define public_43f6b6 _public_43f6b6
#define public_43f6d4 _public_43f6d4
#define public_43f6e6 _public_43f6e6
#define public_43f706 _public_43f706
#define public_43f712 _public_43f712
#define public_43f71e _public_43f71e
#define public_43f774 _public_43f774
#define public_43f77e _public_43f77e
#define public_43f790 _public_43f790
#define public_43f7a5 _public_43f7a5
#define public_43f7b1 _public_43f7b1
#define public_43f7bd _public_43f7bd
#define public_43f813 _public_43f813
#define public_43f81d _public_43f81d
#define public_43f832 _public_43f832
#define public_43f87e _public_43f87e
#define public_43f891 _public_43f891
#define public_43f8b8 _public_43f8b8

PROC_DECLARE(0x43f2e0, internal_43f2e0, public_43f2e0);
extern "C" NAKED register_t __cdecl internal_43f2e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9688 @0x43f2e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9688
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x238
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x380]
        mov edx, dword ptr ds : [eax]
        push edi
        lea ecx, ds:[ebx+0x37C]
        push eax
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call public_456b40
        mov ebp, dword ptr ds : [public_5c71ec]
        lea ecx, ds:[ebx+0x3A0]
        mov esi, 1
        mov dword ptr ss : [esp+0x18], ecx
        public_43f330 : nop
        push esi
        lea edx, ss:[esp+0x4C]
/*FIXUP push offset public_5cb81c @0x43f335*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb81c
        push edx
        call ebp
        mov al, byte ptr ss : [esp+0x1F]
        add esp, 0xC
        push 0
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x2C], al
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x48]
        repne scasb
        not ecx
        dec ecx
        push ecx
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c7088]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov dword ptr ss : [esp+0x25C], 0
        call public_442d40
        push 1
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x254], 0xFFFFFFFF
        call dword ptr ds : [public_5c7084]
        push esi
        lea ecx, ss:[esp+0x14C]
/*FIXUP push offset public_5cb80c @0x43f3b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb80c
        push ecx
        call ebp
        mov dl, byte ptr ss : [esp+0x1F]
        add esp, 0xC
        push 0
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x3C], dl
        call dword ptr ds : [public_5c7084]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        lea edi, ss:[esp+0x148]
        repne scasb
        not ecx
        dec ecx
        push ecx
        lea eax, ss:[esp+0x14C]
        push eax
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_5c7088]
        mov eax, dword ptr ds : [ebx+0x3B0]
        lea ecx, ds:[ebx+0x3AC]
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        lea eax, ss:[esp+0x28]
        push eax
        mov dword ptr ss : [esp+0x25C], 1
        call public_442d40
        push 1
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x254], 0xFFFFFFFF
        call dword ptr ds : [public_5c7084]
        inc esi
        cmp esi, 0xA
        jl public_43f330
        mov ecx, offset public_668708
        call public_43a460
        mov ecx, dword ptr ds : [eax+0x40]
        xor esi, esi
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x1C], esi
        public_43f455 : nop
        mov edx, dword ptr ds : [ecx+0x198]
        test edx, edx
        jne public_43f463
        xor eax, eax
        jmp public_43f46e
        public_43f463 : nop
        mov eax, dword ptr ds : [ecx+0x19C]
        sub eax, edx
        sar eax, 2
        public_43f46e : nop
        cmp esi, eax
        jge public_43f661
        mov edx, dword ptr ds : [ecx+0x198]
        mov esi, dword ptr ds : [edx+esi*4]
        mov edx, dword ptr ds : [esi+8]
        test edx, edx
        je public_43f4ef
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        mov eax, dword ptr ds : [ebx+0x374]
        not ecx
        dec ecx
        push ecx
        lea ebp, ds:[ebx+0x36C]
        push edx
        push eax
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_5c6fac]
        test eax, eax
        je public_43f4eb
        mov ecx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [public_5c6d24]
/*FIXUP push offset public_5cb804 @0x43f4b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb804
        push ecx
        call edi
        add esp, 8
        test eax, eax
        je public_43f4dd
        mov edx, dword ptr ds : [esi+8]
/*FIXUP push offset public_5cb7f8 @0x43f4ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb7f8
        push edx
        call edi
        add esp, 8
        test eax, eax
        jne public_43f64d
        public_43f4dd : nop
        mov eax, dword ptr ds : [ebx+0x374]
        test eax, eax
        jne public_43f64d
        public_43f4eb : nop
        mov ecx, dword ptr ss : [esp+0x20]
        public_43f4ef : nop
        cmp dword ptr ds : [esi+0x10], 2
        jne public_43f55b
        mov ecx, offset public_668708
        call public_43a460
        mov eax, dword ptr ds : [eax+0x34]
        push eax
        mov ecx, offset public_668708
        call public_43a630
        mov edi, eax
        xor eax, eax
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x14], eax
        push 1
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_43ce90
        test al, al
        je public_43f64d
        nop 
        public_43f530 : nop
        mov eax, dword ptr ss : [esp+0x24]
        push 1
        lea ecx, ss:[esp+0x18]
        inc eax
        push ecx
        mov ecx, edi
        mov dword ptr ss : [esp+0x2C], eax
        call public_43ce90
        test al, al
        jne public_43f530
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_43f64d
        mov ecx, dword ptr ss : [esp+0x20]
        public_43f55b : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_43f58e
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_43f58e
        mov ecx, offset public_668708
        call public_43b630
        mov eax, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [public_5c616c]
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 8
        push edx
        push ecx
        push 1
        push 0
        push eax
        jmp public_43f607
        public_43f58e : nop
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ss : [esp+0x14], edi
        je public_43f5fb
        mov ebp, dword ptr ds : [ecx+0xC]
        lea esp, ss:[esp]
        public_43f5a0 : nop
        mov dl, byte ptr ds : [edi]
        mov cl, byte ptr ss : [ebp]
        mov al, dl
        cmp dl, cl
        jne public_43f5c9
        test al, al
        je public_43f5c5
        mov cl, byte ptr ds : [edi+1]
        mov dl, byte ptr ss : [ebp+1]
        mov al, cl
        cmp cl, dl
        jne public_43f5c9
        add edi, 2
        add ebp, 2
        test al, al
        jne public_43f5a0
        public_43f5c5 : nop
        xor edi, edi
        jmp public_43f5ce
        public_43f5c9 : nop
        sbb edi, edi
        sbb edi, 0xFFFFFFFF
        public_43f5ce : nop
        mov ecx, offset public_668708
        call public_43b630
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [public_5c616c]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add esp, 8
        push ecx
        test edi, edi
        sete cl
        push edx
        push 1
        push ecx
        push eax
        jmp public_43f607
        public_43f5fb : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+0x10]
        push eax
        push eax
        push 0
        push 0
        push edx
        public_43f607 : nop
        mov ecx, ebx
        call public_43f8e0
        mov ebp, eax
        test ebp, ebp
        je public_43f64d
        mov dword ptr ss : [ebp+0x1C], esi
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        je public_43f64d
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        mov eax, dword ptr ds : [ebx+0x374]
        not ecx
        dec ecx
        push ecx
        lea edx, ds:[ebx+0x36C]
        push esi
        push eax
        push 0
        mov ecx, edx
        call dword ptr ds : [public_5c6fac]
        test eax, eax
        jne public_43f64d
        mov dword ptr ds : [ebx+0x3B8], ebp
        public_43f64d : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        inc eax
        mov dword ptr ss : [esp+0x1C], eax
        mov esi, eax
        jmp public_43f455
        public_43f661 : nop
        mov eax, dword ptr ds : [ecx+0xC]
        mov edi, offset public_5cb7ec
        mov esi, eax
        mov ecx, 0xA
        xor edx, edx
        repe cmpsb
        je public_43f69a
        mov edi, offset public_5cb804
        mov esi, eax
        mov ecx, 5
        xor edx, edx
        repe cmpsb
        je public_43f69a
        mov esi, eax
        mov edi, offset public_5cb7f8
        mov ecx, 0xC
        xor eax, eax
        repe cmpsb
        jne public_43f706
        public_43f69a : nop
        mov eax, dword ptr ds : [ebx+0x374]
        test eax, eax
        je public_43f6e6
        mov eax, dword ptr ds : [ebx+0x370]
        test eax, eax
        mov edx, dword ptr ds : [public_5c7078]
        jne public_43f6b6
        mov eax, edx
        public_43f6b6 : nop
        mov esi, eax
        mov edi, offset public_5cb804
        mov ecx, 5
        xor eax, eax
        repe cmpsb
        je public_43f6e6
        mov eax, dword ptr ds : [ebx+0x370]
        test eax, eax
        jne public_43f6d4
        mov eax, edx
        public_43f6d4 : nop
        mov edi, offset public_5cb7f8
        mov esi, eax
        mov ecx, 0xC
        xor edx, edx
        repe cmpsb
        jne public_43f706
        public_43f6e6 : nop
        call public_4c3e10
        test eax, eax
        je public_43f706
/*FIXUP push offset public_5cb2d8 @0x43f6ef*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb2d8
/*FIXUP push offset public_5cb2d8 @0x43f6f4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb2d8
        push 0
        push 0
        push 4
        mov ecx, ebx
        call public_43f8e0
        public_43f706 : nop
        mov eax, dword ptr ds : [ebx+0x3B0]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_43f77e
        public_43f712 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        jne public_43f71e
        mov eax, dword ptr ds : [public_5c7078]
        public_43f71e : nop
        mov edx, dword ptr ds : [ebx]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x94]
        mov esi, eax
        test esi, esi
        je public_43f774
        mov ecx, dword ptr ds : [ebx+0x39C]
        mov eax, dword ptr ds : [esi]
        push 0
        push ecx
        push 4
        mov ecx, esi
        call dword ptr ds : [eax+0xA8]
        mov edx, dword ptr ds : [esi]
        push 0
        push 0
        push 3
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi]
        push 0
        push 1
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0xA8]
        mov edx, dword ptr ds : [esi]
        push 0
        push 1
        push 2
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        public_43f774 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ebx+0x3B0]
        jne public_43f712
        public_43f77e : nop
        mov edi, dword ptr ds : [ebx+0x3B0]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        lea ebp, ds:[ebx+0x3AC]
        je public_43f7a5
        public_43f790 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebp
        call public_4324c0
        cmp esi, edi
        jne public_43f790
        public_43f7a5 : nop
        mov eax, dword ptr ds : [ebx+0x3A4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_43f81d
        public_43f7b1 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        jne public_43f7bd
        mov eax, dword ptr ds : [public_5c7078]
        public_43f7bd : nop
        mov edx, dword ptr ds : [ebx]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x94]
        mov esi, eax
        test esi, esi
        je public_43f813
        mov ecx, dword ptr ds : [ebx+0x39C]
        mov eax, dword ptr ds : [esi]
        push 0
        push ecx
        push 4
        mov ecx, esi
        call dword ptr ds : [eax+0xA8]
        mov edx, dword ptr ds : [esi]
        push 0
        push 0
        push 3
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi]
        push 0
        push 1
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0xA8]
        mov edx, dword ptr ds : [esi]
        push 0
        push 1
        push 2
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        public_43f813 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ebx+0x3A4]
        jne public_43f7b1
        public_43f81d : nop
        mov ebp, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp+4]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_43f8b8
        public_43f832 : nop
        mov edi, ebx
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [edi]
        mov ebx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        lea esi, ds:[edi+8]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_43f891
        push eax
        mov ecx, esi
        call dword ptr ds : [public_5c6fa8]
        cmp byte ptr ds : [eax], 0
        je public_43f87e
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_5c6fa8]
        cmp byte ptr ds : [eax], 0xFF
        je public_43f87e
        mov edx, dword ptr ds : [esi+4]
        push edx
        mov ecx, esi
        call dword ptr ds : [public_5c6fa8]
        dec byte ptr ds : [eax]
        jmp public_43f891
        public_43f87e : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 2
        dec ecx
        push eax
        push ecx
        mov ecx, esi
        call public_442da0
        public_43f891 : nop
        xor eax, eax
        push edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 4
        dec ecx
        cmp ebx, eax
        mov dword ptr ss : [ebp+8], ecx
        jne public_43f832
        public_43f8b8 : nop
        mov ecx, dword ptr ss : [esp+0x248]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x244
        ret 
        UNREACHABLE_TRAP(0x43f2e0)
    }
}

#undef public_43f330
#undef public_43f455
#undef public_43f463
#undef public_43f46e
#undef public_43f4dd
#undef public_43f4eb
#undef public_43f4ef
#undef public_43f530
#undef public_43f55b
#undef public_43f58e
#undef public_43f5a0
#undef public_43f5c5
#undef public_43f5c9
#undef public_43f5ce
#undef public_43f5fb
#undef public_43f607
#undef public_43f64d
#undef public_43f661
#undef public_43f69a
#undef public_43f6b6
#undef public_43f6d4
#undef public_43f6e6
#undef public_43f706
#undef public_43f712
#undef public_43f71e
#undef public_43f774
#undef public_43f77e
#undef public_43f790
#undef public_43f7a5
#undef public_43f7b1
#undef public_43f7bd
#undef public_43f813
#undef public_43f81d
#undef public_43f832
#undef public_43f87e
#undef public_43f891
#undef public_43f8b8
