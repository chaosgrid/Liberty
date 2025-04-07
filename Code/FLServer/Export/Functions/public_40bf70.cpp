#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4018b0);
CLANG_FORWARD_PROC_SYMBOL(public_4020e0);
CLANG_FORWARD_PROC_SYMBOL(public_4021a0);
CLANG_FORWARD_PROC_SYMBOL(public_40bf70);
CLANG_FORWARD_PROC_SYMBOL(public_4172a0);
CLANG_FORWARD_PROC_SYMBOL(public_4185be);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_419460);
CLANG_FORWARD_PROC_SYMBOL(public_4194ae);
CLANG_FORWARD_JUMP_SYMBOL(public_41a01f);

#define public_40bff0 _public_40bff0
#define public_40c011 _public_40c011
#define public_40c036 _public_40c036
#define public_40c066 _public_40c066
#define public_40c075 _public_40c075
#define public_40c092 _public_40c092
#define public_40c0b9 _public_40c0b9
#define public_40c0e5 _public_40c0e5
#define public_40c0f1 _public_40c0f1
#define public_40c110 _public_40c110
#define public_40c127 _public_40c127
#define public_40c140 _public_40c140
#define public_40c165 _public_40c165
#define public_40c16f _public_40c16f
#define public_40c183 _public_40c183
#define public_40c1f4 _public_40c1f4
#define public_40c205 _public_40c205
#define public_40c216 _public_40c216
#define public_40c23b _public_40c23b
#define public_40c260 _public_40c260
#define public_40c269 _public_40c269
#define public_40c2a5 _public_40c2a5
#define public_40c2e0 _public_40c2e0
#define public_40c2e2 _public_40c2e2
#define public_40c30a _public_40c30a
#define public_40c315 _public_40c315
#define public_40c320 _public_40c320
#define public_40c336 _public_40c336
#define public_40c359 _public_40c359
#define public_40c362 _public_40c362

PROC_DECLARE(0x40bf70, internal_40bf70, public_40bf70);
extern "C" NAKED register_t __cdecl internal_40bf70()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_41a01f @0x40bf78*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a01f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1580
        mov dword ptr fs : [0], esp
        call public_419460
        push ebx
        push ebp
        push esi
        mov dword ptr ss : [esp+0x10], ecx
        push edi
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_41b078]
        mov eax, dword ptr ss : [esp+0x15A0]
        xor edi, edi
        push edi
        push eax
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x15A0], edi
        mov byte ptr ss : [esp+0x1B], 0
        call dword ptr ds : [public_41b088]
        test al, al
        je public_40c183
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_41b084]
        test al, al
        je public_40c183
        mov ebp, dword ptr ds : [public_41b080]
        mov esi, dword ptr ds : [public_41b07c]
        mov edi, dword ptr ds : [public_41b01c]
        mov edi, edi
/*FIXUP public_40bff0 : nop
        push offset public_425790 @0x40bff0*/
  FIXUP public_40bff0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_425790
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_41b018]
        test al, al
        lea ecx, ss:[esp+0x28]
        je public_40c075
        call ebp
        test al, al
        je public_40c16f
/*FIXUP public_40c011 : nop
        push offset public_425784 @0x40c011*/
  FIXUP public_40c011 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_425784
        lea ecx, ss:[esp+0x2C]
        call esi
        test al, al
        lea ecx, ss:[esp+0x28]
        je public_40c036
        call edi
        push eax
        call public_4185be
        add esp, 4
        mov byte ptr ss : [esp+0x13], 1
        jmp public_40c066
/*FIXUP public_40c036 : nop
        push offset public_42577c @0x40c036*/
  FIXUP public_40c036 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_42577c
        call esi
        test al, al
        je public_40c066
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call edi
        push eax
        call dword ptr ds : [public_41b070]
        mov edx, dword ptr ss : [esp+0x1C]
        add esp, 8
        push eax
        lea ecx, ds:[edx+0xCC]
        call public_4018b0
        public_40c066 : nop
        lea ecx, ss:[esp+0x28]
        call ebp
        test al, al
        jne public_40c011
        jmp public_40c16f
