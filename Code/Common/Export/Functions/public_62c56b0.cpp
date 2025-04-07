#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d21b0);

#define public_62c56bf _public_62c56bf

PROC_DECLARE(0x62c56b0, internal_62c56b0, public_62c56b0);
extern "C" NAKED register_t __cdecl internal_62c56b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2F0]
        test eax, eax
        je public_62c56bf
        jmp public_62d21b0
        public_62c56bf : nop
        ret 4
        UNREACHABLE_TRAP(0x62c56b0)
    }
}

#undef public_62c56bf
