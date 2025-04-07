#include "Common-PCH.h"

PROC_DECLARE(0x632eae0, internal_632eae0, public_632eae0);
extern "C" NAKED register_t __cdecl internal_632eae0()
{
    __asm
    {
        dec dword ptr ds : [public_640a750]
        ret 4
        UNREACHABLE_TRAP(0x632eae0)
    }
}
