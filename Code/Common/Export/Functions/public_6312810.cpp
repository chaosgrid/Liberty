#include "Common-PCH.h"

PROC_DECLARE(0x6312810, internal_6312810, public_6312810);
extern "C" NAKED register_t __cdecl internal_6312810()
{
    __asm
    {
        mov eax, 0x4000
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        mov dword ptr ds : [ecx], offset public_63fd2c8
        mov dword ptr ds : [ecx+8], offset public_63fd2c8
        mov dword ptr ds : [ecx+0x10], eax
        mov byte ptr ds : [ecx+0x14], al
        ret 
        UNREACHABLE_TRAP(0x6312810)
    }
}
