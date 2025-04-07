#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c330b0);

PROC_DECLARE(0x6c330b0, internal_6c330b0, public_6c330b0);
extern "C" NAKED register_t __cdecl internal_6c330b0()
{
    __asm
    {
        push ecx
        fld dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [ecx+0x14]
        mov dword ptr ss : [esp], eax
        fld dword ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+0x1C]
        fld dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+0x18]
        fld dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp]
        fstp dword ptr ds : [eax]
        mov dword ptr ds : [eax+4], ecx
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0xC]
        fstp dword ptr ds : [eax+0x10]
        fstp dword ptr ds : [eax+0x14]
        fstp dword ptr ds : [eax+0x18]
        fstp dword ptr ds : [eax+0x1C]
        fstp dword ptr ds : [eax+0x20]
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6c330b0)
    }
}
