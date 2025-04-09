#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e300);
CLANG_FORWARD_PROC_SYMBOL(public_40e6e0);
CLANG_FORWARD_PROC_SYMBOL(public_40e990);
CLANG_FORWARD_PROC_SYMBOL(public_40eac0);
CLANG_FORWARD_PROC_SYMBOL(public_42dae0);
CLANG_FORWARD_PROC_SYMBOL(public_42dc40);
CLANG_FORWARD_PROC_SYMBOL(public_42e290);
CLANG_FORWARD_PROC_SYMBOL(public_42e850);
CLANG_FORWARD_PROC_SYMBOL(public_46d6d0);
CLANG_FORWARD_PROC_SYMBOL(public_4fd5a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5b87bd);

#define public_40eb31 _public_40eb31
#define public_40eba9 _public_40eba9
#define public_40ebab _public_40ebab
#define public_40ebc2 _public_40ebc2
#define public_40ebd8 _public_40ebd8
#define public_40ec20 _public_40ec20
#define public_40ec49 _public_40ec49
#define public_40ec83 _public_40ec83
#define public_40ec8d _public_40ec8d
#define public_40ec95 _public_40ec95
#define public_40ecb0 _public_40ecb0
#define public_40eccb _public_40eccb
#define public_40ece6 _public_40ece6
#define public_40ed04 _public_40ed04
#define public_40ed0e _public_40ed0e
#define public_40ed11 _public_40ed11
#define public_40ed25 _public_40ed25
#define public_40ed78 _public_40ed78
#define public_40ed81 _public_40ed81
#define public_40edc6 _public_40edc6
#define public_40edcf _public_40edcf

PROC_DECLARE(0x40eac0, internal_40eac0, public_40eac0);
extern "C" NAKED register_t __cdecl internal_40eac0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5b87bd @0x40eac8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b87bd
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1580
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push esi
        call public_42e290
        mov eax, dword ptr ds : [public_6164c0]
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+8], eax
        call dword ptr ds : [public_5c605c]
        mov ecx, dword ptr ss : [esp+0x1598]
        xor ebx, ebx
        push ebx
        push ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x1598], ebx
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_40ed25
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_40ed25
        push ebp
        push edi
        public_40eb31 : nop
        mov esi, dword ptr ds : [public_5c6050]
/*FIXUP push offset public_5c8904 @0x40eb37*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8904
        lea ecx, ss:[esp+0x2C]
        call esi
        test al, al
        je public_40ec95
        push 0x58
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        cmp esi, ebx
        mov byte ptr ss : [esp+0x1598], 1
        je public_40eba9
        lea ecx, ds:[esi+4]
        mov dword ptr ds : [esi], ebx
        call dword ptr ds : [public_5c6030]
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi+8], ebx
        call dword ptr ds : [public_5c69a0]
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov byte ptr ds : [esi+0x20], bl
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], eax
        mov dword ptr ds : [esi+0x48], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x54], ebx
        mov dword ptr ds : [esi+0x4C], 0xFFFFFFFF
        jmp public_40ebab
        public_40eba9 : nop
        xor esi, esi
        public_40ebab : nop
        mov edi, dword ptr ds : [public_5c669c]
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x1598], bl
        call edi
        test al, al
        je public_40ebd8
        public_40ebc2 : nop
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        call public_40e300
        lea ecx, ss:[esp+0x28]
        call edi
        test al, al
        jne public_40ebc2
        public_40ebd8 : nop
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ebp, ds:[esi+4]
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, offset public_6164b0
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], esi
        call public_46d6d0
        cmp byte ptr ss : [esp+0x24], bl
        jne public_40ed11
        cmp byte ptr ss : [esp+0x15A4], bl
        je public_40ec20
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax+0x10]
        push esi
        call public_40e6e0
        jmp public_40ec49
        lea esp, ss:[esp]
        public_40ec20 : nop
        mov ecx, ebp
        mov edi, 0x100002
        call dword ptr ds : [public_5c6044]
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0xFC
/*FIXUP push offset public_5c84cc @0x40ec39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c84cc
/*FIXUP push offset public_5c88a8 @0x40ec3e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c88a8
        push edi
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_40ec49 : nop
        cmp esi, ebx
        je public_40ed11
        mov edi, dword ptr ds : [esi+0x54]
        cmp edi, ebx
        jle public_40ec8d
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_5c6044]
        mov edx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x25
/*FIXUP push offset public_5c84cc @0x40ec6a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c84cc
        mov eax, 0x100002
/*FIXUP push offset public_5c8468 @0x40ec74*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8468
        push eax
        call dword ptr ds : [edx]
        add esp, 0x18
        cmp edi, ebx
        jle public_40ec8d
        public_40ec83 : nop
        mov ecx, esi
        call public_40e990
        dec edi
        jne public_40ec83
        public_40ec8d : nop
        push esi
        call public_5b7e1d
        jmp public_40ed0e
/*FIXUP public_40ec95 : nop
        push offset public_5c889c @0x40ec95*/
  FIXUP public_40ec95 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c889c
        lea ecx, ss:[esp+0x2C]
        call esi
        test al, al
        je public_40ecb0
        lea eax, ss:[esp+0x28]
        push eax
        call public_42dae0
        jmp public_40ed0e
