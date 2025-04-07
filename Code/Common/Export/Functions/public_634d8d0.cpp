#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d8d0);

PROC_DECLARE(0x634d8d0, internal_634d8d0, public_634d8d0);
extern "C" NAKED register_t __cdecl internal_634d8d0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax]
        fld dword ptr ds : [ecx+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fmul dword ptr ds : [ecx+0x3C]
        fld dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+0x20]
        mov dword ptr ss : [esp+4], eax
        fmul st, st(1)
        mov eax, dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+0x30]
        fmul st, st(1)
        fadd dword ptr ss : [esp]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+0x40]
        fmul st, st(1)
        faddp st(2), st
        fstp st(0)
        fld dword ptr ds : [ecx+0x24]
        fmul dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+0x34]
        fmul dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp]
        fadd dword ptr ds : [ecx+0x50]
        fld dword ptr ds : [ecx+0x44]
        fmul dword ptr ss : [esp+4]
        fadd st, st(2)
        fadd dword ptr ds : [ecx+0x54]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [ecx+0x4C]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+8], ecx
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp st(0)
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x634d8d0)
    }
}
