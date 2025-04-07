#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd4340);

PROC_DECLARE(0x6bd4340, internal_6bd4340, public_6bd4340);
extern "C" NAKED register_t __cdecl internal_6bd4340()
{
    __asm
    {
        movsx eax, byte ptr ds : [ecx+0x68]
        ret 
        UNREACHABLE_TRAP(0x6bd4340)
    }
}