/*FIXUP public_40c075 : nop
        push offset public_425770 @0x40c075*/
  FIXUP public_40c075 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_425770
        call dword ptr ds : [public_41b018]
        test al, al
        lea ecx, ss:[esp+0x28]
        je public_40c0f1
        call ebp
        test al, al
        je public_40c16f
/*FIXUP public_40c092 : nop
        push offset public_425764 @0x40c092*/
  FIXUP public_40c092 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_425764
        lea ecx, ss:[esp+0x2C]
        call esi
        test al, al
        lea ecx, ss:[esp+0x28]
        je public_40c0b9
        call edi
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[eax+0xCC]
        call public_4020e0
        jmp public_40c0e5
/*FIXUP public_40c0b9 : nop
        push offset public_42575c @0x40c0b9*/
  FIXUP public_40c0b9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_42575c
        call esi
        test al, al
        je public_40c0e5
        push 0
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_41b06c]
        call public_4194ae
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        add ecx, 0xCC
        call public_4021a0
        public_40c0e5 : nop
        lea ecx, ss:[esp+0x28]
        call ebp
        test al, al
        jne public_40c092
        jmp public_40c16f
/*FIXUP public_40c0f1 : nop
        push offset public_425754 @0x40c0f1*/
  FIXUP public_40c0f1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_425754
        call dword ptr ds : [public_41b018]
        test al, al
        lea ecx, ss:[esp+0x28]
        je public_40c127
        call ebp
        test al, al
        je public_40c16f
        lea ebx, ds:[ebx]
/*FIXUP public_40c110 : nop
        push offset public_425744 @0x40c110*/
  FIXUP public_40c110 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_425744
        lea ecx, ss:[esp+0x2C]
        call esi
        lea ecx, ss:[esp+0x28]
        call ebp
        test al, al
        jne public_40c110
        jmp public_40c16f
/*FIXUP public_40c127 : nop
        push offset public_425738 @0x40c127*/
  FIXUP public_40c127 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_425738
        call dword ptr ds : [public_41b018]
        test al, al
        je public_40c16f
        lea ecx, ss:[esp+0x28]
        call ebp
        test al, al
        je public_40c16f
