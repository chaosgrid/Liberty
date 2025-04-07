#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ecc50);

PROC_DECLARE(0x62ecc50, internal_62ecc50, public_62ecc50);
extern "C" NAKED register_t __cdecl internal_62ecc50()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0xC3], al
        ret 4
        UNREACHABLE_TRAP(0x62ecc50)
    }
}
