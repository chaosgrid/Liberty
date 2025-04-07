#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6350740);
CLANG_FORWARD_PROC_SYMBOL(public_63507e0);

PROC_DECLARE(0x6350740, internal_6350740, public_6350740);
extern "C" NAKED register_t __cdecl internal_6350740()
{
    __asm
    {
        sub esp, 0x20
        mov eax, dword ptr ss : [esp+0x24]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax+8]
        fld dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x210], edx
        mov dword ptr ss : [esp+0x24], edx
        fstp dword ptr ds : [ecx+0x208]
        fstp dword ptr ds : [ecx+0x20C]
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [ecx+0x218], edx
        fld dword ptr ds : [ecx+0x218]
        mov eax, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+0x21C], eax
        mov eax, dword ptr ds : [edx+0x14]
        mov dword ptr ds : [ecx+0x220], eax
        mov eax, dword ptr ds : [eax+0x178]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ecx+0x218]
        lea edx, ss:[esp]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ecx+0x218]
        push edx
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ecx+0x208]
        lea edx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x20C]
        push edx
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+0x210]
        push eax
        fstp dword ptr ss : [esp+0x14]
        call public_63507e0
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6350740)
    }
}
