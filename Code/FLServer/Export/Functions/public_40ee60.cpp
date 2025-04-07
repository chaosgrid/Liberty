#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4031c0);
CLANG_FORWARD_PROC_SYMBOL(public_409840);
CLANG_FORWARD_PROC_SYMBOL(public_40ae40);
CLANG_FORWARD_PROC_SYMBOL(public_40bd00);
CLANG_FORWARD_PROC_SYMBOL(public_40d910);
CLANG_FORWARD_PROC_SYMBOL(public_40da80);
CLANG_FORWARD_PROC_SYMBOL(public_40ee60);
CLANG_FORWARD_PROC_SYMBOL(public_418aa4);
CLANG_FORWARD_PROC_SYMBOL(public_418aaa);
CLANG_FORWARD_PROC_SYMBOL(public_418bee);
CLANG_FORWARD_PROC_SYMBOL(public_418c60);
CLANG_FORWARD_PROC_SYMBOL(public_41911c);
CLANG_FORWARD_JUMP_SYMBOL(public_41a3fb);

#define public_40eec7 _public_40eec7
#define public_40ef25 _public_40ef25
#define public_40ef33 _public_40ef33
#define public_40ef96 _public_40ef96
#define public_40efef _public_40efef
#define public_40f002 _public_40f002
#define public_40f06a _public_40f06a
#define public_40f0ba _public_40f0ba
#define public_40f0f4 _public_40f0f4
#define public_40f12e _public_40f12e
#define public_40f168 _public_40f168
#define public_40f1a2 _public_40f1a2
#define public_40f1dc _public_40f1dc
#define public_40f1e7 _public_40f1e7

PROC_DECLARE(0x40ee60, internal_40ee60, public_40ee60);
extern "C" NAKED register_t __cdecl internal_40ee60()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_41a3fb @0x40ee68*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_41a3fb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x94
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x1EC]
        test al, al
        push edi
        je public_40f1e7
        mov ecx, dword ptr ds : [public_427828]
        test ecx, ecx
        je public_40f1e7
        call public_40bd00
        test al, al
        jne public_40f1e7
        mov eax, dword ptr ds : [public_427828]
        mov ebx, dword ptr ds : [eax+0x81C]
        test ebx, ebx
        jne public_40eec7
        mov ebx, dword ptr ds : [public_41b8c8]
        test ebx, ebx
        je public_40ef96
        public_40eec7 : nop
        mov ebp, dword ptr ds : [public_41b8f4]
        push ebx
        lea edi, ds:[esi+0x208]
        call ebp
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        push eax
        push ebx
        push ecx
        push 0
        mov ecx, edi
        call dword ptr ds : [public_41b8e4]
        test eax, eax
        je public_40ef96
        push ebx
        call ebp
        add esp, 4
        push 1
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_41b878]
        test al, al
        je public_40ef25
        mov ebp, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+4]
        push ebp
        push ebx
        push eax
        call public_4031c0
        add esp, 0xC
        push ebp
        mov ecx, edi
        call dword ptr ds : [public_41b8c4]
        public_40ef25 : nop
        mov edi, dword ptr ds : [edi+4]
        test edi, edi
        mov eax, dword ptr ds : [public_41b8c8]
        je public_40ef33
        mov eax, edi
        public_40ef33 : nop
        mov edx, dword ptr ds : [esi+0xA0]
        push eax
        push edx
        call public_409840
        mov ecx, dword ptr ds : [esi+0xA0]
        add esp, 8
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        call dword ptr ds : [public_41bc14]
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, esi
        call public_418c60
        mov ecx, dword ptr ds : [esi+0x20]
        mov edi, dword ptr ds : [public_41bbb4]
        push 1
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        call edi
        mov edx, dword ptr ds : [esi+0xA0]
        push 1
        push 0
        push edx
        call edi
        mov eax, dword ptr ds : [esi+0x20]
        mov edi, dword ptr ds : [public_41bbfc]
        push eax
        call edi
        mov ecx, dword ptr ds : [esi+0xA0]
        push ecx
        call edi
        public_40ef96 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        test ecx, ecx
        mov dword ptr ss : [esp+0x14], ecx
        je public_40f1e7
        call public_40d910
        mov edx, dword ptr ds : [esi+0x1A0]
        mov ebp, dword ptr ds : [public_41bbe8]
        push 0
        push 0
        push 0x408
        push edx
        mov edi, eax
        call ebp
        cmp eax, edi
        mov ebx, dword ptr ds : [public_41b964]
        je public_40f06a
        mov eax, dword ptr ds : [esi+0x1A0]
        push 0
        push edi
        push 0x402
        push eax
        call ebp
        cmp edi, 0x21
        ja public_40efef
        mov eax, 0x1DBF3B
        jmp public_40f002
        public_40efef : nop
        mov ecx, 0x31
        cmp ecx, edi
        sbb eax, eax
        and eax, 0xFFCA32CA
        add eax, 0x52EAF5
        public_40f002 : nop
        mov edx, dword ptr ds : [esi+0x1A0]
        push eax
        push 0
        push 0x409
        push edx
        call ebp
        lea ecx, ss:[esp+0x10]
        call public_418aaa
        lea eax, ss:[esp+0x10]
        push 0xF012
        push eax
        mov dword ptr ss : [esp+0xB4], 0
        call public_40ae40
        mov ecx, dword ptr ss : [esp+0x18]
        push edi
        push ecx
        lea edx, ss:[esp+0x64]
        push edx
        call ebx
        add esp, 0x14
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ds:[esi+0x140]
        call public_418bee
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0xAC], 0xFFFFFFFF
        call public_418aa4
        public_40f06a : nop
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        call public_40da80
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [esi+0x1C0]
        cmp eax, ecx
        lea edi, ds:[esi+0x1C0]
        je public_40f0ba
        push eax
        lea edx, ss:[esp+0x58]
