#include "Alchemy-PCH.h"

PROC_DECLARE(0x62464a0, internal_62464a0, public_62464a0);
extern "C" NAKED register_t __cdecl internal_62464a0()
{
    __asm
    {
        jmp dword ptr ds : [public_624b070]
        UNREACHABLE_TRAP(0x62464a0)
    }
}
