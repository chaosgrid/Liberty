#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e2590);

PROC_DECLARE(0x62e2590, internal_62e2590, public_62e2590);
extern "C" NAKED register_t __cdecl internal_62e2590()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx]
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+8]
        fstp dword ptr ds : [eax+8]
        ret 4
        UNREACHABLE_TRAP(0x62e2590)
    }
}
