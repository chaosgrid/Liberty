#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f6fc0, internal_4f6fc0, public_4f6fc0);
extern "C" NAKED register_t __cdecl internal_4f6fc0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_674ccc], 0x84
        mov dword ptr ds : [public_674cd0], eax
        mov dword ptr ds : [public_674cd4], 0xFFFFFFFF
        mov dword ptr ds : [public_674cd8], eax
        ret 
        UNREACHABLE_TRAP(0x4f6fc0)
    }
}
