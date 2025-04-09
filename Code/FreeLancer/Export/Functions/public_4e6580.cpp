#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e6580);

PROC_DECLARE(0x4e6580, internal_4e6580, public_4e6580);
extern "C" NAKED register_t __cdecl internal_4e6580()
{
    __asm
    {
        sub esp, 0xC
        fld dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [ecx]
        fld dword ptr ds : [ecx+0x10]
        fadd dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx+0x14]
        fadd dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+8]
        fxch 
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ds : [eax]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ds : [eax+8]
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x4e6580)
    }
}
