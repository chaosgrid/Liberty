#include "Common-PCH.h"

PROC_DECLARE(0x6290890, internal_6290890, public_6290890);
extern "C" NAKED register_t __cdecl internal_6290890()
{
    __asm
    {
        fld dword ptr ds : [public_639c418]
        fdiv dword ptr ds : [public_63eb318]
        fstp dword ptr ds : [public_63fc0f8]
        ret 
        UNREACHABLE_TRAP(0x6290890)
    }
}
