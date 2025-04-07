#include "Common-PCH.h"

PROC_DECLARE(0x6287b00, internal_6287b00, public_6287b00);
extern "C" NAKED register_t __cdecl internal_6287b00()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx+0x10], eax
        ret 
        UNREACHABLE_TRAP(0x6287b00)
    }
}
