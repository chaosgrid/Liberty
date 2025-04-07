#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a82d0);
CLANG_FORWARD_PROC_SYMBOL(public_5ab3e0);
CLANG_FORWARD_PROC_SYMBOL(public_5ab400);
CLANG_FORWARD_PROC_SYMBOL(public_5ab4b0);
CLANG_FORWARD_PROC_SYMBOL(public_5ac2a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5357);

#define public_5a8347 _public_5a8347
#define public_5a8372 _public_5a8372
#define public_5a83af _public_5a83af
#define public_5a83cc _public_5a83cc
#define public_5a83f5 _public_5a83f5
#define public_5a840c _public_5a840c
#define public_5a8430 _public_5a8430
#define public_5a845c _public_5a845c
#define public_5a8482 _public_5a8482
#define public_5a8495 _public_5a8495
#define public_5a84b6 _public_5a84b6
#define public_5a8554 _public_5a8554
#define public_5a8560 _public_5a8560
#define public_5a8571 _public_5a8571
#define public_5a8601 _public_5a8601
#define public_5a860d _public_5a860d
#define public_5a861b _public_5a861b
#define public_5a8637 _public_5a8637
#define public_5a8649 _public_5a8649
#define public_5a8671 _public_5a8671
#define public_5a8700 _public_5a8700
#define public_5a870b _public_5a870b
#define public_5a8716 _public_5a8716
#define public_5a8730 _public_5a8730

PROC_DECLARE(0x5a82d0, internal_5a82d0, public_5a82d0);
extern "C" NAKED register_t __cdecl internal_5a82d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c5357 @0x5a82d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5357
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x15A0
        mov dword ptr fs : [0], esp
        call public_5b7e90
        xor eax, eax
        push ebx
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], eax
        push esi
        mov dword ptr ss : [esp+0x34], eax
        xor ebx, ebx
        push edi
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x3C], eax
        mov byte ptr ss : [esp+0xF], bl
        call dword ptr ds : [public_5c605c]
        mov ecx, dword ptr ss : [esp+0x15C0]
        push ebx
        push ecx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x15BC], ebx
        call dword ptr ds : [public_5c6058]
        lea ecx, ss:[esp+0x44]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_5a8671
        push ebp
        mov ebp, dword ptr ds : [public_5c6c98]
        public_5a8347 : nop
        mov esi, dword ptr ds : [public_5c6050]
/*FIXUP push offset public_5e2038 @0x5a834d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2038
        lea ecx, ss:[esp+0x4C]
        call esi
        test al, al
        lea ecx, ss:[esp+0x48]
        je public_5a840c
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_5a8649
        public_5a8372 : nop
        mov esi, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5e64a4 @0x5a8378*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e64a4
        lea ecx, ss:[esp+0x4C]
        call esi
        test al, al
        lea ecx, ss:[esp+0x48]
        je public_5a83cc
        call dword ptr ds : [public_5c6698]
        mov esi, eax
        cmp esi, ebx
        je public_5a83f5
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        jb public_5a83af
        mov eax, 0x1F
        public_5a83af : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, offset public_615aec
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_615aec], bl
        jmp public_5a83f5
/*FIXUP public_5a83cc : nop
        push offset public_5e649c @0x5a83cc*/
  FIXUP public_5a83cc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e649c
        call esi
        test al, al
        je public_5a83f5
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6c94]
        add esp, 8
        mov byte ptr ss : [esp+0x13], 1
        public_5a83f5 : nop
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_5a8372
        jmp public_5a8649
/*FIXUP public_5a840c : nop
        push offset public_5e6490 @0x5a840c*/
  FIXUP public_5a840c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6490
        call esi
        test al, al
        lea ecx, ss:[esp+0x48]
        je public_5a8495
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_5a8649
        lea esp, ss:[esp]
        public_5a8430 : nop
        mov esi, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5e6484 @0x5a8436*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6484
        lea ecx, ss:[esp+0x4C]
        call esi
        test al, al
        lea ecx, ss:[esp+0x48]
        je public_5a845c
        call dword ptr ds : [public_5c6698]
        push eax
        mov ecx, offset public_67e7b8
        call public_5ab400
        jmp public_5a8482
/*FIXUP public_5a845c : nop
        push offset public_5e647c @0x5a845c*/
  FIXUP public_5a845c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e647c
        call esi
        test al, al
        je public_5a8482
        push ebx
        lea ecx, ss:[esp+0x4C]
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        push eax
        mov ecx, offset public_67e7b8
        call public_5ab4b0
        public_5a8482 : nop
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_5a8430
        jmp public_5a8649
