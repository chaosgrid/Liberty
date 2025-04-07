#include "FLServer-PCH.h"

PROC_DECLARE(0x418daa, internal_418daa, public_418daa);
extern "C" NAKED register_t __cdecl internal_418daa()
{
    __asm
    {
        jmp dword ptr ds : [public_41b5c4]
        UNREACHABLE_TRAP(0x418daa)
    }
}
