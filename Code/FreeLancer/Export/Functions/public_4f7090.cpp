#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f7090, internal_4f7090, public_4f7090);
extern "C" NAKED register_t __cdecl internal_4f7090()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fsubr qword ptr ds : [public_5c89b8]
        fstp dword ptr ds : [public_6129c8]
        ret 4
        UNREACHABLE_TRAP(0x4f7090)
    }
}
