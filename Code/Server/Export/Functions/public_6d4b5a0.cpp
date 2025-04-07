#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d460f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d467b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d46850);
CLANG_FORWARD_PROC_SYMBOL(public_6d47120);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d57090);
CLANG_FORWARD_PROC_SYMBOL(public_6d57760);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a180);

#define public_6d4b669 _public_6d4b669
#define public_6d4b69c _public_6d4b69c
#define public_6d4b722 _public_6d4b722
#define public_6d4b759 _public_6d4b759
#define public_6d4b764 _public_6d4b764
#define public_6d4b778 _public_6d4b778

PROC_DECLARE(0x6d4b5a0, internal_6d4b5a0, public_6d4b5a0);
extern "C" NAKED register_t __cdecl internal_6d4b5a0()
{
    __asm
    {
        sub esp, 0x514
        push ebx
        push esi
        mov esi, dword ptr ds : [public_6d647e8]
        push edi
        mov edi, ecx
        call esi
        mov ebx, dword ptr ds : [public_6d64bc0]
        neg al
        lea ecx, ss:[esp+0x21C]
        sbb eax, eax
        not eax
        and eax, offset public_6d6aea4
        push eax
        mov eax, dword ptr ss : [esp+0x528]
        push eax
        push 0
        push 0
        push ecx
        call ebx
        add esp, 0x14
        call esi
        test al, al
        je public_6d4b669
        push ebp
        push edi
        call dword ptr ds : [public_6d64c98]
        mov esi, eax
        push esi
        call dword ptr ds : [public_6d64ca0]
        push esi
        call dword ptr ds : [public_6d64c80]
        mov edx, dword ptr ds : [public_6d90144]
        mov ebp, eax
        add esp, 0xC
        lea eax, ss:[ebp+ebp]
        push eax
        push esi
        mov ecx, offset public_6d8fd38
        mov dword ptr ds : [public_6d90150], edx
        call public_6d46850
        mov ecx, offset public_6d8fd38
        call public_6d467b0
        push eax
        push ebp
        lea ecx, ss:[esp+0x124]
/*FIXUP push offset public_6d6aec0 @0x6d4b634*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6aec0
        push ecx
        call dword ptr ds : [public_6d64c74]
        push esi
        call dword ptr ds : [public_6d64c94]
        add esp, 0x14
        lea edx, ss:[esp+0x11C]
        push 0
        push edx
        call public_6d460f0
        push eax
        lea eax, ss:[esp+0x24]
        push 0
        push eax
        call ebx
        add esp, 0x14
        pop ebp
        jmp public_6d4b69c
        public_6d4b669 : nop
        push 0x104
        lea ecx, ss:[esp+0x11C]
        push edi
        push ecx
        call dword ptr ds : [public_6d64be0]
        add esp, 0xC
        lea edx, ss:[esp+0x118]
        push 0
        push edx
        call public_6d460f0
        push eax
        lea eax, ss:[esp+0x20]
        push 0
        push eax
        call ebx
        add esp, 0x14
        public_6d4b69c : nop
        push 0
        lea ecx, ss:[esp+0x220]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x20]
        push 0
        push eax
        call ebx
        lea ecx, ss:[esp+0x230]
        push ecx
        lea edx, ss:[esp+0x338]
        push 0x200
        push edx
        mov byte ptr ss : [esp+0x340], 0
        call dword ptr ds : [public_6d644d0]
        add esp, 0x20
        lea eax, ss:[esp+0x320]
        lea esi, ds:[edi+0x50]
        push eax
        mov ecx, esi
        call public_6d57090
        mov ebx, eax
        push ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, edi
        call public_6d47120
        test al, al
        je public_6d4b722
        lea edx, ss:[esp+0x21C]
        push edx
        push 0x200
        push ebx
        call dword ptr ds : [public_6d644d0]
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        add esp, 0x514
        ret 4
        public_6d4b722 : nop
        lea eax, ss:[esp+0x320]
        push eax
        mov ecx, esi
        call public_6d5a180
        cmp eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], eax
        je public_6d4b759
        add eax, 0xC
        push eax
        lea ecx, ss:[esp+0x324]
        push ecx
        call dword ptr ds : [public_6d648d8]
        add esp, 8
        test al, al
        jne public_6d4b759
        lea eax, ss:[esp+0x10]
        jmp public_6d4b764
        public_6d4b759 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], edx
        lea eax, ss:[esp+0xC]
        public_6d4b764 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [edi+0x54]
        je public_6d4b778
        push eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, esi
        call public_6d57760
        public_6d4b778 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x514
        ret 4
        UNREACHABLE_TRAP(0x6d4b5a0)
    }
}

#undef public_6d4b669
#undef public_6d4b69c
#undef public_6d4b722
#undef public_6d4b759
#undef public_6d4b764
#undef public_6d4b778
