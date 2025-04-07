#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a286);

PROC_DECLARE(0x6b6a092, internal_6b6a092, public_6b6a092);
extern "C" NAKED register_t __cdecl internal_6b6a092()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6b6a286
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6b6a092)
    }
}
