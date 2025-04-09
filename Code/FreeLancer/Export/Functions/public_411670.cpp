#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411670);

PROC_DECLARE(0x411670, internal_411670, public_411670);
extern "C" NAKED register_t __cdecl internal_411670()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x5C], 0x3F800000
        fmul dword ptr ds : [public_5c77f4]
        fst dword ptr ds : [ecx+0x70]
        fmul qword ptr ds : [public_5c75e8]
        fstp dword ptr ds : [ecx+0x6C]
        ret 4
        UNREACHABLE_TRAP(0x411670)
    }
}
