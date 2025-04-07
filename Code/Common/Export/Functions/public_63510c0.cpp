#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63510c0);

PROC_DECLARE(0x63510c0, internal_63510c0, public_63510c0);
extern "C" NAKED register_t __cdecl internal_63510c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fchs 
        fstp dword ptr ds : [ecx]
        fld dword ptr ds : [eax+4]
        fchs 
        fstp dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax+8]
        fchs 
        fstp dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        ret 4
        UNREACHABLE_TRAP(0x63510c0)
    }
}
