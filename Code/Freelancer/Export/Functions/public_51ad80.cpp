#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51ad80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfedf);

#define public_51adf5 _public_51adf5
#define public_51ae07 _public_51ae07
#define public_51ae43 _public_51ae43
#define public_51ae64 _public_51ae64
#define public_51aebc _public_51aebc
#define public_51aeca _public_51aeca
#define public_51aedc _public_51aedc
#define public_51af4a _public_51af4a
#define public_51af5b _public_51af5b
#define public_51af70 _public_51af70
#define public_51af95 _public_51af95
#define public_51afba _public_51afba
#define public_51afc3 _public_51afc3
#define public_51b01b _public_51b01b
#define public_51b026 _public_51b026
#define public_51b035 _public_51b035
#define public_51b04b _public_51b04b
#define public_51b07f _public_51b07f
#define public_51b088 _public_51b088

PROC_DECLARE(0x51ad80, internal_51ad80, public_51ad80);
extern "C" NAKED register_t __cdecl internal_51ad80()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        push 0xFFFFFFFF
/*FIXUP push public_5bfedf @0x51ad88*/
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
        jne public_51adf5
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x6E3
/*FIXUP push offset public_5dbacc @0x51ade0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbacc
        mov eax, 0x100002
/*FIXUP push offset public_5dbf0c @0x51adea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbf0c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_51adf5 : nop
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_51aedc
/*FIXUP public_51ae07 : nop
        push offset public_5dbea4 @0x51ae07*/
  FIXUP public_51ae07 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbea4
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_51ae43
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x6EA
/*FIXUP push offset public_5dbacc @0x51ae29*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbacc
        mov eax, 0x100002
/*FIXUP push offset public_5dbed0 @0x51ae33*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbed0
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_51aeca
/*FIXUP public_51ae43 : nop
        push offset public_5dbec0 @0x51ae43*/
  FIXUP public_51ae43 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbec0
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_51aeca
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_51aeca
/*FIXUP public_51ae64 : nop
        push offset public_5dbeb0 @0x51ae64*/
  FIXUP public_51ae64 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbeb0
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6cf4]
        test al, al
        je public_51aebc
        push 1
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x18]
        push ebx
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
        public_51aebc : nop
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_51ae64
        public_51aeca : nop
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_51ae07
        public_51aedc : nop
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
        je public_51af70
        cmp dword ptr ss : [esp+0x145C], ebx
        je public_51af5b
        mov eax, dword ptr ss : [esp+0x1460]
        cmp eax, ebx
        je public_51af4a
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x1460], ebx
        mov dword ptr ss : [esp+0x1464], ebx
        public_51af4a : nop
        mov eax, dword ptr ss : [esp+0x145C]
        push eax
        call esi
        mov dword ptr ss : [esp+0x145C], ebx
        public_51af5b : nop
        mov ecx, dword ptr ss : [esp+0x1458]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x1458], 0xFFFFFFFF
        public_51af70 : nop
        mov eax, dword ptr ss : [esp+0x1460]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_5c71d8]
        je public_51af95
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x1460], ebx
        mov dword ptr ss : [esp+0x1464], ebx
        public_51af95 : nop
        mov eax, dword ptr ss : [esp+0x144C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1468], ebx
        je public_51afc3
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_51afba
        cmp cl, 0xFF
        je public_51afba
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_51afc3
        public_51afba : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_51afc3 : nop
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
        je public_51b035
        cmp dword ptr ss : [esp+0x34], ebx
        je public_51b026
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, ebx
        je public_51b01b
        push eax
        call dword ptr ds : [public_5c6efc]
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        public_51b01b : nop
        mov ecx, dword ptr ss : [esp+0x34]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x34], ebx
        public_51b026 : nop
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        call esi
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        public_51b035 : nop
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, ebx
        je public_51b04b
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        public_51b04b : nop
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x40], ebx
        je public_51b088
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_51b07f
        cmp cl, 0xFF
        je public_51b07f
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
        public_51b07f : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_51b088 : nop
        mov ecx, dword ptr ss : [esp+0x158C]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x51ad80)
    }
}

#undef public_51adf5
#undef public_51ae07
#undef public_51ae43
#undef public_51ae64
#undef public_51aebc
#undef public_51aeca
#undef public_51aedc
#undef public_51af4a
#undef public_51af5b
#undef public_51af70
#undef public_51af95
#undef public_51afba
#undef public_51afc3
#undef public_51b01b
#undef public_51b026
#undef public_51b035
#undef public_51b04b
#undef public_51b07f
#undef public_51b088
