#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5a800);

PROC_DECLARE(0x6f5a800, internal_6f5a800, public_6f5a800);
extern "C" NAKED register_t __cdecl internal_6f5a800()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [public_6fce769], al
        ret 
        UNREACHABLE_TRAP(0x6f5a800)
    }
}
