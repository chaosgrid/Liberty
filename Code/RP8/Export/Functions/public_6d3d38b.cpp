#include "RP8-PCH.h"


#define public_6d3d3f5 _public_6d3d3f5

PROC_DECLARE(0x6d3d38b, internal_6d3d38b, public_6d3d38b);
extern "C" NAKED register_t __cdecl internal_6d3d38b()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [esp+4]
        cmp eax, ecx
        fld dword ptr ds : [ecx+0x10]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx+0x20]
        fld dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        fstp dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [ecx+0x30]
        fld dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        fstp dword ptr ds : [eax+0x30]
        mov edx, dword ptr ds : [ecx+0x24]
        fld dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [eax+0x18], edx
        fstp dword ptr ds : [eax+0x24]
        mov edx, dword ptr ds : [ecx+0x34]
        fld dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [eax+0x1C], edx
        fstp dword ptr ds : [eax+0x34]
        mov edx, dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [ecx+0x2C]
        mov dword ptr ds : [eax+0x2C], edx
        fstp dword ptr ds : [eax+0x38]
        je public_6d3d3f5
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [eax+0x14], edx
        mov edx, dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [eax+0x28], edx
        mov ecx, dword ptr ds : [ecx+0x3C]
        mov dword ptr ds : [eax+0x3C], ecx
        public_6d3d3f5 : nop
        ret 8
        UNREACHABLE_TRAP(0x6d3d38b)
    }
}

#undef public_6d3d3f5
