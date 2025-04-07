#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_50c950);
CLANG_FORWARD_PROC_SYMBOL(public_50d420);
CLANG_FORWARD_PROC_SYMBOL(public_50d930);
CLANG_FORWARD_PROC_SYMBOL(public_50f3a0);
CLANG_FORWARD_PROC_SYMBOL(public_50fba0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfd4f);

#define public_511098 _public_511098
#define public_5110c0 _public_5110c0
#define public_511115 _public_511115
#define public_51113b _public_51113b
#define public_511177 _public_511177
#define public_51119e _public_51119e
#define public_51120d _public_51120d
#define public_51120f _public_51120f
#define public_511242 _public_511242
#define public_51127e _public_51127e
#define public_5112ba _public_5112ba
#define public_5112f6 _public_5112f6
#define public_511334 _public_511334
#define public_511367 _public_511367
#define public_51139d _public_51139d
#define public_5113d1 _public_5113d1
#define public_5113e5 _public_5113e5
#define public_5113ef _public_5113ef
#define public_5113f1 _public_5113f1
#define public_511439 _public_511439
#define public_511484 _public_511484
#define public_5114bb _public_5114bb
#define public_5114d0 _public_5114d0
#define public_5114e5 _public_5114e5
#define public_511508 _public_511508
#define public_51152d _public_51152d
#define public_511536 _public_511536
#define public_511599 _public_511599
#define public_5115a3 _public_5115a3
#define public_5115d9 _public_5115d9
#define public_511601 _public_511601
#define public_511610 _public_511610
#define public_511623 _public_511623
#define public_511641 _public_511641
#define public_51165d _public_51165d
#define public_511666 _public_511666

PROC_DECLARE(0x511020, internal_511020, public_511020);
extern "C" NAKED register_t __cdecl internal_511020()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5bfd4f @0x511028*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfd4f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x158C
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        xor ebx, ebx
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x14], 2
        mov byte ptr ss : [esp+0x10], bl
        mov byte ptr ss : [esp+0x11], bl
        mov byte ptr ss : [esp+0x13], bl
        mov byte ptr ss : [esp+0x12], bl
        call dword ptr ds : [public_5c605c]
        mov eax, dword ptr ss : [esp+0x15AC]
        push ebx
        push eax
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x15AC], ebx
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_5113e5
        mov esi, dword ptr ss : [esp+0x15B0]
        mov ebp, dword ptr ds : [public_5c6d24]
        public_511098 : nop
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_5113ef
/*FIXUP push offset public_5caa54 @0x5110aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caa54
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_511098
        lea ecx, ds:[ecx]
        public_5110c0 : nop
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_511098
/*FIXUP push offset public_5c866c @0x5110ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_5110c0
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c6698]
        push eax
        push esi
        call ebp
        add esp, 8
        test eax, eax
        jne public_511098
        xor ebx, ebx
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x14], ebx
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_5113f1
        mov ebp, dword ptr ss : [esp+0x15AC]
/*FIXUP public_511115 : nop
        push offset public_5d6e4c @0x511115*/
  FIXUP public_511115 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6e4c
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_51113b
        push ebx
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+8]
        jmp public_5113d1
        public_51113b : nop
        cmp byte ptr ss : [esp+0x12], bl
        jne public_511177
