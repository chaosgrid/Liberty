#include "Common-PCH.h"

PROC_DECLARE(0x63127f0, internal_63127f0, public_63127f0);
extern "C" NAKED register_t __cdecl internal_63127f0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx+0x10], eax
        mov byte ptr ds : [ecx+0x14], 1
        ret 
        UNREACHABLE_TRAP(0x63127f0)
    }
}
