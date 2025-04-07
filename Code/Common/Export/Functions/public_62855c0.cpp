#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62855c0);

PROC_DECLARE(0x62855c0, internal_62855c0, public_62855c0);
extern "C" NAKED register_t __cdecl internal_62855c0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x54]
        mov eax, dword ptr ds : [ecx+0x98]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+0x44], edx
        fld dword ptr ds : [ecx]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+4]
        add eax, 0x24
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62855c0)
    }
}
