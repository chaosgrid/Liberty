#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4023b0);

PROC_DECLARE(0x4023b0, internal_4023b0, public_4023b0);
extern "C" NAKED register_t __cdecl internal_4023b0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x9AE], al
        ret 4
        UNREACHABLE_TRAP(0x4023b0)
    }
}
