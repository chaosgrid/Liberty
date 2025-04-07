#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402370);

PROC_DECLARE(0x402370, internal_402370, public_402370);
extern "C" NAKED register_t __cdecl internal_402370()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x9A9], al
        ret 4
        UNREACHABLE_TRAP(0x402370)
    }
}
