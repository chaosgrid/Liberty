#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6358270);

PROC_DECLARE(0x6358270, internal_6358270, public_6358270);
extern "C" NAKED register_t __cdecl internal_6358270()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+edx*4+0xEC]
        shl edx, 4
        fld dword ptr ds : [ecx+edx+0x48]
        add ecx, edx
        fsub dword ptr ds : [eax+0xA8]
        fld dword ptr ds : [ecx+0x4C]
        fsub dword ptr ds : [eax+0xAC]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x44]
        mov edx, dword ptr ss : [esp+4]
        fsub dword ptr ds : [eax+0xA4]
        mov dword ptr ds : [eax+0x8C], edx
        fstp dword ptr ds : [eax+0x84]
        fstp dword ptr ds : [eax+0x88]
        fld dword ptr ds : [ecx+0x28]
        fsub dword ptr ds : [eax+0x98]
        fld dword ptr ds : [ecx+0x2C]
        fsub dword ptr ds : [eax+0x9C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x24]
        mov ecx, dword ptr ss : [esp+4]
        fsub dword ptr ds : [eax+0x94]
        mov dword ptr ds : [eax+0x7C], ecx
        fstp dword ptr ds : [eax+0x74]
        fstp dword ptr ds : [eax+0x78]
        ret 4
        UNREACHABLE_TRAP(0x6358270)
    }
}
