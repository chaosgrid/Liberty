#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4c586);

PROC_DECLARE(0x6d4c586, internal_6d4c586, public_6d4c586);
extern "C" NAKED register_t __cdecl internal_6d4c586()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x19C]
        mov edx, dword ptr ds : [eax+0x110]
        mov dword ptr ds : [ecx+0x5C], edx
        mov eax, dword ptr ds : [eax+0x60]
        mov dword ptr ds : [ecx+0x60], eax
        ret 
        UNREACHABLE_TRAP(0x6d4c586)
    }
}
