#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5a7b0);

PROC_DECLARE(0x6f5a7b0, internal_6f5a7b0, public_6f5a7b0);
extern "C" NAKED register_t __cdecl internal_6f5a7b0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [public_6fce76a], al
        ret 
        UNREACHABLE_TRAP(0x6f5a7b0)
    }
}