/*FIXUP public_5a8495 : nop
        push offset public_5e6474 @0x5a8495*/
  FIXUP public_5a8495 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6474
        call esi
        test al, al
        je public_5a8649
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_5a8649
        public_5a84b6 : nop
        mov esi, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5c9ca4 @0x5a84bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9ca4
        lea ecx, ss:[esp+0x4C]
        call esi
        test al, al
        lea ecx, ss:[esp+0x48]
        je public_5a8571
        call ebp
        mov cl, byte ptr ss : [esp+0x13]
        mov esi, eax
        push esi
        mov byte ptr ss : [esp+0x18], cl
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
        push esi
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c6fb0]
        mov edx, dword ptr ds : [public_5c705c]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, offset public_67e940
        mov byte ptr ss : [esp+0x15C4], 1
        call dword ptr ds : [public_5c7060]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x15B8], bl
        je public_5a8560
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_5a8554
        cmp cl, 0xFF
        je public_5a8554
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        jmp public_5a8637
        public_5a8554 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_5a8560 : nop
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        jmp public_5a8637
/*FIXUP public_5a8571 : nop
        push offset public_5e6470 @0x5a8571*/
  FIXUP public_5a8571 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6470
        call esi
        test al, al
        lea ecx, ss:[esp+0x48]
        je public_5a861b
        call ebp
        mov dl, byte ptr ss : [esp+0x13]
        mov esi, eax
        push esi
        mov byte ptr ss : [esp+0x28], dl
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
        push esi
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c6fb0]
        mov eax, dword ptr ds : [public_5c705c]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, offset public_67e950
        mov byte ptr ss : [esp+0x15C4], 2
        call dword ptr ds : [public_5c7060]
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x15B8], bl
        je public_5a860d
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_5a8601
        cmp cl, 0xFF
        je public_5a8601
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        jmp public_5a8637
        public_5a8601 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_5b7e1d
        add esp, 4
        public_5a860d : nop
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        jmp public_5a8637
/*FIXUP public_5a861b : nop
        push offset public_5e6468 @0x5a861b*/
  FIXUP public_5a861b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6468
        call esi
        test al, al
        je public_5a8637
        lea ecx, ss:[esp+0x48]
        call ebp
        push eax
        mov ecx, offset public_67e7b8
        call public_5ab3e0
        public_5a8637 : nop
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_5a84b6
        public_5a8649 : nop
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_5a8347
        cmp byte ptr ss : [esp+0x13], bl
        pop ebp
        je public_5a8671
        lea eax, ss:[esp+0x30]
        push eax
        mov ecx, offset public_67e7b8
        call public_5ac2a0
        public_5a8671 : nop
        lea ecx, ss:[esp+0x146C]
        mov dword ptr ss : [esp+0x15B4], 3
        mov dword ptr ss : [esp+0x40], ecx
        lea ecx, ss:[esp+0x146C]
        mov byte ptr ss : [esp+0x15B4], 4
        call dword ptr ds : [public_5c604c]
        push 1
        lea ecx, ss:[esp+0x1470]
        mov byte ptr ss : [esp+0x15B8], 3
        call dword ptr ds : [public_5c7084]
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x15BC], 5
        call dword ptr ds : [public_5c707c]
        mov eax, dword ptr ss : [esp+0x54]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_5a8716
        cmp dword ptr ss : [esp+0x58], ebx
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_5a870b
        mov eax, dword ptr ss : [esp+0x5C]
        cmp eax, ebx
        je public_5a8700
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x60], ebx
        public_5a8700 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x58], ebx
        public_5a870b : nop
        mov edx, dword ptr ss : [esp+0x54]
        push edx
        call esi
        mov dword ptr ss : [esp+0x54], edi
        public_5a8716 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        cmp eax, ebx
        je public_5a8730
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x60], ebx
        public_5a8730 : nop
        push 1
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x68], ebx
        mov dword ptr ss : [esp+0x15B8], edi
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ss : [esp+0x15AC]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x15AC
        ret 
        UNREACHABLE_TRAP(0x5a82d0)
    }
}

#undef public_5a8347
#undef public_5a8372
#undef public_5a83af
#undef public_5a83cc
#undef public_5a83f5
#undef public_5a840c
#undef public_5a8430
#undef public_5a845c
#undef public_5a8482
#undef public_5a8495
#undef public_5a84b6
#undef public_5a8554
#undef public_5a8560
#undef public_5a8571
#undef public_5a8601
#undef public_5a860d
#undef public_5a861b
#undef public_5a8637
#undef public_5a8649
#undef public_5a8671
#undef public_5a8700
#undef public_5a870b
#undef public_5a8716
#undef public_5a8730
