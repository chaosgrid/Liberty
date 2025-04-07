#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21b10);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a5f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a830);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a850);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a860);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a870);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a880);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a890);
CLANG_FORWARD_PROC_SYMBOL(public_6c2f7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34160);

#define public_6c2a6d6 _public_6c2a6d6
#define public_6c2a7a1 _public_6c2a7a1
#define public_6c2a7b3 _public_6c2a7b3
#define public_6c2a7e3 _public_6c2a7e3
#define public_6c2a7eb _public_6c2a7eb
#define public_6c2a81b _public_6c2a81b

PROC_DECLARE(0x6c2a6c0, internal_6c2a6c0, public_6c2a6c0);
extern "C" NAKED register_t __cdecl internal_6c2a6c0()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edi+0x30]
        xor ebx, ebx
        cmp eax, ebx
        jbe public_6c2a6d6
        dec eax
        mov dword ptr ds : [edi+0x30], eax
        public_6c2a6d6 : nop
        mov eax, dword ptr ds : [edi+0x30]
        cmp eax, ebx
        jne public_6c2a81b
        push esi
        mov dword ptr ds : [edi+0x30], 1
        mov eax, dword ptr ds : [edi+0x10]
        lea esi, ds:[edi+0xC]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_6c2a5e0
        mov ecx, esi
        call public_6c2f7d0
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_6c2a5e0
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x30], eax
        call public_6c2a870
        test eax, eax
        je public_6c2a7a1
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6c34160
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6c2a830
        test al, al
        jne public_6c2a7a1
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_6c2a850
        push eax
        lea ecx, ss:[esp+0x10]
        call public_6c2a830
        test al, al
        jne public_6c2a7a1
        mov ecx, esi
        call public_6c2a860
        mov eax, dword ptr ds : [eax]
        push eax
        mov ecx, esi
        call public_6c2a2e0
        mov ecx, esi
        call public_6c2a860
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ecx
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], ebx
        call public_6c2f7d0
        mov edx, dword ptr ds : [esi+4]
        mov ecx, esi
        mov dword ptr ds : [eax], edx
        call public_6c2a880
        mov ecx, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x18]
        mov dword ptr ds : [eax], ecx
        push edx
        mov ecx, esi
        call public_6c34160
        jmp public_6c2a7eb
        public_6c2a7a1 : nop
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6c2a830
        test al, al
        je public_6c2a7e3
        public_6c2a7b3 : nop
        push ebx
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x38]
        call public_6c2a890
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, esi
        call public_6c21b10
        lea ecx, ss:[esp+0xC]
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_6c2a830
        test al, al
        jne public_6c2a7b3
        public_6c2a7e3 : nop
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x18], edx
        public_6c2a7eb : nop
        mov eax, dword ptr ds : [esi+4]
        push 1
        push eax
        mov ecx, esi
        call public_6c2a5f0
        mov ecx, dword ptr ds : [esi+8]
        push 1
        push ecx
        mov ecx, esi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+0x10], ebx
        call public_6c2a5f0
        push edi
        mov dword ptr ds : [esi+8], ebx
        call dword ptr ds : [public_6c3603c]
        add esp, 4
        xor eax, eax
        pop esi
        public_6c2a81b : nop
        pop edi
        pop ebx
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x6c2a6c0)
    }
}

#undef public_6c2a6d6
#undef public_6c2a7a1
#undef public_6c2a7b3
#undef public_6c2a7e3
#undef public_6c2a7eb
#undef public_6c2a81b
