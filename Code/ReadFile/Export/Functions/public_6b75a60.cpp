#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b75a60, internal_6b75a60, public_6b75a60);
extern "C" NAKED register_t __cdecl internal_6b75a60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x11C]
        ret 4
        UNREACHABLE_TRAP(0x6b75a60)
    }
}
