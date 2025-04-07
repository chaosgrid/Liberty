#include "Common-PCH.h"

PROC_DECLARE(0x62b37b0, internal_62b37b0, public_62b37b0);
extern "C" NAKED register_t __cdecl internal_62b37b0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+0x2C0]
        mov dword ptr ss : [esp], eax
        mov eax, dword ptr ds : [ecx+0x88]
        fld dword ptr ss : [esp]
        fmul dword ptr ds : [eax+0x110]
        add eax, 0x108
        fld dword ptr ss : [esp]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp]
        fmul dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62b37b0)
    }
}
