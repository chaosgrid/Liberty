#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b6e0);
CLANG_FORWARD_PROC_SYMBOL(public_6345710);
CLANG_FORWARD_PROC_SYMBOL(public_6345f90);

#define public_628b731 _public_628b731

PROC_DECLARE(0x628b6e0, internal_628b6e0, public_628b6e0);
extern "C" NAKED register_t __cdecl internal_628b6e0()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        test esi, esi
        mov eax, 1
        je public_628b731
        mov eax, dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [eax]
        lea ecx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+8]
        lea eax, ss:[esp+0x24]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x14]
        call public_6345710
        mov ecx, dword ptr ds : [esi+4]
        push 0
        lea edx, ss:[esp+8]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6345f90
        xor eax, eax
        public_628b731 : nop
        pop esi
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x628b6e0)
    }
}

#undef public_628b731
