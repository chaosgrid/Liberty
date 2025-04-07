#include "Common-PCH.h"

PROC_DECLARE(0x62d0b40, internal_62d0b40, public_62d0b40);
extern "C" NAKED register_t __cdecl internal_62d0b40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0xC]
        mov al, byte ptr ds : [ecx+0x28]
        or al, 2
        fst dword ptr ds : [ecx+0x40]
        mov byte ptr ds : [ecx+0x28], al
        fstp dword ptr ds : [ecx+0x44]
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x62d0b40)
    }
}
