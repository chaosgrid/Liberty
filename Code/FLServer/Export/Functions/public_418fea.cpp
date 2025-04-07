#include "FLServer-PCH.h"

PROC_DECLARE(0x418fea, internal_418fea, public_418fea);
extern "C" NAKED register_t __cdecl internal_418fea()
{
    __asm
    {
        jmp dword ptr ds : [public_41b74c]
        UNREACHABLE_TRAP(0x418fea)
    }
}
