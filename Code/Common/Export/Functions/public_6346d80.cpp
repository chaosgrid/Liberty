#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346d80);

PROC_DECLARE(0x6346d80, internal_6346d80, public_6346d80);
extern "C" NAKED register_t __cdecl internal_6346d80()
{
    __asm
    {
        sub esp, 0x10
        fld dword ptr ds : [ecx+0x34]
        mov eax, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [eax]
        fld dword ptr ds : [ecx+0x38]
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x3C]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [ecx+0x74]
        fstp dword ptr ds : [ecx+0x74]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [ecx+0x78]
        fstp dword ptr ds : [ecx+0x78]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [ecx+0x7C]
        fstp dword ptr ds : [ecx+0x7C]
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6346d80)
    }
}
