#include "DebugLib-PCH.h"

PROC_DECLARE(0x65dd1db, internal_65dd1db, public_65dd1db);
extern "C" NAKED register_t __cdecl internal_65dd1db()
{
    __asm
    {
        push dword ptr ds : [public_65e63d0]
        call dword ptr ds : [public_65e10ec]
        ret 
        UNREACHABLE_TRAP(0x65dd1db)
    }
}
