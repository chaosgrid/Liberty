#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6347410);

PROC_DECLARE(0x6346bb0, internal_6346bb0, public_6346bb0);
extern "C" NAKED register_t __cdecl internal_6346bb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax+8]
        fld dword ptr ds : [eax]
        mov eax, edx
        fstp dword ptr ds : [ecx+0x14]
        mov dword ptr ss : [esp+4], edx
        fstp dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [ecx+0x1C], eax
        call public_6347410
        ret 4
        UNREACHABLE_TRAP(0x6346bb0)
    }
}
