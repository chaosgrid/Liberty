#include "EngBase-PCH.h"

PROC_DECLARE(0x661f430, internal_661f430, public_661f430);
extern "C" NAKED register_t __cdecl internal_661f430()
{
    __asm
    {
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+0x34]
        mov edx, dword ptr ds : [ecx]
        add eax, 0x38
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        ret 0x10
        UNREACHABLE_TRAP(0x661f430)
    }
}
