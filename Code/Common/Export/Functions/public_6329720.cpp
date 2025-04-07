#include "Common-PCH.h"

PROC_DECLARE(0x6329720, internal_6329720, public_6329720);
extern "C" NAKED register_t __cdecl internal_6329720()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx+8], edx
        ret 8
        UNREACHABLE_TRAP(0x6329720)
    }
}
