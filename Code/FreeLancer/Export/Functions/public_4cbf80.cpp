#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cbf80);

PROC_DECLARE(0x4cbf80, internal_4cbf80, public_4cbf80);
extern "C" NAKED register_t __cdecl internal_4cbf80()
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
        UNREACHABLE_TRAP(0x4cbf80)
    }
}
