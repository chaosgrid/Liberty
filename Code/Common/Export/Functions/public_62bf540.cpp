#include "Common-PCH.h"

PROC_DECLARE(0x62bf540, internal_62bf540, public_62bf540);
extern "C" NAKED register_t __cdecl internal_62bf540()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], 0
        mov eax, 0xFFFFFFFD
        ret 4
        UNREACHABLE_TRAP(0x62bf540)
    }
}
