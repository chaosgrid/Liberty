#include "Common-PCH.h"

PROC_DECLARE(0x6288960, internal_6288960, public_6288960);
extern "C" NAKED register_t __cdecl internal_6288960()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_63fc0a8]
        xor eax, eax
        test ecx, ecx
        setne al
        ret 
        UNREACHABLE_TRAP(0x6288960)
    }
}
