#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_59d040);

PROC_DECLARE(0x59d040, internal_59d040, public_59d040);
extern "C" NAKED register_t __cdecl internal_59d040()
{
    __asm
    {
        mov dword ptr ds : [public_67dbf8], offset public_5c8944
        mov ecx, offset public_67dbf8
        jmp public_401e90
        UNREACHABLE_TRAP(0x59d040)
    }
}
