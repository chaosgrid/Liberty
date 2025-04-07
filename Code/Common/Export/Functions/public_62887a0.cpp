#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62887a0);

PROC_DECLARE(0x62887a0, internal_62887a0, public_62887a0);
extern "C" NAKED register_t __cdecl internal_62887a0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [ecx+4]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        ret 4
        UNREACHABLE_TRAP(0x62887a0)
    }
}
