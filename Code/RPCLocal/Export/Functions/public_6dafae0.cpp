#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dafae0, internal_6dafae0, public_6dafae0);
extern "C" NAKED register_t __cdecl internal_6dafae0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6704]
        mov dword ptr ds : [public_6dbc500], eax
        ret 
        UNREACHABLE_TRAP(0x6dafae0)
    }
}
