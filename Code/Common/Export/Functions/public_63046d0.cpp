#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63044d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_630474a _public_630474a

PROC_DECLARE(0x63046d0, internal_63046d0, public_63046d0);
extern "C" NAKED register_t __cdecl internal_63046d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        push eax
        call public_63044d0
        add esp, 0x1C
        test eax, eax
        je public_630474a
        fld dword ptr ss : [esp+0xC]
        push esi
        fsub dword ptr ss : [esp+0x18]
        call public_6391dae
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], eax
        call public_6391dae
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+4], eax
        call public_6391dae
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+8], eax
        call public_6391dae
        mov dword ptr ds : [esi+0xC], eax
        mov eax, 1
        pop esi
        ret 
        public_630474a : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x63046d0)
    }
}

#undef public_630474a
