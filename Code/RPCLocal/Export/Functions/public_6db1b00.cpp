#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1b00, internal_6db1b00, public_6db1b00);
extern "C" NAKED register_t __cdecl internal_6db1b00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db67d4]
        mov dword ptr ds : [public_6dbc600], eax
        ret 
        UNREACHABLE_TRAP(0x6db1b00)
    }
}
