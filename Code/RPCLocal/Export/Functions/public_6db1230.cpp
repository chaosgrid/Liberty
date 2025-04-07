#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1230, internal_6db1230, public_6db1230);
extern "C" NAKED register_t __cdecl internal_6db1230()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6768]
        mov dword ptr ds : [public_6dbc574], eax
        ret 
        UNREACHABLE_TRAP(0x6db1230)
    }
}
