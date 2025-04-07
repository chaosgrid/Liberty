#include "Content-PCH.h"

PROC_DECLARE(0x6f5c960, internal_6f5c960, public_6f5c960);
extern "C" NAKED register_t __cdecl internal_6f5c960()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fce76c]
        mov ecx, eax
        inc eax
        mov dword ptr ds : [public_6fce76c], eax
        mov dword ptr ds : [public_6fd1c2c], ecx
        ret 
        UNREACHABLE_TRAP(0x6f5c960)
    }
}
