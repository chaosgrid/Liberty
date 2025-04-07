#include "Common-PCH.h"

PROC_DECLARE(0x631b7f0, internal_631b7f0, public_631b7f0);
extern "C" NAKED register_t __cdecl internal_631b7f0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        mov byte ptr ds : [ecx+0xC], 1
        mov dword ptr ds : [ecx+0x10], eax
        ret 
        UNREACHABLE_TRAP(0x631b7f0)
    }
}
