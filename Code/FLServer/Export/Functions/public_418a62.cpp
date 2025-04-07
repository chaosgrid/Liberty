#include "FLServer-PCH.h"

PROC_DECLARE(0x418a62, internal_418a62, public_418a62);
extern "C" NAKED register_t __cdecl internal_418a62()
{
    __asm
    {
        jmp dword ptr ds : [public_41b388]
        UNREACHABLE_TRAP(0x418a62)
    }
}
