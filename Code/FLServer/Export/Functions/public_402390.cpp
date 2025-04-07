#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402390);

PROC_DECLARE(0x402390, internal_402390, public_402390);
extern "C" NAKED register_t __cdecl internal_402390()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x9A8], al
        ret 4
        UNREACHABLE_TRAP(0x402390)
    }
}
