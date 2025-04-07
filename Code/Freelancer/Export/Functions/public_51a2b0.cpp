#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51a2b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfedf);

#define public_51a325 _public_51a325
#define public_51a340 _public_51a340
#define public_51a37c _public_51a37c
#define public_51a3a5 _public_51a3a5
#define public_51a3fc _public_51a3fc
#define public_51a41b _public_51a41b
#define public_51a43a _public_51a43a
#define public_51a457 _public_51a457
#define public_51a469 _public_51a469
#define public_51a47d _public_51a47d
#define public_51a4eb _public_51a4eb
#define public_51a4fc _public_51a4fc
#define public_51a511 _public_51a511
#define public_51a536 _public_51a536
#define public_51a55b _public_51a55b
#define public_51a564 _public_51a564
#define public_51a5bc _public_51a5bc
#define public_51a5c7 _public_51a5c7
#define public_51a5d6 _public_51a5d6
#define public_51a5ec _public_51a5ec
#define public_51a620 _public_51a620
#define public_51a629 _public_51a629

PROC_DECLARE(0x51a2b0, internal_51a2b0, public_51a2b0);
extern "C" NAKED register_t __cdecl internal_51a2b0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        push 0xFFFFFFFF
/*FIXUP push public_5bfedf @0x51a2b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfedf
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        mov eax, 0x157C
        call public_5b7e90
        push ebx
        push esi
        mov esi, ecx
        push edi
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c605c]
        mov eax, dword ptr ss : [ebp+8]
        xor ebx, ebx
        push ebx
        push eax
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x159C], ebx
        call dword ptr ds : [public_5c6058]
        test al, al
        jne public_51a325
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x5A0
/*FIXUP push offset public_5dbacc @0x51a310*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbacc
        mov eax, 0x100002
/*FIXUP push offset public_5dbdd0 @0x51a31a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbdd0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_51a325 : nop
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_51a47d
        mov edi, dword ptr ds : [public_5c6cf4]
        lea ecx, ds:[ecx]
/*FIXUP public_51a340 : nop
        push offset public_5dbd44 @0x51a340*/
  FIXUP public_51a340 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbd44
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_51a37c
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x5A7
/*FIXUP push offset public_5dbacc @0x51a362*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbacc
        mov eax, 0x100002
/*FIXUP push offset public_5dbd98 @0x51a36c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbd98
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_51a469
/*FIXUP public_51a37c : nop
        push offset public_5dbd88 @0x51a37c*/
  FIXUP public_51a37c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbd88
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_51a469
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_51a469
/*FIXUP public_51a3a5 : nop
        push offset public_5dbd80 @0x51a3a5*/
  FIXUP public_51a3a5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbd80
        lea ecx, ss:[esp+0x24]
        call edi
        test al, al
        lea ecx, ss:[esp+0x20]
        je public_51a3fc
        push 1
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x18]
        push 0
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x10]
        push 2
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6cfc]
        fld qword ptr ss : [esp+0x10]
        fstp dword ptr ds : [esi+0x100]
        fld qword ptr ss : [esp+0x18]
        fstp dword ptr ds : [esi+0x104]
        fstp dword ptr ds : [esi+0x108]
        jmp public_51a457
/*FIXUP public_51a3fc : nop
        push offset public_5dbd6c @0x51a3fc*/
  FIXUP public_51a3fc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbd6c
        call edi
        test al, al
        lea ecx, ss:[esp+0x20]
        je public_51a41b
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x128]
        jmp public_51a457
/*FIXUP public_51a41b : nop
        push offset public_5dbd58 @0x51a41b*/
  FIXUP public_51a41b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbd58
        call edi
        test al, al
        lea ecx, ss:[esp+0x20]
        je public_51a43a
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x12C]
        jmp public_51a457
/*FIXUP public_51a43a : nop
        push offset public_5dbd4c @0x51a43a*/
  FIXUP public_51a43a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbd4c
        call edi
        test al, al
        je public_51a457
        push 0
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [esi+0x130]
        public_51a457 : nop
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_51a3a5
        public_51a469 : nop
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_51a340
        xor ebx, ebx
        public_51a47d : nop
        lea eax, ss:[esp+0x1448]
        mov dword ptr ss : [esp+0x1594], 1
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x1450]
        mov byte ptr ss : [esp+0x159C], 2
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x1458], 0xFFFFFFFF
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_51a511
        cmp dword ptr ss : [esp+0x145C], ebx
        je public_51a4fc
        mov eax, dword ptr ss : [esp+0x1460]
        cmp eax, ebx
        je public_51a4eb
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x1460], ebx
        mov dword ptr ss : [esp+0x1464], ebx
        public_51a4eb : nop
        mov eax, dword ptr ss : [esp+0x145C]
        push eax
        call esi
        mov dword ptr ss : [esp+0x145C], ebx
        public_51a4fc : nop
        mov ecx, dword ptr ss : [esp+0x1458]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x1458], 0xFFFFFFFF
        public_51a511 : nop
        mov eax, dword ptr ss : [esp+0x1460]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_5c71d8]
        je public_51a536
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x1460], ebx
        mov dword ptr ss : [esp+0x1464], ebx
        public_51a536 : nop
        mov eax, dword ptr ss : [esp+0x144C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1468], ebx
        je public_51a564
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_51a55b
        cmp cl, 0xFF
        je public_51a55b
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_51a564
        public_51a55b : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_51a564 : nop
        mov dword ptr ss : [esp+0x144C], ebx
        mov dword ptr ss : [esp+0x1450], ebx
        mov dword ptr ss : [esp+0x1454], ebx
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x159C], 3
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x30], 0xFFFFFFFF
        je public_51a5d6
        cmp dword ptr ss : [esp+0x34], ebx
        je public_51a5c7
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, ebx
        je public_51a5bc
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        public_51a5bc : nop
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x34], ebx
        public_51a5c7 : nop
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        call esi
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        public_51a5d6 : nop
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, ebx
        je public_51a5ec
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        public_51a5ec : nop
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x40], ebx
        je public_51a629
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_51a620
        cmp cl, 0xFF
        je public_51a620
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x158C]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        public_51a620 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_51a629 : nop
        mov ecx, dword ptr ss : [esp+0x158C]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x51a2b0)
    }
}

#undef public_51a325
#undef public_51a340
#undef public_51a37c
#undef public_51a3a5
#undef public_51a3fc
#undef public_51a41b
#undef public_51a43a
#undef public_51a457
#undef public_51a469
#undef public_51a47d
#undef public_51a4eb
#undef public_51a4fc
#undef public_51a511
#undef public_51a536
#undef public_51a55b
#undef public_51a564
#undef public_51a5bc
#undef public_51a5c7
#undef public_51a5d6
#undef public_51a5ec
#undef public_51a620
#undef public_51a629
