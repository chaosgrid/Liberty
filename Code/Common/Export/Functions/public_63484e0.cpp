#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63484e0);

PROC_DECLARE(0x63484e0, internal_63484e0, public_63484e0);
extern "C" NAKED register_t __cdecl internal_63484e0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax]
        fld dword ptr ds : [ecx]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fmul dword ptr ds : [ecx+0x20]
        fld dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+4], eax
        fmul st, st(1)
        mov eax, dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+0x14]
        fmul st, st(1)
        fadd dword ptr ss : [esp]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+0x24]
        fmul st, st(1)
        faddp st(2), st
        fstp st(0)
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx+0x18]
        fmul dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp]
        fadd dword ptr ds : [ecx+0x34]
        fld dword ptr ds : [ecx+0x28]
        fmul dword ptr ss : [esp+4]
        fadd st, st(2)
        fadd dword ptr ds : [ecx+0x38]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [ecx+0x30]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+8], ecx
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp st(0)
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x63484e0)
    }
}
