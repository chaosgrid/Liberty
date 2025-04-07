#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348f50);
CLANG_FORWARD_PROC_SYMBOL(public_634bb90);

PROC_DECLARE(0x6348f50, internal_6348f50, public_6348f50);
extern "C" NAKED register_t __cdecl internal_6348f50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xC]
        push eax
        call public_634bb90
        ret 4
        UNREACHABLE_TRAP(0x6348f50)
    }
}
