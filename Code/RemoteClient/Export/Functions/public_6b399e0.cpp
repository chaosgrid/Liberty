#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b69d26);

#define public_6b399ec _public_6b399ec

PROC_DECLARE(0x6b399e0, internal_6b399e0, public_6b399e0);
extern "C" NAKED register_t __cdecl internal_6b399e0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xC]
        test ecx, ecx
        je public_6b399ec
        jmp public_6b69d26
        public_6b399ec : nop
        ret 4
        UNREACHABLE_TRAP(0x6b399e0)
    }
}

#undef public_6b399ec
