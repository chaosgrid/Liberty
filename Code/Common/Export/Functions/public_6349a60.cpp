#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6349a60);

PROC_DECLARE(0x6349a60, internal_6349a60, public_6349a60);
extern "C" NAKED register_t __cdecl internal_6349a60()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_63a54a0
        fld dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [eax+0x3C], edx
        fstp dword ptr ds : [eax+0x34]
        mov dword ptr ss : [esp+4], edx
        fstp dword ptr ds : [eax+0x38]
        mov edx, dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+4], edx
        fld dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0xC], edx
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [eax+0x44], edx
        mov ecx, dword ptr ds : [ecx+0x24]
        mov dword ptr ds : [eax+0x48], ecx
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax+0xC]
        fstp dword ptr ds : [eax+0x24]
        mov ecx, edx
        fstp dword ptr ds : [eax+0x28]
        mov dword ptr ds : [eax+0x2C], ecx
        fld dword ptr ds : [eax+0x44]
        mov dword ptr ss : [esp+4], edx
        fmul dword ptr ds : [public_63a5460]
        fld st(0)
        fmul dword ptr ds : [eax+0x38]
        fadd dword ptr ds : [eax+0x28]
        fld st(1)
        fmul dword ptr ds : [eax+0x3C]
        fadd dword ptr ds : [eax+0x2C]
        fstp dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+4]
        fxch 
        fmul dword ptr ds : [eax+0x34]
        mov dword ptr ds : [eax+0x2C], edx
        fadd dword ptr ds : [eax+0x24]
        fstp dword ptr ds : [eax+0x24]
        fstp dword ptr ds : [eax+0x28]
        fld dword ptr ds : [eax+0x44]
        fld st(0)
        fmul dword ptr ds : [eax+0x38]
        fadd dword ptr ds : [eax+8]
        fld st(1)
        fmul dword ptr ds : [eax+0x3C]
        fadd dword ptr ds : [eax+0xC]
        fstp dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+4]
        fxch 
        fmul dword ptr ds : [eax+0x34]
        fadd dword ptr ds : [eax+4]
        mov dword ptr ds : [eax+0x1C], ecx
        fstp dword ptr ds : [eax+0x14]
        fstp dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x6349a60)
    }
}
