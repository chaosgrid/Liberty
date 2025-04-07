#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10006900);
CLANG_FORWARD_PROC_SYMBOL(public_1000a412);

PROC_DECLARE(0x10006900, internal_10006900, public_10006900);
extern "C" NAKED register_t __cdecl internal_10006900()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_1000a412
        add esp, 4
        ret 8
        UNREACHABLE_TRAP(0x10006900)
    }
}
