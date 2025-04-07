#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1640, internal_6db1640, public_6db1640);
extern "C" NAKED register_t __cdecl internal_6db1640()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db678c]
        mov dword ptr ds : [public_6dbc5a0], eax
        ret 
        UNREACHABLE_TRAP(0x6db1640)
    }
}
