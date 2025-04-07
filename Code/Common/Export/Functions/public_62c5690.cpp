#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2110);

#define public_62c56a7 _public_62c56a7

PROC_DECLARE(0x62c5690, internal_62c5690, public_62c5690);
extern "C" NAKED register_t __cdecl internal_62c5690()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2F0]
        test eax, eax
        je public_62c56a7
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], eax
        jmp public_62d2110
        public_62c56a7 : nop
        ret 4
        UNREACHABLE_TRAP(0x62c5690)
    }
}

#undef public_62c56a7
