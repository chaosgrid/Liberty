#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b75ed0, internal_6b75ed0, public_6b75ed0);
extern "C" NAKED register_t __cdecl internal_6b75ed0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x11C], 5
        xor eax, eax
        ret 0x10
        UNREACHABLE_TRAP(0x6b75ed0)
    }
}
