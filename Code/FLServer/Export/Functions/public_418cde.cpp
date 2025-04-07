#include "FLServer-PCH.h"

PROC_DECLARE(0x418cde, internal_418cde, public_418cde);
extern "C" NAKED register_t __cdecl internal_418cde()
{
    __asm
    {
        jmp dword ptr ds : [public_41b53c]
        UNREACHABLE_TRAP(0x418cde)
    }
}
