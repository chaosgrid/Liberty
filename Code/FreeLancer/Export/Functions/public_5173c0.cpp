#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_420dd0);
CLANG_FORWARD_PROC_SYMBOL(public_420fd0);
CLANG_FORWARD_PROC_SYMBOL(public_421070);
CLANG_FORWARD_PROC_SYMBOL(public_517130);
CLANG_FORWARD_PROC_SYMBOL(public_5173c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5bfe5f);

#define public_51744e _public_51744e
#define public_517470 _public_517470
#define public_5174a0 _public_5174a0
#define public_5174cc _public_5174cc
#define public_5174e5 _public_5174e5
#define public_51750d _public_51750d
#define public_51752c _public_51752c
#define public_517560 _public_517560
#define public_517577 _public_517577
#define public_5175ae _public_5175ae
#define public_5175c7 _public_5175c7
#define public_5175e5 _public_5175e5
#define public_51768d _public_51768d
#define public_5176f5 _public_5176f5
#define public_5176f7 _public_5176f7
#define public_517767 _public_517767
#define public_517778 _public_517778
#define public_51778d _public_51778d
#define public_5177b2 _public_5177b2
#define public_5177d7 _public_5177d7
#define public_5177e0 _public_5177e0
#define public_517845 _public_517845
#define public_517856 _public_517856
#define public_51786b _public_51786b
#define public_51788a _public_51788a
#define public_5178b0 _public_5178b0
#define public_5178b9 _public_5178b9

PROC_DECLARE(0x5173c0, internal_5173c0, public_5173c0);
extern "C" NAKED register_t __cdecl internal_5173c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bfe5f @0x5173c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bfe5f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1790
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        lea ecx, ss:[esp+0x234]
        mov dword ptr ss : [esp+0x10], ebp
        call dword ptr ds : [public_5c605c]
        mov esi, dword ptr ss : [esp+0x17AC]
        xor ebx, ebx
        push ebx
        push esi
        lea ecx, ss:[esp+0x23C]
        mov dword ptr ss : [esp+0x17AC], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov byte ptr ss : [esp+0x30], bl
        mov dword ptr ss : [esp+0x134], ebx
        mov byte ptr ss : [esp+0x138], bl
        call dword ptr ds : [public_5c6058]
        test al, al
        jne public_51744e
        push esi
        push 0xE4
/*FIXUP push offset public_5dbacc @0x517434*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbacc
        mov eax, 0x100002
/*FIXUP push offset public_5dba98 @0x51743e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dba98
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_51744e : nop
        push edi
        lea ecx, ss:[esp+0x238]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_5175c7
        mov esi, dword ptr ds : [public_5c6cf4]
        mov edi, dword ptr ds : [public_5c6698]
/*FIXUP public_517470 : nop
        push offset public_5dba90 @0x517470*/
  FIXUP public_517470 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dba90
        lea ecx, ss:[esp+0x23C]
        call dword ptr ds : [public_5c6050]
        test al, al
        lea ecx, ss:[esp+0x238]
        je public_517577
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_5175ae
        nop 
/*FIXUP public_5174a0 : nop
        push offset public_5dba88 @0x5174a0*/
  FIXUP public_5174a0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dba88
        lea ecx, ss:[esp+0x23C]
        call esi
        test al, al
        lea ecx, ss:[esp+0x238]
        je public_5174e5
        call edi
        cmp eax, ebx
        jne public_5174cc
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ss : [esp+0x2C], bl
        jmp public_517560
        public_5174cc : nop
        push eax
        lea ecx, ss:[esp+0x30]
        push 0x104
        push ecx
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [esp+0x28], eax
        jmp public_517560
/*FIXUP public_5174e5 : nop
        push offset public_5c77a0 @0x5174e5*/
  FIXUP public_5174e5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c77a0
        call esi
        test al, al
        lea ecx, ss:[esp+0x238]
        je public_51752c
        call edi
        cmp eax, ebx
        jne public_51750d
        mov dword ptr ss : [esp+0x130], ebx
        mov byte ptr ss : [esp+0x134], bl
        jmp public_517560
        public_51750d : nop
        push eax
        lea edx, ss:[esp+0x138]
        push 0x104
        push edx
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [esp+0x130], eax
        jmp public_517560
/*FIXUP public_51752c : nop
        push offset public_5dba7c @0x51752c*/
  FIXUP public_51752c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dba7c
        call esi
        test al, al
        je public_517560
        push ebx
        lea ecx, ss:[esp+0x23C]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [public_6135a0]
        push 1
        lea ecx, ss:[esp+0x23C]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [public_6135a4]
        public_517560 : nop
        lea ecx, ss:[esp+0x238]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_5174a0
        jmp public_5175ae
/*FIXUP public_517577 : nop
        push offset public_5dba74 @0x517577*/
  FIXUP public_517577 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dba74
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_5175ae
        mov ecx, dword ptr ss : [esp+0x17B0]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0xF9
