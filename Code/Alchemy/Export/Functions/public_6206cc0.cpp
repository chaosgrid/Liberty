#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206cc0);

PROC_DECLARE(0x6206cc0, internal_6206cc0, public_6206cc0);
extern "C" NAKED register_t __cdecl internal_6206cc0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x1C]
        fld dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        ret 4
        UNREACHABLE_TRAP(0x6206cc0)
    }
}
