#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_1000a400);

PROC_DECLARE(0x1000a400, internal_1000a400, public_1000a400);
extern "C" NAKED register_t __cdecl internal_1000a400()
{
    __asm
    {
        jmp dword ptr ds : [public_1000b000]
        UNREACHABLE_TRAP(0x1000a400)
    }
}
