#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac230, internal_6dac230, public_6dac230);
extern "C" NAKED register_t __cdecl internal_6dac230()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db645c]
        mov dword ptr ds : [public_6dbc2b4], eax
        ret 
        UNREACHABLE_TRAP(0x6dac230)
    }
}
