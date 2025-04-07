#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348180);

PROC_DECLARE(0x6348180, internal_6348180, public_6348180);
extern "C" NAKED register_t __cdecl internal_6348180()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        fchs 
        fld dword ptr ds : [eax+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ds : [ecx]
        mov dword ptr ds : [ecx+8], eax
        fstp dword ptr ds : [ecx+4]
        ret 4
        UNREACHABLE_TRAP(0x6348180)
    }
}
