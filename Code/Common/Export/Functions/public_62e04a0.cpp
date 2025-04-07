#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e04a0);

PROC_DECLARE(0x62e04a0, internal_62e04a0, public_62e04a0);
extern "C" NAKED register_t __cdecl internal_62e04a0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [ecx+4]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        ret 4
        UNREACHABLE_TRAP(0x62e04a0)
    }
}