/*FIXUP push offset public_4258bc @0x40f091*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4258bc
        push edx
        call ebx
        add esp, 0xC
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x64]
        push eax
        push 1
        push 1
        push 0
        lea ecx, ds:[esi+0x100]
        call public_41911c
        public_40f0ba : nop
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, dword ptr ds : [esi+0x1C4]
        je public_40f0f4
        push eax
        lea ecx, ss:[esp+0x58]
/*FIXUP push offset public_4258bc @0x40f0cb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4258bc
        push ecx
        call ebx
        add esp, 0xC
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x64]
        push edx
        push 1
        push 1
        push 1
        lea ecx, ds:[esi+0x100]
        call public_41911c
        public_40f0f4 : nop
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, dword ptr ds : [esi+0x1C8]
        je public_40f12e
        push eax
        lea eax, ss:[esp+0x58]
/*FIXUP push offset public_4258bc @0x40f105*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4258bc
        push eax
        call ebx
        add esp, 0xC
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x64]
        push ecx
        push 1
        push 1
        push 2
        lea ecx, ds:[esi+0x100]
        call public_41911c
        public_40f12e : nop
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, dword ptr ds : [esi+0x1CC]
        je public_40f168
        push eax
        lea edx, ss:[esp+0x58]
/*FIXUP push offset public_4258bc @0x40f13f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4258bc
        push edx
        call ebx
        add esp, 0xC
        push 0
        push 0
        push 0
        push 0
        lea eax, ss:[esp+0x64]
        push eax
        push 1
        push 1
        push 3
        lea ecx, ds:[esi+0x100]
        call public_41911c
        public_40f168 : nop
        mov eax, dword ptr ss : [esp+0x44]
        cmp eax, dword ptr ds : [esi+0x1DC]
        je public_40f1a2
        push eax
        lea ecx, ss:[esp+0x58]
/*FIXUP push offset public_4258bc @0x40f179*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4258bc
        push ecx
        call ebx
        add esp, 0xC
        push 0
        push 0
        push 0
        push 0
        lea edx, ss:[esp+0x64]
        push edx
        push 1
        push 1
        push 4
        lea ecx, ds:[esi+0x100]
        call public_41911c
        public_40f1a2 : nop
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, dword ptr ds : [esi+0x1D0]
        je public_40f1dc
        push eax
        lea eax, ss:[esp+0x58]
/*FIXUP push offset public_4258bc @0x40f1b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_4258bc
        push eax
        call ebx
        add esp, 0xC
        push 0
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x64]
        push ecx
        push 1
        push 1
        push 5
        lea ecx, ds:[esi+0x100]
        call public_41911c
        public_40f1dc : nop
        mov ecx, 0xB
        lea esi, ss:[esp+0x28]
        rep movsd
        public_40f1e7 : nop
        mov ecx, dword ptr ss : [esp+0xA4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xA0
        ret 
        UNREACHABLE_TRAP(0x40ee60)
    }
}

#undef public_40eec7
#undef public_40ef25
#undef public_40ef33
#undef public_40ef96
#undef public_40efef
#undef public_40f002
#undef public_40f06a
#undef public_40f0ba
#undef public_40f0f4
#undef public_40f12e
#undef public_40f168
#undef public_40f1a2
#undef public_40f1dc
#undef public_40f1e7
