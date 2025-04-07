#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63041f0);

PROC_DECLARE(0x63041f0, internal_63041f0, public_63041f0);
extern "C" NAKED register_t __cdecl internal_63041f0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        xor eax, eax
        fcos 
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0x14], eax
        mov dword ptr ds : [ecx+0x18], eax
        mov dword ptr ds : [ecx+0x1C], eax
        mov dword ptr ds : [ecx+0x20], 0x3F800000
        fld dword ptr ss : [esp+4]
        fsin 
        fld st(1)
        fstp dword ptr ds : [ecx]
        fld st(0)
        fchs 
        fstp dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+0xC]
        fstp dword ptr ds : [ecx+0x10]
        ret 4
        UNREACHABLE_TRAP(0x63041f0)
    }
}
