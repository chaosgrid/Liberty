#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6309b50);

PROC_DECLARE(0x6309b50, internal_6309b50, public_6309b50);
extern "C" NAKED register_t __cdecl internal_6309b50()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0xC], al
        ret 4
        UNREACHABLE_TRAP(0x6309b50)
    }
}
