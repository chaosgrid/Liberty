#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ea60);

PROC_DECLARE(0x6d4ea60, internal_6d4ea60, public_6d4ea60);
extern "C" NAKED register_t __cdecl internal_6d4ea60()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [ecx]
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        ret 4
        UNREACHABLE_TRAP(0x6d4ea60)
    }
}