/*FIXUP public_40c140 : nop
        push offset public_425734 @0x40c140*/
  FIXUP public_40c140 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_425734
        lea ecx, ss:[esp+0x2C]
        call esi
        test al, al
        je public_40c165
        lea ecx, ss:[esp+0x28]
        call edi
        push eax
        call dword ptr ds : [public_41b158]
        push eax
        call public_4172a0
        add esp, 4
        public_40c165 : nop
        lea ecx, ss:[esp+0x28]
        call ebp
        test al, al
        jne public_40c140
        public_40c16f : nop
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_41b084]
        test al, al
        jne public_40bff0
        xor edi, edi
        public_40c183 : nop
        lea edx, ss:[esp+0x1450]
        mov dword ptr ss : [esp+0x1598], 1
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [public_41b8ac]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edi
        lea ecx, ss:[esp+0x1458]
        mov byte ptr ss : [esp+0x15A0], 2
        call dword ptr ds : [public_41b8b8]
        mov eax, dword ptr ss : [esp+0x1460]
        mov ebp, dword ptr ds : [public_41b1bc]
        or esi, 0xFFFFFFFF
        cmp eax, esi
        je public_40c216
        cmp dword ptr ss : [esp+0x1464], edi
        je public_40c205
        mov eax, dword ptr ss : [esp+0x1468]
        cmp eax, edi
        je public_40c1f4
        push eax
        call dword ptr ds : [public_41b1a8]
        mov dword ptr ss : [esp+0x1468], edi
        mov dword ptr ss : [esp+0x146C], edi
        public_40c1f4 : nop
        mov edx, dword ptr ss : [esp+0x1464]
        push edx
        call ebp
        mov dword ptr ss : [esp+0x1464], edi
        public_40c205 : nop
        mov eax, dword ptr ss : [esp+0x1460]
        push eax
        call ebp
        mov dword ptr ss : [esp+0x1460], esi
        public_40c216 : nop
        mov eax, dword ptr ss : [esp+0x1468]
        cmp eax, edi
        mov ebx, dword ptr ds : [public_41b9a4]
        je public_40c23b
        push eax
        call ebx
        add esp, 4
        mov dword ptr ss : [esp+0x1468], edi
        mov dword ptr ss : [esp+0x146C], edi
        public_40c23b : nop
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, edi
        mov dword ptr ss : [esp+0x1470], edi
        je public_40c269
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_40c260
        cmp cl, 0xFF
        je public_40c260
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_40c269
        public_40c260 : nop
        push eax
        call public_418978
        add esp, 4
        public_40c269 : nop
        mov dword ptr ss : [esp+0x1454], edi
        mov dword ptr ss : [esp+0x1458], edi
        mov dword ptr ss : [esp+0x145C], edi
        mov ecx, dword ptr ds : [public_41b8ac]
        mov esi, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x1598], 3
        call dword ptr ds : [public_41b8c0]
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, esi
        jae public_40c2a5
        mov esi, eax
        public_40c2a5 : nop
        cmp esi, edi
        jbe public_40c2e2
        sub eax, esi
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        lea edx, ds:[eax+esi]
        push edx
        push eax
        call dword ptr ds : [public_41b96c]
        mov edi, dword ptr ss : [esp+0x3C]
        add esp, 0xC
        push 0
        sub edi, esi
        push edi
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_41b874]
        test al, al
        je public_40c2e0
        push edi
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_41b8b0]
        public_40c2e0 : nop
        xor edi, edi
        public_40c2e2 : nop
        mov eax, dword ptr ss : [esp+0x38]
        or esi, 0xFFFFFFFF
        cmp eax, esi
        je public_40c320
        cmp dword ptr ss : [esp+0x3C], edi
        je public_40c315
        mov eax, dword ptr ss : [esp+0x40]
        cmp eax, edi
        je public_40c30a
        push eax
        call dword ptr ds : [public_41b1a8]
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x44], edi
        public_40c30a : nop
        mov eax, dword ptr ss : [esp+0x3C]
        push eax
        call ebp
        mov dword ptr ss : [esp+0x3C], edi
        public_40c315 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        call ebp
        mov dword ptr ss : [esp+0x38], esi
        public_40c320 : nop
        mov eax, dword ptr ss : [esp+0x40]
        cmp eax, edi
        je public_40c336
        push eax
        call ebx
        add esp, 4
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ss : [esp+0x44], edi
        public_40c336 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x48], edi
        cmp eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        je public_40c362
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_40c359
        cmp cl, 0xFF
        je public_40c359
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_40c362
        public_40c359 : nop
        push eax
        call public_418978
        add esp, 4
        public_40c362 : nop
        mov ecx, dword ptr ss : [esp+0x1580]
        mov al, byte ptr ss : [esp+3]
        mov dword ptr fs : [0], ecx
        add esp, 0x158C
        ret 4
        UNREACHABLE_TRAP(0x40bf70)
    }
}

#undef public_40bff0
#undef public_40c011
#undef public_40c036
#undef public_40c066
#undef public_40c075
#undef public_40c092
#undef public_40c0b9
#undef public_40c0e5
#undef public_40c0f1
#undef public_40c110
#undef public_40c127
#undef public_40c140
#undef public_40c165
#undef public_40c16f
#undef public_40c183
#undef public_40c1f4
#undef public_40c205
#undef public_40c216
#undef public_40c23b
#undef public_40c260
#undef public_40c269
#undef public_40c2a5
#undef public_40c2e0
#undef public_40c2e2
#undef public_40c30a
#undef public_40c315
#undef public_40c320
#undef public_40c336
#undef public_40c359
#undef public_40c362
