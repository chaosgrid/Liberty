#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f5a820);

PROC_DECLARE(0x6f5a820, internal_6f5a820, public_6f5a820);
extern "C" NAKED register_t __cdecl internal_6f5a820()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [public_6fce768], al
        ret 
        UNREACHABLE_TRAP(0x6f5a820)
    }
}
