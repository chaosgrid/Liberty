#include "DALib-PCH.h"

PROC_DECLARE(0x65c2c60, internal_65c2c60, public_65c2c60);
extern "C" NAKED register_t __cdecl internal_65c2c60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65ca020]
        ret 
        UNREACHABLE_TRAP(0x65c2c60)
    }
}
