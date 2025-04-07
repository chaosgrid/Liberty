#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632f920);

PROC_DECLARE(0x632f920, internal_632f920, public_632f920);
extern "C" NAKED register_t __cdecl internal_632f920()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        faddp 
        fsub dword ptr ds : [ecx+0xC]
        ret 4
        UNREACHABLE_TRAP(0x632f920)
    }
}
