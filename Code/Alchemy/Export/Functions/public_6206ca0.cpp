#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ca0);

PROC_DECLARE(0x6206ca0, internal_6206ca0, public_6206ca0);
extern "C" NAKED register_t __cdecl internal_6206ca0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x18]
        fld dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        ret 4
        UNREACHABLE_TRAP(0x6206ca0)
    }
}
