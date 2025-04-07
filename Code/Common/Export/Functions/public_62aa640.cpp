#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62aa640);
CLANG_FORWARD_PROC_SYMBOL(public_63217c0);

#define public_62aa66c _public_62aa66c

PROC_DECLARE(0x62aa640, internal_62aa640, public_62aa640);
extern "C" NAKED register_t __cdecl internal_62aa640()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        lea eax, ss:[esp+4]
        push eax
        add edx, 0x104
        push edx
        add ecx, 0x104
        push ecx
        call public_63217c0
        add esp, 0xC
        test eax, eax
        je public_62aa66c
        fld dword ptr ds : [public_6399408]
        ret 4
        public_62aa66c : nop
        fld dword ptr ss : [esp+4]
        ret 4
        UNREACHABLE_TRAP(0x62aa640)
    }
}

#undef public_62aa66c
