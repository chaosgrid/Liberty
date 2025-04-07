#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c2ad0);

#define public_62c2ade _public_62c2ade

PROC_DECLARE(0x62c2ad0, internal_62c2ad0, public_62c2ad0);
extern "C" NAKED register_t __cdecl internal_62c2ad0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0xC]
        test al, al
        je public_62c2ade
        fmul dword ptr ds : [ecx+0x10]
        public_62c2ade : nop
        ret 4
        UNREACHABLE_TRAP(0x62c2ad0)
    }
}

#undef public_62c2ade
