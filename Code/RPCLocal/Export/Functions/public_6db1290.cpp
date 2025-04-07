#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1290, internal_6db1290, public_6db1290);
extern "C" NAKED register_t __cdecl internal_6db1290()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6780]
        mov dword ptr ds : [public_6dbc590], eax
        ret 
        UNREACHABLE_TRAP(0x6db1290)
    }
}
