#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58f730);
CLANG_FORWARD_PROC_SYMBOL(public_595dd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

PROC_DECLARE(0x58f730, internal_58f730, public_58f730);
extern "C" NAKED register_t __cdecl internal_58f730()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x588]
        call public_595dd0
        jmp public_5b7ec0
        UNREACHABLE_TRAP(0x58f730)
    }
}
