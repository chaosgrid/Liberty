#include "FLServer-PCH.h"

PROC_DECLARE(0x418bca, internal_418bca, public_418bca);
extern "C" NAKED register_t __cdecl internal_418bca()
{
    __asm
    {
        jmp dword ptr ds : [public_41b47c]
        UNREACHABLE_TRAP(0x418bca)
    }
}
