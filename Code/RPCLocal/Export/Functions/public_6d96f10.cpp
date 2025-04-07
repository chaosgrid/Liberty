#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d96f10, internal_6d96f10, public_6d96f10);
extern "C" NAKED register_t __cdecl internal_6d96f10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3ed8]
        mov dword ptr ds : [public_6dbbe40], eax
        ret 
        UNREACHABLE_TRAP(0x6d96f10)
    }
}
