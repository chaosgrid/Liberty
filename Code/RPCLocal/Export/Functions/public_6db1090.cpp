#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1090, internal_6db1090, public_6db1090);
extern "C" NAKED register_t __cdecl internal_6db1090()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db675c]
        mov dword ptr ds : [public_6dbc564], eax
        ret 
        UNREACHABLE_TRAP(0x6db1090)
    }
}
