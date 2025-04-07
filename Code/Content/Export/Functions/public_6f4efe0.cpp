#include "Content-PCH.h"

PROC_DECLARE(0x6f4efe0, internal_6f4efe0, public_6f4efe0);
extern "C" NAKED register_t __cdecl internal_6f4efe0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fce76c]
        mov ecx, eax
        inc eax
        mov dword ptr ds : [public_6fce76c], eax
        mov dword ptr ds : [public_6fd0cd0], ecx
        ret 
        UNREACHABLE_TRAP(0x6f4efe0)
    }
}
