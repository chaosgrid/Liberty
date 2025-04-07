#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4018e0);
CLANG_FORWARD_PROC_SYMBOL(public_401a20);
CLANG_FORWARD_PROC_SYMBOL(public_401a70);
CLANG_FORWARD_PROC_SYMBOL(public_401f00);
CLANG_FORWARD_PROC_SYMBOL(public_401fc0);
CLANG_FORWARD_PROC_SYMBOL(public_402330);
CLANG_FORWARD_PROC_SYMBOL(public_4090f0);
CLANG_FORWARD_PROC_SYMBOL(public_40bc80);
CLANG_FORWARD_PROC_SYMBOL(public_40bf70);
CLANG_FORWARD_PROC_SYMBOL(public_40d250);
CLANG_FORWARD_PROC_SYMBOL(public_40e160);
CLANG_FORWARD_PROC_SYMBOL(public_40e760);
CLANG_FORWARD_PROC_SYMBOL(public_4172a0);
CLANG_FORWARD_PROC_SYMBOL(public_4185b8);
CLANG_FORWARD_PROC_SYMBOL(public_41869c);
CLANG_FORWARD_PROC_SYMBOL(public_41899c);
CLANG_FORWARD_PROC_SYMBOL(public_418a92);
CLANG_FORWARD_PROC_SYMBOL(public_418a98);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);
CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_418aaa);
CLANG_FORWARD_PROC_SYMBOL(public_418ab6);
CLANG_FORWARD_PROC_SYMBOL(public_418bfa);
CLANG_FORWARD_PROC_SYMBOL(public_418c9c);
CLANG_FORWARD_PROC_SYMBOL(public_418ca2);
CLANG_FORWARD_PROC_SYMBOL(public_418d1a);
CLANG_FORWARD_PROC_SYMBOL(public_418d2c);
CLANG_FORWARD_PROC_SYMBOL(public_418d32);
CLANG_FORWARD_PROC_SYMBOL(public_418d38);
CLANG_FORWARD_PROC_SYMBOL(public_418d3e);
CLANG_FORWARD_PROC_SYMBOL(public_418d44);
CLANG_FORWARD_PROC_SYMBOL(public_418d4a);
CLANG_FORWARD_PROC_SYMBOL(public_418d50);
CLANG_FORWARD_PROC_SYMBOL(public_418d56);
CLANG_FORWARD_PROC_SYMBOL(public_418d5c);
CLANG_FORWARD_PROC_SYMBOL(public_418d62);
CLANG_FORWARD_PROC_SYMBOL(public_418d68);
CLANG_FORWARD_PROC_SYMBOL(public_418d6e);
CLANG_FORWARD_PROC_SYMBOL(public_418d74);
CLANG_FORWARD_PROC_SYMBOL(public_418d7a);
CLANG_FORWARD_PROC_SYMBOL(public_418d80);
CLANG_FORWARD_JUMP_SYMBOL(public_419fc6);

#define public_40b69b _public_40b69b
#define public_40b6cc _public_40b6cc
#define public_40b766 _public_40b766
#define public_40b772 _public_40b772
#define public_40b7a7 _public_40b7a7
#define public_40b7d7 _public_40b7d7
#define public_40b808 _public_40b808
#define public_40b892 _public_40b892
#define public_40b894 _public_40b894
#define public_40b902 _public_40b902
#define public_40b915 _public_40b915
#define public_40b95d _public_40b95d
#define public_40b95f _public_40b95f
#define public_40b9ee _public_40b9ee
#define public_40ba56 _public_40ba56
#define public_40bace _public_40bace
#define public_40bc08 _public_40bc08
#define public_40bc19 _public_40bc19
#define public_40bc2d _public_40bc2d
#define public_40bc2f _public_40bc2f

PROC_DECLARE(0x40b640, internal_40b640, public_40b640);
extern "C" NAKED register_t __cdecl internal_40b640()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_419fc6 @0x40b648*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419fc6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1DC
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_41b158]
        push esi
        push edi
