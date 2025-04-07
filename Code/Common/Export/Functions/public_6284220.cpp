#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284220);

PROC_DECLARE(0x6284220, internal_6284220, public_6284220);
extern "C" NAKED register_t __cdecl internal_6284220()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x54]
        mov edx, dword ptr ds : [ecx+0x98]
        fld dword ptr ds : [edx+0x20]
        ret 
        UNREACHABLE_TRAP(0x6284220)
    }
}
