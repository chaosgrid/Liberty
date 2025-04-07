#include "FLServer-PCH.h"

PROC_DECLARE(0x401020, internal_401020, public_401020);
extern "C" NAKED register_t __cdecl internal_401020()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41bc64]
        mov dword ptr ds : [public_425ef8], eax
        ret 
        UNREACHABLE_TRAP(0x401020)
    }
}