/*FIXUP push offset public_425724 @0x40b665*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425724
        mov esi, ecx
        call ebp
        mov edi, eax
        xor ebx, ebx
        cmp edi, ebx
        jne public_40b69b
/*FIXUP push offset public_425718 @0x40b676*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425718
        call ebp
        mov edi, eax
        cmp edi, ebx
        jne public_40b69b
        push 0x10
/*FIXUP push offset public_425710 @0x40b685*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425710
/*FIXUP push offset public_4256e4 @0x40b68a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4256e4
        push ebx
        call dword ptr ds : [public_41bbf8]
        jmp public_40bc2d
/*FIXUP public_40b69b : nop
        push offset public_4256dc @0x40b69b*/
  FIXUP public_40b69b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_4256dc
        push edi
        call dword ptr ds : [public_41b15c]
        mov ebp, eax
        cmp ebp, ebx
        jne public_40b6cc
        push edi
        call dword ptr ds : [public_41b170]
        push 0x10
/*FIXUP push offset public_425710 @0x40b6b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425710
/*FIXUP push offset public_4256ac @0x40b6bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4256ac
        push ebx
        call dword ptr ds : [public_41bbf8]
        jmp public_40bc2d
/*FIXUP public_40b6cc : nop
        push offset public_425560 @0x40b6cc*/
  FIXUP public_40b6cc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_425560
        call dword ptr ds : [public_41b160]
        inc eax
        neg eax
        sbb eax, eax
        push 1
        and eax, offset public_425560
        push eax
/*FIXUP push offset public_425554 @0x40b6e4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425554
/*FIXUP push offset public_425678 @0x40b6e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425678
        call ebp
        add esp, 0x10
        push edi
        mov ebp, eax
        call dword ptr ds : [public_41b170]
        cmp ebp, ebx
        setne al
        cmp al, bl
        je public_40bc2d
        xor eax, eax
        mov ecx, 0x41
        lea edi, ss:[esp+0xE8]
        rep stosd
        push 0x104
        lea eax, ss:[esp+0xEC]
        push eax
        push ebx
        call dword ptr ds : [public_41b164]
        push eax
        call dword ptr ds : [public_41b19c]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0xF4]
        push ecx
        call dword ptr ds : [public_41b0ac]
        add esp, 0x10
        cmp eax, ebx
        je public_40b766
        mov edx, 1
        xor eax, eax
        mov ecx, 0xB
        jmp public_40b772
        public_40b766 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x14]
        public_40b772 : nop
        mov ebp, dword ptr ds : [public_41b158]
        and eax, 0xFF
        shl edx, 8
        or eax, edx
        shl eax, 0x10
        and ecx, 0xFFFF
        or eax, ecx
/*FIXUP push offset public_425664 @0x40b78d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425664
        mov dword ptr ds : [public_427830], eax
        call ebp
        mov edi, eax
        cmp edi, ebx
        je public_40b7a7
        call public_418d80
        mov dword ptr ds : [eax+0xC], edi
        public_40b7a7 : nop
        push 1
        call dword ptr ds : [public_41b064]
        add esp, 4
        mov byte ptr ds : [esi+0xBA8], 1
        mov byte ptr ds : [esi+0xBA9], bl
        call public_418d7a
        test eax, eax
        jne public_40b7d7
        push 0xFFFFFFFF
        push ebx
        push 0x64
        call public_418bfa
        jmp public_40bc2d
        public_40b7d7 : nop
        mov ecx, esi
        call public_418d74
        cmp dword ptr ds : [esi+0xB9C], ebx
        jne public_40b808
/*FIXUP push offset public_425654 @0x40b7e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425654
        call ebp
        cmp eax, ebx
        mov dword ptr ds : [esi+0xB9C], eax
        jne public_40b808
        push ebx
        push ebx
/*FIXUP push offset public_425634 @0x40b7f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425634
        call public_418d6e
        jmp public_40bc2d
/*FIXUP public_40b808 : nop
        push offset public_425624 @0x40b808*/
  FIXUP public_40b808 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_425624
        call ebp
        push eax
        call public_4172a0
