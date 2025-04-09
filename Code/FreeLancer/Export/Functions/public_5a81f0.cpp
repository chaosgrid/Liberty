#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a9c10);

PROC_DECLARE(0x5a81f0, internal_5a81f0, public_5a81f0);
extern "C" NAKED register_t __cdecl internal_5a81f0()
{
    __asm
    {
        mov byte ptr ds : [public_67ecbf], 1
        mov ecx, offset public_67e7b8
        jmp public_5a9c10
        UNREACHABLE_TRAP(0x5a81f0)
    }
}
