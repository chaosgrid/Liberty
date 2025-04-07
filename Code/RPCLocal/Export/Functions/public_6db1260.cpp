#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1260, internal_6db1260, public_6db1260);
extern "C" NAKED register_t __cdecl internal_6db1260()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6774]
        mov dword ptr ds : [public_6dbc580], eax
        ret 
        UNREACHABLE_TRAP(0x6db1260)
    }
}
