#include "Common-PCH.h"

PROC_DECLARE(0x6327fb0, internal_6327fb0, public_6327fb0);
extern "C" NAKED register_t __cdecl internal_6327fb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_63ed670], eax
        mov dword ptr ds : [public_63ed674], ecx
        ret 
        UNREACHABLE_TRAP(0x6327fb0)
    }
}
