#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6224160);

PROC_DECLARE(0x6224160, internal_6224160, public_6224160);
extern "C" NAKED register_t __cdecl internal_6224160()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0xC]
        fadd dword ptr ds : [ecx+0xA8]
        fstp dword ptr ds : [eax+0xC]
        fld dword ptr ds : [ecx+0xAC]
        fadd dword ptr ds : [eax+0x10]
        fstp dword ptr ds : [eax+0x10]
        fld dword ptr ds : [ecx+0xB0]
        fadd dword ptr ds : [eax+0x14]
        fstp dword ptr ds : [eax+0x14]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6224160)
    }
}