/*FIXUP push offset public_425600 @0x40b815*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_425600
        call public_4090f0
        add esp, 8
        lea edi, ds:[esi+0xCC]
/*FIXUP push offset public_4255f4 @0x40b828*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4255f4
        mov ecx, edi
        call public_401fc0
/*FIXUP push offset public_4255e8 @0x40b834*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4255e8
        mov ecx, esi
        call public_418d68
        push 4
        mov ecx, esi
        call public_418d62
        push ebx
        mov ecx, edi
        call public_402330
        push 0x10
        mov ecx, edi
        call public_401a70
        push 0x6C
        call public_418a9e
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1F4], ebx
        je public_40b892
/*FIXUP push offset public_41d49c @0x40b873*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_41d49c
/*FIXUP push offset public_41dd0c @0x40b878*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_41dd0c
/*FIXUP push offset public_41d2bc @0x40b87d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_41d2bc
        push 0x80
        mov ecx, eax
        call public_418d5c
        mov ebp, eax
        jmp public_40b894
        public_40b892 : nop
        xor ebp, ebp
        public_40b894 : nop
        push 6
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1F8], 0xFFFFFFFF
        call public_418d56
        push ebp
        mov ecx, esi
        call public_418d50
        lea ecx, ss:[esp+0x40]
        call public_418d4a
        mov dword ptr ss : [esp+0x40], offset public_41d1b8
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1F8], 1
        call public_418d44
        cmp byte ptr ds : [esi+0xA79], bl
        je public_40b902
        call dword ptr ds : [public_41b9a0]
        push ebx
        push ebx
        call dword ptr ds : [public_41b99c]
        and eax, 0xFFFFFFE3
        push 0x8001F
        push eax
        call dword ptr ds : [public_41b998]
        add esp, 0x10
        jmp public_40b915
        public_40b902 : nop
        push 0xFFFFF
        push 0x9001F
        call dword ptr ds : [public_41b998]
        add esp, 8
        public_40b915 : nop
        lea eax, ss:[esp+0x40]
        push eax
        mov ecx, esi
        call public_418d3e
        test eax, eax
        je public_40bc19
        mov ecx, dword ptr ds : [esi+0x20]
        call public_418d38
        push 0x228
        mov dword ptr ds : [esi+0xB90], eax
        call public_418a9e
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x1F4], 2
        je public_40b95d
        mov ecx, eax
        call public_40e760
        jmp public_40b95f
        public_40b95d : nop
        xor eax, eax
        public_40b95f : nop
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [esi+0xB94], eax
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ss : [esp+0x1F4], 1
        call dword ptr ds : [edx+0xC4]
        xor ecx, ecx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x28], ecx
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+0xB98], eax
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        call public_418aaa
        push 0xF00D
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x1F8], 3
        call public_418ca2
        test eax, eax
        setne al
        cmp al, bl
        jne public_40b9ee
/*FIXUP push offset public_42557c @0x40b9e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42557c
        lea ecx, ss:[esp+0x14]
        call public_418c9c
        public_40b9ee : nop
        mov ecx, dword ptr ds : [esi+0xB94]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x18]
        push eax
        mov eax, dword ptr ds : [esi+0x20]
        push 0xE901
        push eax
        lea eax, ss:[esp+0x3C]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push 0x40000000
        push eax
        push ebx
        call dword ptr ds : [edx+0x5C]
        mov eax, dword ptr ds : [esi+0xB94]
        mov ecx, dword ptr ds : [eax+0x20]
        push ebx
        push ebx
        push 0x364
        push ecx
        call dword ptr ds : [public_41bbe8]
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x1F4], 1
        call public_418aa4
        mov ecx, esi
        call public_40d250
        mov ecx, dword ptr ds : [esi+0xB94]
        cmp ecx, ebx
        je public_40ba56
        push ebx
        call public_418d32
        public_40ba56 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        push 5
        call public_418ab6
/*FIXUP push offset public_427810 @0x40ba60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_427810
        call dword ptr ds : [public_41b060]
        add esp, 4
        lea edx, ss:[esp+0xE8]
        push edx
        mov ecx, edi
        call public_4018e0
/*FIXUP push offset public_4255d4 @0x40ba7d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4255d4
        mov ecx, edi
        call public_401a20
        mov ebp, dword ptr ds : [esi+0x84C]
        push 4
        mov ecx, edi
        call public_401f00
        lea ecx, ss:[esp+0x10]
        call public_418aaa
        push 0xF00E
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x1F8], 4
        call public_418ca2
        test eax, eax
        setne al
        cmp al, bl
        jne public_40bace
/*FIXUP push offset public_42557c @0x40bac0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42557c
        lea ecx, ss:[esp+0x14]
        call public_418c9c
        public_40bace : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, 0x100004
        push ecx
        push eax
        call public_40e160
        add esp, 8
        push ebp
        mov ecx, edi
        call public_401f00
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x1F4], 1
        call public_418aa4
        mov eax, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [eax+0x20]
        mov ebp, dword ptr ds : [public_41bbfc]
        push edx
        call ebp
        mov eax, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [eax+0x20]
        mov edi, dword ptr ds : [public_41bc00]
        push 0x180
        push ebx
        push ebx
        push eax
        call edi
        mov eax, dword ptr ds : [esi+0xB94]
        mov ecx, dword ptr ds : [eax+0x20]
        push 0x180
        push ebx
        push ebx
        push ecx
        call edi
/*FIXUP push offset public_4255c4 @0x40bb32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4255c4
        push ebx
        call public_4185b8
        add esp, 8
        test al, al
        je public_40bc19
/*FIXUP push offset public_4270a3 @0x40bb48*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4270a3
        mov ecx, esi
        call public_40bf70
/*FIXUP push offset public_4271a7 @0x40bb54*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4271a7
        mov ecx, esi
        call public_40bf70
        push ebx
        push 0x84
        lea ecx, ss:[esp+0x6C]
        call public_418a92
        mov dword ptr ss : [esp+0x64], offset public_41d0e0
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0x1F4], 5
        call public_41899c
        cmp eax, 1
        jne public_40bc08
        mov eax, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [eax+0x20]
        push edx
        call ebp
/*FIXUP push offset _public_40e160 @0x40bb96*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_40e160
        call public_41869c
        mov eax, dword ptr ds : [esi]
        add esp, 4
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x98]
        push ebx
        push 4
        push ebx
        push ebx
        push ebx
/*FIXUP push offset _public_40bc80 @0x40bbb5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_40bc80
        call public_418d1a
        cmp eax, ebx
        mov dword ptr ds : [esi+0xBA0], eax
        je public_40bc08
        mov dword ptr ds : [eax+0x28], ebx
        mov esi, dword ptr ds : [esi+0xBA0]
        mov ecx, dword ptr ds : [esi+0x2C]
        push ecx
        call dword ptr ds : [public_41b16c]
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0x1F4], 1
        call public_418a98
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x1F4], 0xFFFFFFFF
        call public_418d2c
        mov eax, 1
        jmp public_40bc2f
        public_40bc08 : nop
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0x1F4], 1
        call public_418a98
        public_40bc19 : nop
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x1F4], 0xFFFFFFFF
        call public_418d2c
        public_40bc2d : nop
        xor eax, eax
        public_40bc2f : nop
        mov ecx, dword ptr ss : [esp+0x1EC]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1E8
        ret 
        UNREACHABLE_TRAP(0x40b640)
    }
}

#undef public_40b69b
#undef public_40b6cc
#undef public_40b766
#undef public_40b772
#undef public_40b7a7
#undef public_40b7d7
#undef public_40b808
#undef public_40b892
#undef public_40b894
#undef public_40b902
#undef public_40b915
#undef public_40b95d
#undef public_40b95f
#undef public_40b9ee
#undef public_40ba56
#undef public_40bace
#undef public_40bc08
#undef public_40bc19
#undef public_40bc2d
#undef public_40bc2f
