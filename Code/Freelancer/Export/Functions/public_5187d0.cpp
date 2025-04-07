#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5187d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfe9f);

#define public_518854 _public_518854
#define public_518868 _public_518868
#define public_518898 _public_518898
#define public_5188aa _public_5188aa
#define public_518911 _public_518911
#define public_518913 _public_518913
#define public_518983 _public_518983
#define public_518994 _public_518994
#define public_5189a9 _public_5189a9
#define public_5189ce _public_5189ce
#define public_5189f3 _public_5189f3
#define public_5189fc _public_5189fc
#define public_518a50 _public_518a50
#define public_518a5b _public_518a5b
#define public_518a6a _public_518a6a
#define public_518a81 _public_518a81
#define public_518aa0 _public_518aa0
#define public_518aa9 _public_518aa9

PROC_DECLARE(0x5187d0, internal_5187d0, public_5187d0);
extern "C" NAKED register_t __cdecl internal_5187d0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bfe9f @0x5187d8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfe9f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1578
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0xC], edi
        call dword ptr ds : [public_5c605c]
        mov esi, dword ptr ds : [public_5c69a0]
        xor ebx, ebx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x158C], ebx
        call esi
        lea ecx, ss:[esp+0x18]
        call esi
        mov esi, dword ptr ss : [esp+0x1594]
        push ebx
        push esi
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c6058]
        test al, al
        jne public_518854
        push esi
        push 0x347
/*FIXUP push offset public_5dbacc @0x51883a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbacc
        mov eax, 0x100002
/*FIXUP push offset public_5dbbe0 @0x518844*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbbe0
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_518854 : nop
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_5188aa
        mov edi, dword ptr ds : [public_5c6050]
/*FIXUP public_518868 : nop
        push offset public_5dbb94 @0x518868*/
  FIXUP public_518868 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbb94
        lea ecx, ss:[esp+0x20]
        call edi
        test al, al
        je public_518898
        mov ecx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x34E
/*FIXUP push offset public_5dbacc @0x518883*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbacc
        mov eax, 0x100002
/*FIXUP push offset public_5dbba0 @0x51888d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbba0
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_518898 : nop
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_518868
        mov edi, dword ptr ss : [esp+0xC]
        public_5188aa : nop
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+0x18]
        fmul dword ptr ds : [public_5c77f4]
        mov eax, dword ptr ds : [edi]
        push edi
        fptan 
        fstp st(0)
        fstp qword ptr ss : [esp+0x10]
        call dword ptr ds : [eax+0x1C]
        fmul dword ptr ds : [public_5c77f4]
        fptan 
        fstp st(0)
        fdivr qword ptr ss : [esp+0xC]
        fld qword ptr ds : [public_5dba18]
        fsubr st, st(1)
        fabs 
        fcomp qword ptr ds : [public_5d5b58]
        fnstsw ax
        test ah, 1
        jne public_518911
        mov ecx, dword ptr ds : [public_5c6d18]
        sub esp, 8
        fstp qword ptr ss : [esp]
        push 0x35E
/*FIXUP push offset public_5dbacc @0x5188fa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbacc
        mov eax, 0x100002
/*FIXUP push offset public_5db9d0 @0x518904*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db9d0
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x18
        jmp public_518913
        public_518911 : nop
        fstp st(0)
        public_518913 : nop
        push ebp
        lea edx, ss:[esp+0x1448]
        mov dword ptr ss : [esp+0x1590], 1
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x1450]
        mov byte ptr ss : [esp+0x1598], 2
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x1458], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_5c6efc]
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_5189a9
        cmp dword ptr ss : [esp+0x145C], ebx
        je public_518994
        mov eax, dword ptr ss : [esp+0x1460]
        cmp eax, ebx
        je public_518983
        push eax
        call ebp
        mov dword ptr ss : [esp+0x1460], ebx
        mov dword ptr ss : [esp+0x1464], ebx
        public_518983 : nop
        mov edx, dword ptr ss : [esp+0x145C]
        push edx
        call esi
        mov dword ptr ss : [esp+0x145C], ebx
        public_518994 : nop
        mov eax, dword ptr ss : [esp+0x1458]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1458], 0xFFFFFFFF
        public_5189a9 : nop
        mov eax, dword ptr ss : [esp+0x1460]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_5c71d8]
        je public_5189ce
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x1460], ebx
        mov dword ptr ss : [esp+0x1464], ebx
        public_5189ce : nop
        mov eax, dword ptr ss : [esp+0x144C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1468], ebx
        je public_5189fc
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_5189f3
        cmp cl, 0xFF
        je public_5189f3
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_5189fc
        public_5189f3 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5189fc : nop
        mov dword ptr ss : [esp+0x144C], ebx
        mov dword ptr ss : [esp+0x1450], ebx
        mov dword ptr ss : [esp+0x1454], ebx
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x1598], 3
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x30], 0xFFFFFFFF
        je public_518a6a
        cmp dword ptr ss : [esp+0x34], ebx
        je public_518a5b
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, ebx
        je public_518a50
        push eax
        call ebp
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        public_518a50 : nop
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        call esi
        mov dword ptr ss : [esp+0x34], ebx
        public_518a5b : nop
        mov ecx, dword ptr ss : [esp+0x30]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x30], 0xFFFFFFFF
        public_518a6a : nop
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, ebx
        pop ebp
        je public_518a81
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        public_518a81 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x3C], ebx
        je public_518aa9
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_518aa0
        cmp cl, 0xFF
        je public_518aa0
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_518aa9
        public_518aa0 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_518aa9 : nop
        mov ecx, dword ptr ss : [esp+0x1584]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1584
        ret 4
        UNREACHABLE_TRAP(0x5187d0)
    }
}

#undef public_518854
#undef public_518868
#undef public_518898
#undef public_5188aa
#undef public_518911
#undef public_518913
#undef public_518983
#undef public_518994
#undef public_5189a9
#undef public_5189ce
#undef public_5189f3
#undef public_5189fc
#undef public_518a50
#undef public_518a5b
#undef public_518a6a
#undef public_518a81
#undef public_518aa0
#undef public_518aa9
