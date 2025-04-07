#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c2c70);
CLANG_FORWARD_PROC_SYMBOL(public_62c47f0);
CLANG_FORWARD_PROC_SYMBOL(public_62d5a20);
CLANG_FORWARD_PROC_SYMBOL(public_62d7610);
CLANG_FORWARD_PROC_SYMBOL(public_62da4e0);
CLANG_FORWARD_PROC_SYMBOL(public_62ebf50);

#define public_62c4859 _public_62c4859
#define public_62c4870 _public_62c4870
#define public_62c48c2 _public_62c48c2

PROC_DECLARE(0x62c47f0, internal_62c47f0, public_62c47f0);
extern "C" NAKED register_t __cdecl internal_62c47f0()
{
    __asm
    {
        sub esp, 0x1C
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [public_639f47c]
        mov eax, dword ptr ds : [esi+0x46C]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ds : [esi+0x24]
        push edi
        lea edx, ss:[esp+0x10]
        push edx
        add ecx, 0x1364
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        call public_62ebf50
        test al, al
        je public_62c4870
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jnp public_62c4859
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+8], eax
        public_62c4859 : nop
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jnp public_62c4870
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], ecx
        public_62c4870 : nop
        mov eax, dword ptr ds : [esi+0x450]
        test eax, eax
        lea edi, ds:[esi+0x450]
        je public_62c48c2
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62c48c2
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+0x14]
        push 0x3F800000
        push 1
        push edx
        push eax
        mov ecx, edi
        call public_62c2c70
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        je public_62c48c2
        mov ecx, dword ptr ds : [esi+0x24]
        mov edx, dword ptr ds : [esi+0x14]
        push 0x3F800000
        push 1
        push ecx
        push edx
        mov ecx, edi
        call public_62c2c70
        fstp dword ptr ss : [esp+8]
        public_62c48c2 : nop
        mov edi, dword ptr ss : [esp+8]
        push edi
        lea ecx, ds:[esi+0x30]
        call public_62d5a20
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        lea ecx, ds:[esi+0xA8]
        call public_62d7610
        push edi
        lea ecx, ds:[esi+0x168]
        call public_62da4e0
        pop edi
        pop esi
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x62c47f0)
    }
}

#undef public_62c4859
#undef public_62c4870
#undef public_62c48c2
