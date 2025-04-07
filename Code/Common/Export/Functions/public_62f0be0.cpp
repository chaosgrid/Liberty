#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627fc80);

#define public_62f0c3b _public_62f0c3b
#define public_62f0c81 _public_62f0c81

PROC_DECLARE(0x62f0be0, internal_62f0be0, public_62f0be0);
extern "C" NAKED register_t __cdecl internal_62f0be0()
{
    __asm
    {
        sub esp, 0x40C
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+0x40], 0xFFFFFFFF
        je public_62f0c81
        lea eax, ss:[esp+0x20C]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x110]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        call dword ptr ds : [public_6399348]
        lea edx, ss:[esp+0x220]
/*FIXUP push offset public_639e848 @0x62f0c1e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e848
        push edx
        call dword ptr ds : [public_639902c]
        add esp, 0x1C
        test eax, eax
        jne public_62f0c3b
        mov al, 1
        pop esi
        add esp, 0x40C
        ret 
/*FIXUP public_62f0c3b : nop
        push offset public_63a140c @0x62f0c3b*/
  FIXUP public_62f0c3b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a140c
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x110]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x31C]
        push eax
        call dword ptr ds : [public_6399208]
        add esi, 0x48
        lea ecx, ss:[esp+0x320]
        push esi
        push ecx
        call public_627fc80
        add esp, 0x1C
        test al, al
        setne al
        pop esi
        add esp, 0x40C
        ret 
        public_62f0c81 : nop
        xor al, al
        pop esi
        add esp, 0x40C
        ret 
        UNREACHABLE_TRAP(0x62f0be0)
    }
}

#undef public_62f0c3b
#undef public_62f0c81
