#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c47a0);

PROC_DECLARE(0x62c47a0, internal_62c47a0, public_62c47a0);
extern "C" NAKED register_t __cdecl internal_62c47a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        faddp 
        ret 
        UNREACHABLE_TRAP(0x62c47a0)
    }
}
