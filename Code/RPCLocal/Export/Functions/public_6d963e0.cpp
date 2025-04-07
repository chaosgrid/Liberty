#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d963e0, internal_6d963e0, public_6d963e0);
extern "C" NAKED register_t __cdecl internal_6d963e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3e10]
        mov dword ptr ds : [public_6dbbe2c], eax
        ret 
        UNREACHABLE_TRAP(0x6d963e0)
    }
}
