#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347df0);

PROC_DECLARE(0x6347df0, internal_6347df0, public_6347df0);
extern "C" NAKED register_t __cdecl internal_6347df0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fsqrt 
        fdivr dword ptr ds : [public_63a53d0]
        ret 
        UNREACHABLE_TRAP(0x6347df0)
    }
}
