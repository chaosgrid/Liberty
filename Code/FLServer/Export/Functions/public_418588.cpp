#include "FLServer-PCH.h"

PROC_DECLARE(0x418588, internal_418588, public_418588);
extern "C" NAKED register_t __cdecl internal_418588()
{
    __asm
    {
        jmp dword ptr ds : [public_41b0dc]
        UNREACHABLE_TRAP(0x418588)
    }
}
