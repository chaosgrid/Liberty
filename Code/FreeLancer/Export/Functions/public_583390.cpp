#include "FreeLancer-PCH.h"

PROC_DECLARE(0x583390, internal_583390, public_583390);
extern "C" NAKED register_t __cdecl internal_583390()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x3C4]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [ecx+0x3C4]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [ecx+0x3C8]
        fstp dword ptr ds : [ecx+0x3C8]
        fld dword ptr ds : [eax+8]
        fadd dword ptr ds : [ecx+0x3CC]
        fstp dword ptr ds : [ecx+0x3CC]
        fld dword ptr ds : [ecx+0x468]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [ecx+0x468]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [ecx+0x46C]
        fstp dword ptr ds : [ecx+0x46C]
        fld dword ptr ds : [eax+8]
        fadd dword ptr ds : [ecx+0x470]
        fstp dword ptr ds : [ecx+0x470]
        fld dword ptr ds : [ecx+0x50C]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [ecx+0x50C]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [ecx+0x510]
        fstp dword ptr ds : [ecx+0x510]
        fld dword ptr ds : [eax+8]
        fadd dword ptr ds : [ecx+0x514]
        fstp dword ptr ds : [ecx+0x514]
        fld dword ptr ds : [ecx+0x61C]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [ecx+0x61C]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [ecx+0x620]
        fstp dword ptr ds : [ecx+0x620]
        fld dword ptr ds : [eax+8]
        fadd dword ptr ds : [ecx+0x624]
        fstp dword ptr ds : [ecx+0x624]
        fld dword ptr ds : [eax]
        fadd dword ptr ds : [ecx+0x64C]
        fstp dword ptr ds : [ecx+0x64C]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [ecx+0x650]
        fstp dword ptr ds : [ecx+0x650]
        fld dword ptr ds : [eax+8]
        fadd dword ptr ds : [ecx+0x654]
        fstp dword ptr ds : [ecx+0x654]
        ret 4
        UNREACHABLE_TRAP(0x583390)
    }
}