/*FIXUP push offset public_5dbacc @0x517599*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbacc
        mov eax, 0x100002
/*FIXUP push offset public_5dba20 @0x5175a3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dba20
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_5175ae : nop
        lea ecx, ss:[esp+0x238]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_517470
        mov ebp, dword ptr ss : [esp+0x14]
        public_5175c7 : nop
        cmp dword ptr ss : [esp+0x28], ebx
        je public_5175e5
        lea eax, ss:[esp+0x134]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[ebp+0x190]
        call public_420dd0
        public_5175e5 : nop
        lea edx, ss:[esp+0x1C]
        lea esi, ss:[ebp+0x190]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        call public_420fd0
        mov ecx, esi
        call public_421070
        mov eax, dword ptr ss : [ebp+0x194]
        lea ecx, ss:[esp+0x10]
        push ecx
/*FIXUP push offset _public_517130 @0x517621*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_517130
        push eax
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        call dword ptr ds : [public_5c6620]
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        cmp ecx, 0xFFFFFFFF
        je public_51768d
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x98]
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, eax
        lea edi, ss:[ebp+0x13C]
        mov ecx, 9
        rep movsd
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x90]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x130]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        public_51768d : nop
        mov ecx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [ecx+0x18]
        fmul dword ptr ds : [public_5c77f4]
        mov edx, dword ptr ss : [ebp]
        push ebp
        fptan 
        fstp st(0)
        fstp qword ptr ss : [esp+0x18]
        call dword ptr ds : [edx+0x1C]
        fmul dword ptr ds : [public_5c77f4]
        fptan 
        fstp st(0)
        fdivr qword ptr ss : [esp+0x14]
        fld qword ptr ds : [public_5dba18]
        fsubr st, st(1)
        fabs 
        fcomp qword ptr ds : [public_5d5b58]
        fnstsw ax
        test ah, 1
        jne public_5176f5
        sub esp, 8
        fstp qword ptr ss : [esp]
        push 0x113
/*FIXUP push offset public_5dbacc @0x5176d9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbacc
        mov eax, 0x100002
/*FIXUP push offset public_5db9d0 @0x5176e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db9d0
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x18
        jmp public_5176f7
        public_5176f5 : nop
        fstp st(0)
        public_5176f7 : nop
        lea ecx, ss:[esp+0x1660]
        mov dword ptr ss : [esp+0x17A8], 1
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x1668]
        mov byte ptr ss : [esp+0x17B0], 2
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x1670], 0xFFFFFFFF
        mov ebp, dword ptr ds : [public_5c6efc]
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_51778d
        cmp dword ptr ss : [esp+0x1674], ebx
        je public_517778
        mov eax, dword ptr ss : [esp+0x1678]
        cmp eax, ebx
        je public_517767
        push eax
        call ebp
        mov dword ptr ss : [esp+0x1678], ebx
        mov dword ptr ss : [esp+0x167C], ebx
        public_517767 : nop
        mov ecx, dword ptr ss : [esp+0x1674]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x1674], ebx
        public_517778 : nop
        mov edx, dword ptr ss : [esp+0x1670]
        push edx
        call esi
        mov dword ptr ss : [esp+0x1670], 0xFFFFFFFF
        public_51778d : nop
        mov eax, dword ptr ss : [esp+0x1678]
        cmp eax, ebx
        mov edi, dword ptr ds : [public_5c71d8]
        je public_5177b2
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x1678], ebx
        mov dword ptr ss : [esp+0x167C], ebx
        public_5177b2 : nop
        mov eax, dword ptr ss : [esp+0x1664]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1680], ebx
        je public_5177e0
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_5177d7
        cmp cl, 0xFF
        je public_5177d7
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_5177e0
        public_5177d7 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5177e0 : nop
        mov dword ptr ss : [esp+0x1664], ebx
        mov dword ptr ss : [esp+0x1668], ebx
        mov dword ptr ss : [esp+0x166C], ebx
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x240]
        mov dword ptr ss : [esp+0x17B0], 3
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x248], 0xFFFFFFFF
        je public_51786b
        cmp dword ptr ss : [esp+0x24C], ebx
        je public_517856
        mov eax, dword ptr ss : [esp+0x250]
        cmp eax, ebx
        je public_517845
        push eax
        call ebp
        mov dword ptr ss : [esp+0x250], ebx
        mov dword ptr ss : [esp+0x254], ebx
        public_517845 : nop
        mov edx, dword ptr ss : [esp+0x24C]
        push edx
        call esi
        mov dword ptr ss : [esp+0x24C], ebx
        public_517856 : nop
        mov eax, dword ptr ss : [esp+0x248]
        push eax
        call esi
        mov dword ptr ss : [esp+0x248], 0xFFFFFFFF
        public_51786b : nop
        mov eax, dword ptr ss : [esp+0x250]
        cmp eax, ebx
        je public_51788a
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x250], ebx
        mov dword ptr ss : [esp+0x254], ebx
        public_51788a : nop
        mov eax, dword ptr ss : [esp+0x23C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x258], ebx
        pop edi
        je public_5178b9
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_5178b0
        cmp cl, 0xFF
        je public_5178b0
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_5178b9
        public_5178b0 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5178b9 : nop
        mov ecx, dword ptr ss : [esp+0x179C]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x179C
        ret 4
        UNREACHABLE_TRAP(0x5173c0)
    }
}

#undef public_51744e
#undef public_517470
#undef public_5174a0
#undef public_5174cc
#undef public_5174e5
#undef public_51750d
#undef public_51752c
#undef public_517560
#undef public_517577
#undef public_5175ae
#undef public_5175c7
#undef public_5175e5
#undef public_51768d
#undef public_5176f5
#undef public_5176f7
#undef public_517767
#undef public_517778
#undef public_51778d
#undef public_5177b2
#undef public_5177d7
#undef public_5177e0
#undef public_517845
#undef public_517856
#undef public_51786b
#undef public_51788a
#undef public_5178b0
#undef public_5178b9
