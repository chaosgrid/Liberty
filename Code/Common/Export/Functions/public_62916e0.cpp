#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62916e0);

PROC_DECLARE(0x62916e0, internal_62916e0, public_62916e0);
extern "C" NAKED register_t __cdecl internal_62916e0()
{
    __asm
    {
        sub esp, 0x18
        fld dword ptr ds : [ecx+0x9C]
        mov eax, dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+0xA0]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0xA4]
        fmul dword ptr ds : [public_639c13c]
        fstp dword ptr ss : [esp+8]
        fld qword ptr ss : [esp+0x20]
        fld st(0)
        fld dword ptr ss : [esp]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(2)
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(2)
        fstp dword ptr ss : [esp+4]
        fmul st, st(1)
        fxch 
        fstp st(0)
        fadd dword ptr ds : [ecx+0x80]
        fld dword ptr ss : [esp+4]
        fadd dword ptr ds : [ecx+0x7C]
        fld dword ptr ss : [esp]
        fadd dword ptr ds : [ecx+0x78]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x62916e0)
    }
}
