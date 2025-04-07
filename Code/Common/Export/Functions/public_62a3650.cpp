#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a3650);
CLANG_FORWARD_PROC_SYMBOL(public_62f0d50);

#define public_62a365b _public_62a365b

PROC_DECLARE(0x62a3650, internal_62a3650, public_62a3650);
extern "C" NAKED register_t __cdecl internal_62a3650()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        je public_62a365b
        jmp public_62f0d50
        public_62a365b : nop
        ret 
        UNREACHABLE_TRAP(0x62a3650)
    }
}

#undef public_62a365b
