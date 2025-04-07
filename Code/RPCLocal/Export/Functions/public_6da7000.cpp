#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da7000, internal_6da7000, public_6da7000);
extern "C" NAKED register_t __cdecl internal_6da7000()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db61f4]
        mov dword ptr ds : [public_6dbc090], eax
        ret 
        UNREACHABLE_TRAP(0x6da7000)
    }
}
