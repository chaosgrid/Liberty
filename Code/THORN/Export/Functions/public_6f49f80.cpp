#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49e20);

PROC_DECLARE(0x6f49f80, internal_6f49f80, public_6f49f80);
extern "C" NAKED register_t __cdecl internal_6f49f80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_6f49e20
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x6f49f80)
    }
}