/*FIXUP push offset public_5db560 @0x511141*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db560
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_511177
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c6698]
        mov ecx, dword ptr ds : [edi+0x10]
        push eax
        push ebp
        call public_50c950
        neg eax
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0x12], al
        jmp public_5113d1
/*FIXUP public_511177 : nop
        push offset public_5db6e0 @0x511177*/
  FIXUP public_511177 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db6e0
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_511242
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, ebx
        je public_51119e
        push eax
        call public_5b7e1d
        add esp, 4
        public_51119e : nop
        push 0x50
        call public_5b7e84
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_51120d
/*FIXUP push offset public_5c865c @0x5111ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c865c
        lea eax, ds:[esi+4]
        push 0x20
        push eax
        mov dword ptr ds : [esi], ebx
        mov byte ptr ds : [eax], bl
        call public_417c50
        mov dword ptr ds : [esi], eax
        mov eax, 0x3F800000
        mov edx, eax
        lea ecx, ds:[esi+0x28]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], edx
        lea ecx, ds:[esi+0x34]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        add esp, 0xC
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], ebx
        mov byte ptr ds : [esi+0x4C], bl
        mov dword ptr ds : [esi+0x48], ebx
        jmp public_51120f
        public_51120d : nop
        xor esi, esi
        public_51120f : nop
        lea ecx, ss:[esp+0x34]
        mov dword ptr ds : [edi+0xC], esi
        call dword ptr ds : [public_5c6698]
        mov ecx, dword ptr ds : [edi+0xC]
        push eax
        push ebp
        call public_50c950
        test eax, eax
        je public_5113d1
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ds : [edi+0xC], ebx
        jmp public_5113d1
        public_511242 : nop
        cmp byte ptr ss : [esp+0x10], bl
        jne public_51127e
/*FIXUP push offset public_5db608 @0x511248*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db608
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_51127e
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c6698]
        mov ecx, dword ptr ds : [edi+0x18]
        push eax
        push ebp
        call public_50f3a0
        neg eax
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0x10], al
        jmp public_5113d1
        public_51127e : nop
        cmp byte ptr ss : [esp+0x11], bl
        jne public_5112ba
/*FIXUP push offset public_5db5d8 @0x511284*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db5d8
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_5112ba
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c6698]
        mov ecx, dword ptr ds : [edi+0x14]
        push eax
        push ebp
        call public_50d420
        neg eax
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0x11], al
        jmp public_5113d1
        public_5112ba : nop
        cmp byte ptr ss : [esp+0x13], bl
        jne public_5112f6
/*FIXUP push offset public_5db61c @0x5112c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db61c
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_5112f6
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c6698]
        mov ecx, dword ptr ds : [edi+0x1C]
        push eax
        push ebp
        call public_50fba0
        neg eax
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0x13], al
        jmp public_5113d1
/*FIXUP public_5112f6 : nop
        push offset public_5db6cc @0x5112f6*/
  FIXUP public_5112f6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db6cc
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        lea ecx, ss:[esp+0x34]
        je public_511334
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fst dword ptr ds : [edi+0x20]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jp public_5113d1
        mov dword ptr ds : [edi+0x20], 0x33D6BF95
        jmp public_5113d1
/*FIXUP public_511334 : nop
        push offset public_5db6b8 @0x511334*/
  FIXUP public_511334 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db6b8
        call dword ptr ds : [public_5c6cf4]
        test al, al
        lea ecx, ss:[esp+0x34]
        je public_511367
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fst dword ptr ds : [edi+0x24]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jp public_5113d1
        mov dword ptr ds : [edi+0x24], 0x33D6BF95
        jmp public_5113d1
/*FIXUP public_511367 : nop
        push offset public_5db6a0 @0x511367*/
  FIXUP public_511367 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db6a0
        call dword ptr ds : [public_5c6cf4]
        test al, al
        lea ecx, ss:[esp+0x34]
        je public_51139d
        push ebx
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x20]
        fld dword ptr ds : [edi+0x28]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jp public_5113d1
        mov dword ptr ds : [edi+0x28], 0x33D6BF95
        jmp public_5113d1
