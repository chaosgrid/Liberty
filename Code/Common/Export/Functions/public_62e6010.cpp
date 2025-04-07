#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e6010);

#define public_62e6060 _public_62e6060

PROC_DECLARE(0x62e6010, internal_62e6010, public_62e6010);
extern "C" NAKED register_t __cdecl internal_62e6010()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0xC], 0x3F800000
        call dword ptr ds : [eax+0x2C]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0
        call dword ptr ds : [eax+0x140]
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+4]
        pop esi
        fnstsw ax
        test ah, 0x41
        jne public_62e6060
        fld dword ptr ss : [esp+0x14]
        add esp, 0x10
        ret 
        public_62e6060 : nop
        fld dword ptr ss : [esp]
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62e6010)
    }
}

#undef public_62e6060
