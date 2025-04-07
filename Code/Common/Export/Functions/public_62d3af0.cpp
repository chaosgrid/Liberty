#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d3af0);

PROC_DECLARE(0x62d3af0, internal_62d3af0, public_62d3af0);
extern "C" NAKED register_t __cdecl internal_62d3af0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+8]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        ret 4
        UNREACHABLE_TRAP(0x62d3af0)
    }
}
