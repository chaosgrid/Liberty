#include "FLServer-PCH.h"

PROC_DECLARE(0x418816, internal_418816, public_418816);
extern "C" NAKED register_t __cdecl internal_418816()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb3c]
        UNREACHABLE_TRAP(0x418816)
    }
}
