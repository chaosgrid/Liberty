#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69d20);

#define public_6b399fc _public_6b399fc

PROC_DECLARE(0x6b399f0, internal_6b399f0, public_6b399f0);
extern "C" NAKED register_t __cdecl internal_6b399f0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xC]
        test ecx, ecx
        je public_6b399fc
        jmp public_6b69d20
        public_6b399fc : nop
        ret 4
        UNREACHABLE_TRAP(0x6b399f0)
    }
}

#undef public_6b399fc
