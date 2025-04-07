#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d8960);

PROC_DECLARE(0x62d8960, internal_62d8960, public_62d8960);
extern "C" NAKED register_t __cdecl internal_62d8960()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0xD8], al
        ret 4
        UNREACHABLE_TRAP(0x62d8960)
    }
}
