#include "FLServer-PCH.h"

PROC_DECLARE(0x418dbc, internal_418dbc, public_418dbc);
extern "C" NAKED register_t __cdecl internal_418dbc()
{
    __asm
    {
        jmp dword ptr ds : [public_41b5d0]
        UNREACHABLE_TRAP(0x418dbc)
    }
}
