#include "Alchemy-PCH.h"

PROC_DECLARE(0x62236e0, internal_62236e0, public_62236e0);
extern "C" NAKED register_t __cdecl internal_62236e0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+0xA4]
        fadd dword ptr ds : [eax+0xC]
        fstp dword ptr ds : [eax+0xC]
        fld dword ptr ds : [ecx+0xA8]
        fadd dword ptr ds : [eax+0x10]
        fstp dword ptr ds : [eax+0x10]
        fld dword ptr ds : [ecx+0xAC]
        fadd dword ptr ds : [eax+0x14]
        fstp dword ptr ds : [eax+0x14]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x62236e0)
    }
}
