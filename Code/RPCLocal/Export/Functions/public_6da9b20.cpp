#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da9b20, internal_6da9b20, public_6da9b20);
extern "C" NAKED register_t __cdecl internal_6da9b20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db62f8]
        mov dword ptr ds : [public_6dbc180], eax
        ret 
        UNREACHABLE_TRAP(0x6da9b20)
    }
}