/*FIXUP public_40ecb0 : nop
        push offset public_5c8890 @0x40ecb0*/
  FIXUP public_40ecb0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8890
        lea ecx, ss:[esp+0x2C]
        call esi
        test al, al
        je public_40eccb
        lea ecx, ss:[esp+0x28]
        push ecx
        call public_4fd5a0
        jmp public_40ed0e
/*FIXUP public_40eccb : nop
        push offset public_5c8884 @0x40eccb*/
  FIXUP public_40eccb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8884
        lea ecx, ss:[esp+0x2C]
        call esi
        test al, al
        je public_40ece6
        lea edx, ss:[esp+0x28]
        push edx
        call public_42dc40
        jmp public_40ed0e
/*FIXUP public_40ece6 : nop
        push offset public_5c8878 @0x40ece6*/
  FIXUP public_40ece6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8878
        lea ecx, ss:[esp+0x2C]
        call esi
        test al, al
        jne public_40ed04
/*FIXUP push offset public_5c886c @0x40ecf5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c886c
        lea ecx, ss:[esp+0x2C]
        call esi
        test al, al
        je public_40ed11
        public_40ed04 : nop
        lea eax, ss:[esp+0x28]
        push eax
        call public_42e850
        public_40ed0e : nop
        add esp, 4
        public_40ed11 : nop
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_40eb31
        pop edi
        pop ebp
        public_40ed25 : nop
        mov esi, dword ptr ds : [public_6164c0]
        sub esi, dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x1448]
        mov dword ptr ss : [esp+0x1590], 2
        mov dword ptr ss : [esp+0xC], ecx
        lea ecx, ss:[esp+0x1448]
        mov byte ptr ss : [esp+0x1590], 3
        call dword ptr ds : [public_5c604c]
        mov eax, dword ptr ss : [esp+0x144C]
        cmp eax, ebx
        je public_40ed81
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_40ed78
        cmp cl, 0xFF
        je public_40ed78
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_40ed81
        public_40ed78 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_40ed81 : nop
        mov dword ptr ss : [esp+0x144C], ebx
        mov dword ptr ss : [esp+0x1450], ebx
        mov dword ptr ss : [esp+0x1454], ebx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x1590], 4
        call dword ptr ds : [public_5c604c]
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, ebx
        je public_40edcf
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_40edc6
        cmp cl, 0xFF
        je public_40edc6
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_40edcf
        public_40edc6 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_40edcf : nop
        mov ecx, dword ptr ss : [esp+0x1588]
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x158C
        ret 
        UNREACHABLE_TRAP(0x40eac0)
    }
}

#undef public_40eb31
#undef public_40eba9
#undef public_40ebab
#undef public_40ebc2
#undef public_40ebd8
#undef public_40ec20
#undef public_40ec49
#undef public_40ec83
#undef public_40ec8d
#undef public_40ec95
#undef public_40ecb0
#undef public_40eccb
#undef public_40ece6
#undef public_40ed04
#undef public_40ed0e
#undef public_40ed11
#undef public_40ed25
#undef public_40ed78
#undef public_40ed81
#undef public_40edc6
#undef public_40edcf
