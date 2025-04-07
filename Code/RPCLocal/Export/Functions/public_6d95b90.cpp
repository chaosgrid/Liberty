#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d95b90, internal_6d95b90, public_6d95b90);
extern "C" NAKED register_t __cdecl internal_6d95b90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3dd8]
        mov dword ptr ds : [public_6dbbe0c], eax
        ret 
        UNREACHABLE_TRAP(0x6d95b90)
    }
}
