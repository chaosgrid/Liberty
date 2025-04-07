#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0270);

PROC_DECLARE(0x62a0270, internal_62a0270, public_62a0270);
extern "C" NAKED register_t __cdecl internal_62a0270()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        fild dword ptr ds : [eax+0x10]
        fmul dword ptr ss : [esp+4]
        fstp dword ptr ds : [ecx+0xC]
        ret 4
        UNREACHABLE_TRAP(0x62a0270)
    }
}
