#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d98a20, internal_6d98a20, public_6d98a20);
extern "C" NAKED register_t __cdecl internal_6d98a20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db4010]
        mov dword ptr ds : [public_6dbbebc], eax
        ret 
        UNREACHABLE_TRAP(0x6d98a20)
    }
}
