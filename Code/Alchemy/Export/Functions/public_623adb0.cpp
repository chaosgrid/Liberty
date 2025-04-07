#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623adb0);

PROC_DECLARE(0x623adb0, internal_623adb0, public_623adb0);
extern "C" NAKED register_t __cdecl internal_623adb0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x98]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x623adb0)
    }
}