/*FIXUP public_51139d : nop
        push offset public_5db688 @0x51139d*/
  FIXUP public_51139d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db688
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_5113d1
        push ebx
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x24]
        fld dword ptr ds : [edi+0x2C]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jp public_5113d1
        mov dword ptr ds : [edi+0x2C], 0x33D6BF95
        public_5113d1 : nop
        lea ecx, ss:[esp+0x34]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_511115
        jmp public_5113f1
        public_5113e5 : nop
        mov dword ptr ss : [esp+0x14], 1
        jmp public_5113f1
        public_5113ef : nop
        xor ebx, ebx
        public_5113f1 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        call public_50d930
        lea eax, ss:[esp+0x145C]
        mov dword ptr ss : [esp+0x15A4], 1
        mov dword ptr ss : [esp+0x30], eax
        mov ecx, dword ptr ds : [public_5c7080]
        mov esi, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x145C]
        mov byte ptr ss : [esp+0x15A4], 2
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [esp+0x1464]
        cmp eax, esi
        jae public_511439
        mov esi, eax
        public_511439 : nop
        cmp esi, ebx
        mov ebp, dword ptr ds : [public_5c709c]
        jbe public_511484
        mov ecx, dword ptr ss : [esp+0x1460]
        sub eax, esi
        push eax
        lea edx, ds:[ecx+esi]
        push edx
        push ecx
        call ebp
        mov edi, dword ptr ss : [esp+0x1470]
        add esp, 0xC
        push ebx
        sub edi, esi
        push edi
        lea ecx, ss:[esp+0x1464]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_511484
        mov edx, dword ptr ss : [esp+0x1460]
        mov dword ptr ss : [esp+0x1464], edi
        mov byte ptr ds : [edx+edi], bl
        public_511484 : nop
        mov eax, dword ptr ss : [esp+0x146C]
        or esi, 0xFFFFFFFF
        cmp eax, esi
        je public_5114e5
        cmp dword ptr ss : [esp+0x1470], ebx
        je public_5114d0
        mov eax, dword ptr ss : [esp+0x1474]
        cmp eax, ebx
        je public_5114bb
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x1474], ebx
        mov dword ptr ss : [esp+0x1478], ebx
        public_5114bb : nop
        mov eax, dword ptr ss : [esp+0x1470]
        push eax
        call dword ptr ds : [public_5c6ef8]
        mov dword ptr ss : [esp+0x1470], ebx
        public_5114d0 : nop
        mov ecx, dword ptr ss : [esp+0x146C]
        push ecx
        call dword ptr ds : [public_5c6ef8]
        mov dword ptr ss : [esp+0x146C], esi
        public_5114e5 : nop
        mov eax, dword ptr ss : [esp+0x1474]
        cmp eax, ebx
        je public_511508
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [esp+0x1474], ebx
        mov dword ptr ss : [esp+0x1478], ebx
        public_511508 : nop
        mov eax, dword ptr ss : [esp+0x1460]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x147C], ebx
        je public_511536
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_51152d
        cmp cl, 0xFF
        je public_51152d
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_511536
        public_51152d : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_511536 : nop
        mov dword ptr ss : [esp+0x1460], ebx
        mov dword ptr ss : [esp+0x1464], ebx
        mov dword ptr ss : [esp+0x1468], ebx
        mov ecx, dword ptr ss : [esp+0x38]
        cmp ecx, ebx
        mov edx, dword ptr ds : [public_5c7080]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x15A4], 3
        je public_511599
        mov al, byte ptr ds : [ecx-1]
        cmp al, bl
        je public_511599
        cmp al, 0xFF
        je public_511599
        mov esi, ecx
        push 1
        lea ecx, ss:[esp+0x38]
        call dword ptr ds : [public_5c7084]
        push esi
        call dword ptr ds : [public_5c6f94]
        add esp, 4
        push eax
        push esi
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c7088]
        mov ecx, dword ptr ss : [esp+0x38]
        public_511599 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        cmp eax, edi
        jae public_5115a3
        mov edi, eax
        public_5115a3 : nop
        cmp edi, ebx
        jbe public_5115d9
        sub eax, edi
        push eax
        lea eax, ds:[ecx+edi]
        push eax
        push ecx
        call ebp
        mov esi, dword ptr ss : [esp+0x48]
        add esp, 0xC
        push ebx
        sub esi, edi
        push esi
        lea ecx, ss:[esp+0x3C]
        call dword ptr ds : [public_5c708c]
        test al, al
        mov ecx, dword ptr ss : [esp+0x38]
        je public_5115d9
        mov dword ptr ss : [esp+0x3C], esi
        mov byte ptr ds : [ecx+esi], bl
        mov ecx, dword ptr ss : [esp+0x38]
        public_5115d9 : nop
        mov eax, dword ptr ss : [esp+0x44]
        or esi, 0xFFFFFFFF
        cmp eax, esi
        je public_511623
        cmp dword ptr ss : [esp+0x48], ebx
        je public_511610
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, ebx
        je public_511601
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        public_511601 : nop
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        call dword ptr ds : [public_5c6ef8]
        mov dword ptr ss : [esp+0x48], ebx
        public_511610 : nop
        mov eax, dword ptr ss : [esp+0x44]
        push eax
        call dword ptr ds : [public_5c6ef8]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x44], esi
        public_511623 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, ebx
        je public_511641
        push eax
        call dword ptr ds : [public_5c71d8]
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 4
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        public_511641 : nop
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x54], ebx
        je public_511666
        lea eax, ds:[ecx-1]
        mov cl, byte ptr ds : [eax]
        cmp cl, bl
        je public_51165d
        cmp cl, 0xFF
        je public_51165d
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_511666
        public_51165d : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_511666 : nop
        mov ecx, dword ptr ss : [esp+0x159C]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1598
        ret 8
        UNREACHABLE_TRAP(0x511020)
    }
}

#undef public_511098
#undef public_5110c0
#undef public_511115
#undef public_51113b
#undef public_511177
#undef public_51119e
#undef public_51120d
#undef public_51120f
#undef public_511242
#undef public_51127e
#undef public_5112ba
#undef public_5112f6
#undef public_511334
#undef public_511367
#undef public_51139d
#undef public_5113d1
#undef public_5113e5
#undef public_5113ef
#undef public_5113f1
#undef public_511439
#undef public_511484
#undef public_5114bb
#undef public_5114d0
#undef public_5114e5
#undef public_511508
#undef public_51152d
#undef public_511536
#undef public_511599
#undef public_5115a3
#undef public_5115d9
#undef public_511601
#undef public_511610
#undef public_511623
#undef public_511641
#undef public_51165d
#undef public_511666
