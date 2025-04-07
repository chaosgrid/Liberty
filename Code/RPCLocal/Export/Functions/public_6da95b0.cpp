#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da95b0, internal_6da95b0, public_6da95b0);
extern "C" NAKED register_t __cdecl internal_6da95b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db62e8]
        mov dword ptr ds : [public_6dbc174], eax
        ret 
        UNREACHABLE_TRAP(0x6da95b0)
    }
}
