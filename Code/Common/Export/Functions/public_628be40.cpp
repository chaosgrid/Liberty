#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be40);

PROC_DECLARE(0x628be40, internal_628be40, public_628be40);
extern "C" NAKED register_t __cdecl internal_628be40()
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
        ret 4
        UNREACHABLE_TRAP(0x628be40)
    }
}
