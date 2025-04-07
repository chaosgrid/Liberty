#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e61f0);

PROC_DECLARE(0x62e61f0, internal_62e61f0, public_62e61f0);
extern "C" NAKED register_t __cdecl internal_62e61f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0xC]
        UNREACHABLE_TRAP(0x62e61f0)
    }
}
