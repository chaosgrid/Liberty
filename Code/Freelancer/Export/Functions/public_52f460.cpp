#include "Freelancer-PCH.h"

PROC_DECLARE(0x52f460, internal_52f460, public_52f460);
extern "C" NAKED register_t __cdecl internal_52f460()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x30]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x52f460)
    }
}
